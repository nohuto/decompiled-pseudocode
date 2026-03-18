/*
 * XREFs of FsRtlFastUnlockSingleExclusive @ 0x1401050D8
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x140104FFC (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1401E2C3C (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRealSuccessor @ 0x140104898 (RtlRealSuccessor.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x140105640 (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlDelete @ 0x140105918 (RtlDelete.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x14010605C (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106130 (FsRtlPrivateCheckWaitingLocks.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleExclusive(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        _RTL_SPLAY_LINKS **a3,
        _QWORD *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  _RTL_SPLAY_LINKS *v9; // rbx
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v14; // rcx
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rsi
  int v17; // r12d
  __int64 v18; // r13
  bool v19; // cc
  __int64 v20; // r8
  void *retaddr; // [rsp+68h] [rbp+0h]
  _RTL_SPLAY_LINKS *v22; // [rsp+70h] [rbp+8h] BYREF
  char *v23; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v9 = *a3;
  v10 = a1 + 24;
  v22 = *a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 24);
    a4 = v24;
  }
  else
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 24));
      a4 = v24;
    }
    v9 = v22;
  }
  v14 = *(_QWORD *)(v10 + 16);
  if ( !v14
    || (v23 = (char *)v9 + *a4 - 1,
        (FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                             v14,
                                                             (unsigned int)&v22,
                                                             (unsigned int)&v23,
                                                             0,
                                                             0LL)) == 0LL) )
  {
LABEL_6:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v10, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    __writecr8(CurrentIrql);
    return 3221225598LL;
  }
  v17 = a6;
  v18 = a5;
  while ( 1 )
  {
    if ( FirstOverlappingExclusiveNode[2].Parent == a2
      && FirstOverlappingExclusiveNode[2].LeftChild == (_RTL_SPLAY_LINKS *)v18
      && HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) == v17 )
    {
      v19 = FirstOverlappingExclusiveNode[1].Parent <= v9;
      if ( FirstOverlappingExclusiveNode[1].Parent != v9 )
        goto LABEL_35;
      if ( FirstOverlappingExclusiveNode[1].LeftChild == (_RTL_SPLAY_LINKS *)*v24 )
        break;
    }
    v19 = FirstOverlappingExclusiveNode[1].Parent <= v9;
LABEL_35:
    if ( v19 )
    {
      FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
      if ( FirstOverlappingExclusiveNode )
        continue;
    }
    goto LABEL_6;
  }
  if ( a2[5].Parent == &FirstOverlappingExclusiveNode[1] )
    a2[5].Parent = 0LL;
  *(_QWORD *)(v10 + 16) = RtlDelete(FirstOverlappingExclusiveNode);
  if ( *(_RTL_SPLAY_LINKS **)a1 == FirstOverlappingExclusiveNode[1].Parent )
    FsRtlPrivateResetLowestLockOffset(a1);
  if ( !a8 && *(_QWORD *)(a1 + 16) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v10, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    __writecr8(CurrentIrql);
    (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(a1 + 16))(a7, FirstOverlappingExclusiveNode + 1);
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
  ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, FirstOverlappingExclusiveNode);
  if ( a9 && *(_QWORD *)(v10 + 24) )
  {
    LOBYTE(v20) = CurrentIrql;
    FsRtlPrivateCheckWaitingLocks(a1, v10, v20);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v10, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
  __writecr8(CurrentIrql);
  return 0LL;
}
