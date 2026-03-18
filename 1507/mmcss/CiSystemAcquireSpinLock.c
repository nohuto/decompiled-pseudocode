/*
 * XREFs of CiSystemAcquireSpinLock @ 0x1C00011D0
 * Callers:
 *     CiProcessSuspend @ 0x1C0001000 (CiProcessSuspend.c)
 *     CiSchedulerProcessDeadlines @ 0x1C0001480 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerCompleteTimerResolutionTransition @ 0x1C0001610 (CiSchedulerCompleteTimerResolutionTransition.c)
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 *     CiSchedulerCommitPriority @ 0x1C0002200 (CiSchedulerCommitPriority.c)
 *     CiThreadInsertInTree @ 0x1C0002260 (CiThreadInsertInTree.c)
 *     CiSchedulerAddThread @ 0x1C0002340 (CiSchedulerAddThread.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C00024B0 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerRemoveThread @ 0x1C00025F0 (CiSchedulerRemoveThread.c)
 *     CiThreadRemoveFromTree @ 0x1C00026A0 (CiThreadRemoveFromTree.c)
 *     CiSchedulerRemoveTaskIndex @ 0x1C00026F0 (CiSchedulerRemoveTaskIndex.c)
 *     CiSchedulerThreadFunction @ 0x1C0002810 (CiSchedulerThreadFunction.c)
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
