/*
 * XREFs of FsRtlFastUnlockSingleShared @ 0x1401052C0
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140104FFC (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1401E2C3C (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140105568 (FsRtlFindFirstOverlappingSharedNode.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140105640 (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlDelete @ 0x140105918 (RtlDelete.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106130 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlSplitLocks @ 0x1401062B4 (FsRtlSplitLocks.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleShared(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v14; // rcx
  __int64 FirstOverlappingSharedNode; // rax
  unsigned __int64 v16; // r11
  _RTL_SPLAY_LINKS *v17; // r9
  _QWORD *v18; // r14
  unsigned __int64 v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // r15
  __int64 v22; // r8
  bool v23; // cc
  __int64 v24; // r8
  unsigned __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v28; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp+18h] BYREF
  _QWORD *v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  v9 = *a3;
  v10 = a1 + 24;
  v28 = *a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 24);
    a4 = v30;
  }
  else
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 24));
      a4 = v30;
    }
    v9 = v28;
  }
  v14 = *(_QWORD *)(v10 + 8);
  if ( !v14 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      goto LABEL_40;
    }
LABEL_52:
    KiReleaseSpinLockInstrumented(v10, retaddr);
    goto LABEL_40;
  }
  v26 = v9 + *a4 - 1LL;
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(v14, (unsigned int)&v28, (unsigned int)&v26, 0, 0LL);
  v16 = 0LL;
  v17 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( !FirstOverlappingSharedNode
    || (v18 = (_QWORD *)(FirstOverlappingSharedNode - 24), v19 = 0LL, v20 = (_QWORD *)*v18, v21 = v18, v29 = 0LL, !v20) )
  {
LABEL_38:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
LABEL_40:
      __writecr8(CurrentIrql);
      return 3221225598LL;
    }
    goto LABEL_52;
  }
  v22 = a5;
  while ( 1 )
  {
    if ( v20[4] == a2 && v20[5] == a5 && *((_DWORD *)v20 + 7) == a6 )
    {
      v23 = v20[1] <= v9;
      if ( v20[1] != v9 )
        goto LABEL_34;
      if ( v20[2] == *v30 )
        break;
    }
    v23 = v20[1] <= v9;
LABEL_34:
    if ( v23 )
    {
      v21 = v20;
      if ( v19 < v20[6] )
        v19 = v20[6];
      v20 = (_QWORD *)*v20;
      v29 = v19;
      if ( v20 )
        continue;
    }
    goto LABEL_38;
  }
  if ( *(_QWORD **)(a2 + 120) == v20 + 1 )
    *(_QWORD *)(a2 + 120) = 0LL;
  if ( *v21 == v18[6] )
    v18[6] = v21;
  *v21 = *v20;
  if ( v21 == v18 )
  {
    if ( !*v18 )
    {
      *(_QWORD *)(v10 + 8) = RtlDelete(v17);
      ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, v18);
      v16 = 0LL;
      v18 = 0LL;
    }
    if ( *(_QWORD *)a1 == v20[1] )
      FsRtlPrivateResetLowestLockOffset(a1);
  }
  if ( v18 )
  {
    FsRtlSplitLocks(v18, v21, v20 + 6, &v29);
    v16 = 0LL;
  }
  if ( a8 == (_BYTE)v16 && *(_QWORD *)(a1 + 16) != v16 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v10, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v10, v16);
    __writecr8(CurrentIrql);
    (*(void (__fastcall **)(__int64, _QWORD *, __int64, _RTL_SPLAY_LINKS *))(a1 + 16))(a7, v20 + 1, v22, v17);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v10);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v10);
    }
  }
  ExFreeToNPagedLookasideList(&FsRtlSharedLockLookasideList, v20);
  if ( a9 && *(_QWORD *)(v10 + 24) )
  {
    LOBYTE(v24) = CurrentIrql;
    FsRtlPrivateCheckWaitingLocks(a1, v10, v24);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v10, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  __writecr8(CurrentIrql);
  return 0LL;
}
