/*
 * XREFs of CiSystemAcquireSpinLock @ 0x1C0001000
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001030 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerCommitPriority @ 0x1C0001520 (CiSchedulerCommitPriority.c)
 *     CiThreadInsertInTree @ 0x1C0001580 (CiThreadInsertInTree.c)
 *     CiSchedulerAddThread @ 0x1C0001740 (CiSchedulerAddThread.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0001900 (CiSchedulerCancelTaskIndexYield.c)
 *     CiProcessSuspend @ 0x1C0001A50 (CiProcessSuspend.c)
 *     CiSchedulerRemoveThread @ 0x1C0001C60 (CiSchedulerRemoveThread.c)
 *     CiThreadRemoveFromTree @ 0x1C0001D00 (CiThreadRemoveFromTree.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0001D50 (CiSchedulerRemoveTaskIndex.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall CiSystemAcquireSpinLock(KSPIN_LOCK *a1)
{
  struct _KTHREAD *result; // rax

  KeAcquireSpinLockRaiseToDpc(a1);
  result = KeGetCurrentThread();
  a1[1] = (KSPIN_LOCK)result;
  return result;
}
