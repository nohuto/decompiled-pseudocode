/*
 * XREFs of MiCreateEnclave @ 0x1406297C0
 * Callers:
 *     NtCreateEnclave @ 0x14062A184 (NtCreateEnclave.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x140020390 (ExAcquireAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400C8A30 (ExReleaseAutoExpandPushLockShared.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiGetEnclavePage @ 0x1401DFB88 (MiGetEnclavePage.c)
 *     MiInitializeEnclavePfn @ 0x1401DFD10 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1401DFDA8 (MiReserveEnclavePages.c)
 *     MiAllocateAweInfo @ 0x14062686C (MiAllocateAweInfo.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 *     KeCreateEnclave @ 0x14069ED88 (KeCreateEnclave.c)
 */

__int64 __fastcall MiCreateEnclave(
        char a1,
        unsigned __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  unsigned __int64 v11; // rbp
  __int64 result; // rax
  int EnclaveVad; // eax
  __int64 v14; // r8
  PVOID v15; // rdi
  int Enclave; // ebx
  int v17; // esi
  int *VmPartition; // rax
  __int64 v19; // r9
  int *v20; // r14
  ULONG_PTR v21; // rbp
  __int64 EnclavePage; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // r14
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
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
  v15 = P[0];
  Enclave = EnclaveVad;
  if ( EnclaveVad >= 0 )
  {
    *a2 = (*((unsigned int *)P[0] + 6) | ((unsigned __int64)*((unsigned __int8 *)P[0] + 32) << 32)) << 12;
    v17 = (*((_DWORD *)v15 + 7) << 12) | 0xFFF;
    VmPartition = MiGetVmPartition((__int64)&Process[1].IdealNode[12]);
    v14 = a5;
    v20 = VmPartition;
    if ( a5 )
      Enclave = MiReserveEnclavePages((__int64)v15, VmPartition, ((a5 & v19) != 0) + (a5 >> 12));
    if ( Enclave >= 0 )
    {
      --CurrentThread->SpecialApcDisable;
      v21 = ExAcquireAutoExpandPushLockShared(v11 + 16, 0LL, v14);
      EnclavePage = MiGetEnclavePage(v20, 0);
      v23 = EnclavePage;
      if ( EnclavePage == -1 )
      {
        Enclave = -1073741801;
      }
      else
      {
        v24 = *((_QWORD *)v15 + 8);
        MiInitializeEnclavePfn(EnclavePage, v24, 4);
        v26 = MiMakeValidKernelPte(v23, 4, v24, v25) | 0x42;
        *(_QWORD *)v24 = v26;
        if ( MiPteInShadowRange(v24) )
          MiWritePteShadow(v24, v26);
        Enclave = KeCreateEnclave((__int64)(v24 << 25) >> 16, *a2, v17 - (unsigned int)*a2 + 1, a6);
        if ( Enclave >= 0 )
        {
          if ( (a1 & 2) != 0 )
          {
            *((_DWORD *)v15 + 22) |= 2u;
            _InterlockedIncrement((volatile signed __int32 *)0xFFFFF58010804264LL);
            v15 = P[0];
          }
          Enclave = 0;
        }
      }
      if ( v21 )
      {
        ExReleaseAutoExpandPushLockShared(v21, 0LL);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
    }
  }
  if ( v15 )
  {
    if ( Enclave >= 0 )
      MiUnlockAndDereferenceVad(v15);
    else
      MiDeleteVad((__int64)v15, 0, v14);
  }
  return (unsigned int)Enclave;
}
