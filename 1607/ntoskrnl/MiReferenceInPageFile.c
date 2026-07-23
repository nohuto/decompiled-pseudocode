/*
 * XREFs of MiReferenceInPageFile @ 0x1400249D0
 * Callers:
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x14042B724 (MiPfExecuteReadList.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     MiComputeImagePteIndex @ 0x1400267A0 (MiComputeImagePteIndex.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     MiCanPageMove @ 0x1401051DC (MiCanPageMove.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

ULONG_PTR __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  ULONG_PTR v6; // r14
  KIRQL v7; // bl
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // r9

  v2 = *(_QWORD *)(a1 + 200);
  if ( !v2 )
    return 0LL;
  v6 = ObFastReferenceObject((signed __int64 *)(v2 + 64));
  if ( !v6 )
  {
    v7 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v2 + 72));
    v6 = ObFastReferenceObjectLocked(v2 + 64);
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v2 + 72), v7);
  }
  if ( (*(_DWORD *)(v2 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v2 + 112));
    v8 = *(_QWORD *)(a1 + 248);
    v9 = *(_QWORD **)(v2 + 96);
    if ( !v8 )
      v8 = a1 + 256;
    v10 = 48LL * *(_QWORD *)(v8 + 48) - 0x58000000000LL;
    *(_DWORD *)(a1 + 184) = MiComputeImagePteIndex(v10, a2);
    if ( *v9 )
    {
      *(_BYTE *)(a1 + 190) |= 8u;
      if ( (MiFlags & 0x10000) != 0
        && (!(unsigned int)MiCanPageMove(v10, v11, v12, *(unsigned __int8 *)(a1 + 190))
         || (*(_DWORD *)(v2 + 92) & 0xC000000) != 0 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v10 + 16) & 2) != 0) )
      {
        *(_BYTE *)(a1 + 190) = v13 & 0xF7;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  return v6;
}
