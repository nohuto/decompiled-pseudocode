/*
 * XREFs of MiGetPageProtection @ 0x1400BB5A0
 * Callers:
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x1400DEEE0 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiCaptureProtectionFromLockedProto @ 0x1400BBA68 (MiCaptureProtectionFromLockedProto.c)
 *     MiRotatedToFrameBuffer @ 0x1400BBC90 (MiRotatedToFrameBuffer.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiCaptureProtectionFromProto @ 0x1401F000C (MiCaptureProtectionFromProto.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 */

ULONG_PTR __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        __int64 a3,
        int a4)
{
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // r12
  int v10; // r15d
  __int64 v11; // rdi
  ULONG_PTR result; // rax
  int v13; // ecx
  _QWORD *v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r9
  _KPROCESS *Process; // rcx
  _KPROCESS *v22; // rbx
  ULONG_PTR PrototypePteDirect; // rdi
  unsigned __int8 v24; // r9
  int v25; // ecx
  __int64 v26; // rbx
  LONG *SharedVm; // rax
  KIRQL v28; // r9
  unsigned int v29; // edi
  LONG *v30; // rbx
  __int64 v31[7]; // [rsp+30h] [rbp-38h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
  v31[0] = v7;
  v8 = v7;
  if ( (v7 & 1) != 0 )
  {
    v9 = MI_GET_PAGE_FRAME_FROM_PTE(v31);
    v10 = *(_DWORD *)(BugCheckParameter4 + 48);
    v11 = 48 * v9 - 0x58000000000LL;
    if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 && (unsigned int)MiRotatedToFrameBuffer(BugCheckParameter2) )
    {
      result = 1LL;
      if ( (v8 & 0x800) != 0 )
        result = 4LL;
      v13 = (unsigned __int8)v10 >> 6;
      if ( v13 == 3 && (v10 & 0x38) != 0 )
        return (unsigned int)result | 0x18;
      if ( v13 == 1 )
        return (unsigned int)result | 8;
      return result;
    }
    if ( v9 > qword_140326AD0
      || MmPhysicalMemoryBlock && (*(_QWORD *)(48 * v9 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
      || (*(_QWORD *)(v11 + 40) & 0x200000000000000LL) == 0
      && (*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    {
      KeBugCheckEx(0x1Au, 0x41201uLL, BugCheckParameter2, v8, BugCheckParameter4);
    }
    if ( ((*(_QWORD *)(v11 + 40) >> 57) & 1LL) != 0 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(qword_140327FD0 + 276841312)
                      + MiLocateWsle(
                          (__int64)(BugCheckParameter2 << 25) >> 16,
                          (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12],
                          *(_QWORD *)v11)
                      * *(unsigned int *)(qword_140327FD0 + 276841264)) >> 4;
      if ( (v17 & 0x1F) == 0 )
      {
        v18 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v11 + 16);
        v19 = *(_QWORD *)(v11 + 8);
        LODWORD(v20) = v18;
        if ( (v19 & 0x8000000000000000uLL) == 0 )
          return (unsigned int)MmMakeProtectNotWriteCopy[v18];
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process[1].Affinity.Bitmap[12] && MiLocateCloneAddress(Process, v19 | 0x8000000000000000uLL) )
          LODWORD(v20) = MmMakeProtectNotWriteCopy[v20];
        return (unsigned int)v20;
      }
    }
    else
    {
      if ( ((*(_QWORD *)(v11 + 40) >> 54) & 7) == 1 )
      {
        v14 = (_QWORD *)qword_140326AD8;
        if ( qword_140326AD8 )
        {
          v15 = (__int64)(48 * v9) / 48;
          do
          {
            v16 = v14[3];
            if ( v15 < v16 )
            {
              v14 = (_QWORD *)*v14;
            }
            else
            {
              if ( v15 - v16 < v14[4] )
                goto LABEL_31;
              v14 = (_QWORD *)v14[1];
            }
          }
          while ( v14 );
        }
        if ( (v8 & 4) == 0 )
          return 24LL;
        result = 1LL;
        if ( (v8 & 0x800) != 0 )
          return 4LL;
        return result;
      }
LABEL_31:
      v17 = (unsigned __int64)*(unsigned int *)(v11 + 16) >> 5;
    }
    return v17 & 0x1F;
  }
  if ( (v7 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v7) )
    return (v8 >> 5) & 0x1F;
  v22 = KeGetCurrentThread()->ApcState.Process;
  PrototypePteDirect = MiGetPrototypePteDirect(v31[0]);
  if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v31[0])
    || v22[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v22, PrototypePteDirect) )
  {
    return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(PrototypePteDirect)];
  }
  else
  {
    v25 = *(_DWORD *)(BugCheckParameter4 + 48);
    if ( (v25 & 7) == 2 && (v25 & 0xF8) == 0x38 )
      return MiGetImageProtoProtection(BugCheckParameter4, PrototypePteDirect);
    v26 = (__int64)&v22[1].IdealNode[12];
    if ( a4 == 1 )
    {
      MiUnlockWorkingSetExclusive(v26, v24);
    }
    else
    {
      SharedVm = MiGetSharedVm(v26);
      ExReleaseSpinLockShared(SharedVm, v28);
    }
    v29 = MiCaptureProtectionFromProto(PrototypePteDirect);
    v30 = MiGetSharedVm(v26);
    if ( a4 == 1 )
    {
      ExAcquireSpinLockExclusive(v30);
      result = v29;
      v30[1] = 0;
      return result;
    }
    ExAcquireSpinLockShared(v30);
    if ( v30[1] )
    {
      result = v29;
      _InterlockedExchange(v30 + 1, 0);
      return result;
    }
  }
  return v29;
}
