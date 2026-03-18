/*
 * XREFs of PopCheckForWork @ 0x1400FF0E8
 * Callers:
 *     PopCheckForIdleness @ 0x1400973B4 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     PoRegisterDeviceForIdleDetection @ 0x1400D0E94 (PoRegisterDeviceForIdleDetection.c)
 *     PoNotifySystemTimeSet @ 0x140126FB0 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1401EC87C (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1401EC92C (PopCoalesingTimerDpcCallback.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void PopCheckForWork()
{
  KIRQL v0; // bl

  if ( (PopWorkerStatus & PopWorkerPending) != 0 && (struct _KTHREAD *)PopPolicyLockThread != KeGetCurrentThread() )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
    if ( PopWorkerStatus < 0 )
    {
      PopWorkerStatus &= ~0x80000000;
      ExQueueWorkItem(&PopPolicyWorker, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&PopWorkerSpinLock, v0);
  }
}
