/*
 * XREFs of CmpQueueLazyCommitWorker @ 0x1405E3B98
 * Callers:
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 */

BOOLEAN __fastcall CmpQueueLazyCommitWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // di
  __int64 **v4; // rax
  __int64 *v5; // rbx
  bool v6; // zf
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 104) &= ~0x40u;
  v4 = (__int64 **)qword_1402FD368;
  v5 = (__int64 *)(a1 + 32);
  *v5 = (__int64)&CmpLazyCommitListHead;
  v5[1] = (__int64)v4;
  if ( *v4 != &CmpLazyCommitListHead )
    __fastfail(3u);
  v6 = CmpLazyCommitWorkItemActive == 0;
  *v4 = v5;
  qword_1402FD368 = (__int64)v5;
  if ( v6 )
  {
    v2 = 1;
    CmpLazyCommitWorkItemActive = 1;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v2 )
    return KeSetTimer(&CmpLazyCommitTimer, (LARGE_INTEGER)-300000000LL, &CmpLazyCommitDpc);
  return result;
}
