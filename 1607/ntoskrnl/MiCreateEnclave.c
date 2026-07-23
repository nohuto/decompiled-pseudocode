/*
 * XREFs of MiCreateEnclave @ 0x14065F014
 * Callers:
 *     NtCreateEnclave @ 0x14065F9DC (NtCreateEnclave.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14008B5C0 (ExReleaseAutoExpandPushLockShared.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiGetVmPartition @ 0x1401E8170 (MiGetVmPartition.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetEnclavePage @ 0x1401F0238 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x1401F03C8 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1401F0464 (MiReserveEnclavePages.c)
 *     MiAllocateAweInfo @ 0x14065C110 (MiAllocateAweInfo.c)
 *     MiAllocateEnclaveVad @ 0x14065E5A8 (MiAllocateEnclaveVad.c)
 *     KeCreateEnclave @ 0x1406E5E1C (KeCreateEnclave.c)
 */

__int64 __fastcall MiCreateEnclave(
        char a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r15
  unsigned __int64 v11; // r14
  __int64 result; // rax
  int EnclaveVad; // eax
  PVOID v14; // rbx
  int Enclave; // edi
  int v16; // esi
  int *VmPartition; // rax
  __int64 v18; // r9
  int *v19; // r12
  ULONG_PTR v20; // r14
  __int64 EnclavePage; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  PVOID P[2]; // [rsp+40h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  P[0] = 0LL;
  Process = CurrentThread->ApcState.Process;
  v11 = Process[1].ActiveProcessors.Bitmap[3];
  if ( !v11 )
  {
    result = MiAllocateAweInfo();
    if ( (int)result < 0 )
      return result;
    v11 = Process[1].ActiveProcessors.Bitmap[3];
  }
  EnclaveVad = MiAllocateEnclaveVad(a4, *a2, a3, (unsigned __int64 *)P);
  v14 = P[0];
  Enclave = EnclaveVad;
  if ( EnclaveVad >= 0 )
  {
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    v16 = (*((_DWORD *)v14 + 7) << 12) | 0xFFF;
    VmPartition = MiGetVmPartition((__int64)&Process[1].IdealNode[12]);
    v19 = VmPartition;
    if ( a5 )
      Enclave = MiReserveEnclavePages((__int64)v14, VmPartition, ((a5 & v18) != 0) + (a5 >> 12));
    if ( Enclave >= 0 )
    {
      --CurrentThread->SpecialApcDisable;
      v20 = ExAcquireAutoExpandPushLockShared(v11 + 16, 0LL);
      EnclavePage = MiGetEnclavePage(v19, 0);
      v22 = EnclavePage;
      if ( EnclavePage == -1 )
      {
        Enclave = -1073741801;
      }
      else
      {
        v23 = *((_QWORD *)v14 + 8);
        MiInitializeEnclavePfn(EnclavePage, v23, 4u);
        *(_QWORD *)v23 = MiMakeValidKernelPte(v22, 4, v23) | 0x42;
        if ( MiPteInShadowRange(v23) )
          MiWritePteShadow(v25, v24);
        Enclave = KeCreateEnclave((__int64)(v23 << 25) >> 16, *a2, v16 - (unsigned int)*a2 + 1, a6);
        if ( Enclave >= 0 )
        {
          if ( (a1 & 2) != 0 )
          {
            *((_DWORD *)v14 + 22) |= 2u;
            _InterlockedAdd((volatile signed __int32 *)(qword_140327FD0 + 276840556), 1u);
            v14 = P[0];
          }
          Enclave = 0;
        }
      }
      if ( v20 )
      {
        ExReleaseAutoExpandPushLockShared(v20, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
    }
  }
  if ( v14 )
  {
    if ( Enclave >= 0 )
      MiUnlockAndDereferenceVad((char *)v14);
    else
      MiDeleteVad((__int64)v14, 0);
  }
  return (unsigned int)Enclave;
}
