/*
 * XREFs of CiSystemAcquireSpinLock @ 0x1C0001250
 * Callers:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 *     CiSchedulerCommitPriority @ 0x1C0001730 (CiSchedulerCommitPriority.c)
 *     CiThreadInsertInTree @ 0x1C0001790 (CiThreadInsertInTree.c)
 *     CiSchedulerAddThread @ 0x1C0001870 (CiSchedulerAddThread.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00019E0 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerRemoveThread @ 0x1C0001B70 (CiSchedulerRemoveThread.c)
 *     CiThreadRemoveFromTree @ 0x1C0001C20 (CiThreadRemoveFromTree.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C0001C70 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001D40 (CiSchedulerProcessDeadlines.c)
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
