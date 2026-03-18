/*
 * XREFs of FsRtlInitializeFileLocks @ 0x1407E1684
 * Callers:
 *     FsRtlInitSystem @ 0x1407E124C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 *     ExInitializePagedLookasideList @ 0x1404F9D70 (ExInitializePagedLookasideList.c)
 */

__int64 *FsRtlInitializeFileLocks()
{
  __int64 *result; // rax

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
  result = &qword_14034D320;
  qword_14034D308 = 0LL;
  dword_14034D310 = 0;
  dword_14034D31C = 0;
  qword_14034D328 = (__int64)&qword_14034D320;
  qword_14034D320 = (__int64)&qword_14034D320;
  FsRtlFileLockCancelCollideLock = 0LL;
  FsRtlFileLockCancelCollideList = 0LL;
  LODWORD(FsRtlCreateLockInfo) = 1;
  word_14034D318 = 1;
  byte_14034D31A = 6;
  return result;
}
