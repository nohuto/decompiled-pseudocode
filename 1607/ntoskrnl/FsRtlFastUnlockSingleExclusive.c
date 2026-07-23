/*
 * XREFs of FsRtlFastUnlockSingleExclusive @ 0x1400C3054
 * Callers:
 *     FsRtlFastUnlockSingle @ 0x1400C2F78 (FsRtlFastUnlockSingle.c)
 *     FsRtlPrivateRemoveLock @ 0x1401B8DE8 (FsRtlPrivateRemoveLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x1400A9A08 (RtlRealSuccessor.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400A9A4C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateResetLowestLockOffset @ 0x1400C3530 (FsRtlPrivateResetLowestLockOffset.c)
 *     RtlDelete @ 0x1400C3774 (RtlDelete.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x1400C3DE8 (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall FsRtlFastUnlockSingleExclusive(
        __int64 a1,
        _RTL_SPLAY_LINKS *a2,
        _RTL_SPLAY_LINKS **a3,
        _RTL_SPLAY_LINKS **a4,
        _RTL_SPLAY_LINKS *a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  _RTL_SPLAY_LINKS *v9; // rbx
  KSPIN_LOCK *v10; // rbp
  KIRQL v14; // al
  KSPIN_LOCK v15; // rcx
  unsigned int v16; // edi
  KIRQL v17; // r12
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // rsi
  int v20; // r13d
  bool v21; // cc
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v23; // [rsp+80h] [rbp+18h] BYREF
  _RTL_SPLAY_LINKS **v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v9 = *a3;
  v10 = (KSPIN_LOCK *)(a1 + 24);
  v23 = *a3;
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 24));
  v15 = v10[2];
  v16 = 0;
  v17 = v14;
  if ( !v15
    || (v22 = (__int64)v9 + (_QWORD)*a4 - 1,
        (FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                             v15,
                                                             (unsigned int)&v23,
                                                             (unsigned int)&v22,
                                                             0,
                                                             0LL)) == 0LL) )
  {
LABEL_2:
    v16 = -1073741698;
    goto LABEL_3;
  }
  v20 = a6;
  while ( 1 )
  {
    if ( FirstOverlappingExclusiveNode[2].Parent == a2
      && FirstOverlappingExclusiveNode[2].LeftChild == a5
      && HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) == v20 )
    {
      v21 = FirstOverlappingExclusiveNode[1].Parent <= v9;
      if ( FirstOverlappingExclusiveNode[1].Parent != v9 )
        goto LABEL_22;
      if ( FirstOverlappingExclusiveNode[1].LeftChild == *v24 )
        break;
    }
    v21 = FirstOverlappingExclusiveNode[1].Parent <= v9;
LABEL_22:
    if ( v21 )
    {
      FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
      if ( FirstOverlappingExclusiveNode )
        continue;
    }
    goto LABEL_2;
  }
  if ( a2[5].Parent == &FirstOverlappingExclusiveNode[1] )
    a2[5].Parent = 0LL;
  v10[2] = (KSPIN_LOCK)RtlDelete(FirstOverlappingExclusiveNode);
  if ( *(_RTL_SPLAY_LINKS **)a1 == FirstOverlappingExclusiveNode[1].Parent )
    FsRtlPrivateResetLowestLockOffset(a1);
  if ( !a8 && *(_QWORD *)(a1 + 16) )
  {
    KeReleaseSpinLock(v10, v17);
    (*(void (__fastcall **)(__int64, PRTL_SPLAY_LINKS))(a1 + 16))(a7, FirstOverlappingExclusiveNode + 1);
    v17 = KeAcquireSpinLockRaiseToDpc(v10);
  }
  ExFreeToNPagedLookasideList(&FsRtlExclusiveLockLookasideList, FirstOverlappingExclusiveNode);
  if ( a9 && v10[3] )
    FsRtlPrivateCheckWaitingLocks(a1, v10, v17);
LABEL_3:
  KeReleaseSpinLock(v10, v17);
  return v16;
}
