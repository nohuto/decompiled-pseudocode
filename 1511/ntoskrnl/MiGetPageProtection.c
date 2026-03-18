/*
 * XREFs of MiGetPageProtection @ 0x14005F320
 * Callers:
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x1400614B0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14001EE20 (MiRotatedToFrameBuffer.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiGetPfnProtection @ 0x1400BB6C0 (MiGetPfnProtection.c)
 *     MiCaptureProtectionFromProto @ 0x1400E1F9C (MiCaptureProtectionFromProto.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400E2010 (MiCaptureProtectionFromLockedProto.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_ENCLAVE @ 0x1401DF9EC (MI_PFN_IS_ENCLAVE.c)
 */

unsigned __int64 __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        KIRQL a3,
        int a4)
{
  unsigned __int64 v8; // rax
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rax
  int v11; // ebp
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  unsigned __int64 result; // rax
  int v15; // ecx
  unsigned __int64 Wsle; // rax
  ULONG_PTR v17; // rdi
  _KPROCESS *Process; // rbx
  __int64 v19; // r8
  volatile LONG *v20; // rbx
  unsigned int v21; // edi
  __int64 v22[5]; // [rsp+30h] [rbp-28h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
  v22[0] = v8;
  v9 = v8;
  if ( (v8 & 1) != 0 )
  {
    v10 = MI_READ_PTE_LOCK_FREE(v22);
    v11 = *(_DWORD *)(BugCheckParameter4 + 48);
    v12 = (v10 >> 12) & 0xFFFFFFFFFLL;
    v13 = 48 * v12 - 0x58000000000LL;
    if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 && MiRotatedToFrameBuffer(BugCheckParameter2) )
    {
      result = 1LL;
      if ( (v9 & 0x800) != 0 )
        result = 4LL;
      v15 = (unsigned __int8)v11 >> 6;
      if ( v15 == 3 && (v11 & 0x38) != 0 )
      {
        return (unsigned int)result | 0x18;
      }
      else if ( v15 == 1 )
      {
        return (unsigned int)result | 8;
      }
    }
    else
    {
      if ( !MI_IS_PFN(v12)
        || (*(_QWORD *)(v13 + 40) & 0x200000000000000LL) == 0
        && (*(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
      {
        KeBugCheckEx(0x1Au, 0x41201uLL, BugCheckParameter2, v9, BugCheckParameter4);
      }
      if ( ((*(_QWORD *)(v13 + 40) >> 57) & 1LL) != 0 )
      {
        Wsle = MiLocateWsle(
                 (__int64)(BugCheckParameter2 << 25) >> 16,
                 (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
                 *(_QWORD *)v13);
        return MiGetPfnProtection(48 * v12 - 0x58000000000LL, Wsle * MEMORY[0xFFFFF58010804040] - 0xA7FEF7FBCB0LL);
      }
      else if ( ((*(_QWORD *)(v13 + 40) >> 54) & 7) != 1 || (unsigned int)MI_PFN_IS_ENCLAVE(48 * v12 - 0x58000000000LL) )
      {
        return (*(_DWORD *)(v13 + 16) >> 5) & 0x1F;
      }
      else if ( (v9 & 4) != 0 )
      {
        result = 1LL;
        if ( (v9 & 0x800) != 0 )
          return 4LL;
      }
      else
      {
        return 24LL;
      }
    }
  }
  else if ( (v8 & 0x400) == 0 || HIDWORD(v8) == 0xFFFFFFFF )
  {
    return (v8 >> 5) & 0x1F;
  }
  else
  {
    v17 = v22[0] >> 16;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v22[0])
      || Process[1].Affinity.Bitmap[12] && MiLocateCloneAddress((__int64)Process, v17) )
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(v17)];
    }
    else
    {
      v20 = (volatile LONG *)&Process[1].IdealNode[12];
      if ( a4 == 1 )
        MiUnlockWorkingSetExclusive((__int64)v20, a3, v19);
      else
        ExReleaseSpinLockShared(v20, a3);
      v21 = MiCaptureProtectionFromProto(v17);
      if ( a4 == 1 )
        ExAcquireSpinLockExclusive(v20);
      else
        ExAcquireSpinLockShared(v20);
      return v21;
    }
  }
  return result;
}
