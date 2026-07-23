/*
 * XREFs of FsRtlInitializeFileLocks @ 0x1407B6CBC
 * Callers:
 *     FsRtlInitSystem @ 0x1407B6884 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140111160 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x1403E4DC0 (ExInitializePagedLookasideList.c)
 */

LIST_ENTRY *FsRtlInitializeFileLocks()
{
  LIST_ENTRY *result; // rax

  ExInitializeNPagedLookasideList(&FsRtlSharedLockLookasideList, 0LL, 0LL, 0x200u, 0x38uLL, 0x68734C46u, 0x10u);
  ExInitializeNPagedLookasideList(&FsRtlExclusiveLockLookasideList, 0LL, 0LL, 0x200u, 0x48uLL, 0x78654C46u, 0x10u);
  ExInitializeNPagedLookasideList(&FsRtlWaitingLockLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x6C774C46u, 0x10u);
  ExInitializeNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, 0LL, 0LL, 0x200u, 0x38uLL, 0x6E6C4C46u, 0x10u);
  ExInitializeNPagedLookasideList(&FsRtlLockInfoLookasideList, 0LL, 0LL, 0x200u, 0x40uLL, 0x696C4C46u, 8u);
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&FsRtlFileLockLookasideList,
    0LL,
    0LL,
    0,
    0x60uLL,
    0x6C664C46u,
    8u);
  result = &FsRtlCreateLockInfo.Event.Header.WaitListHead;
  FsRtlCreateLockInfo.Owner = 0LL;
  FsRtlCreateLockInfo.Contention = 0;
  FsRtlCreateLockInfo.Event.Header.SignalState = 0;
  FsRtlCreateLockInfo.Event.Header.WaitListHead.Blink = &FsRtlCreateLockInfo.Event.Header.WaitListHead;
  FsRtlCreateLockInfo.Event.Header.WaitListHead.Flink = &FsRtlCreateLockInfo.Event.Header.WaitListHead;
  FsRtlFileLockCancelCollideLock = 0LL;
  FsRtlFileLockCancelCollideList = 0LL;
  FsRtlCreateLockInfo.Count = 1;
  LOWORD(FsRtlCreateLockInfo.Event.Header.Lock) = 1;
  FsRtlCreateLockInfo.Event.Header.Size = 6;
  return result;
}
