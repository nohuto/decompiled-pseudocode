/*
 * XREFs of PopCheckForWork @ 0x1400097C4
 * Callers:
 *     PopSetNotificationWork @ 0x1400085B4 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x1400086B0 (PopCheckForIdleness.c)
 *     PoRegisterDeviceForIdleDetection @ 0x14007F458 (PoRegisterDeviceForIdleDetection.c)
 *     PoNotifySystemTimeSet @ 0x140132370 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140205320 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140205474 (PopCoalesingTimerDpcCallback.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
