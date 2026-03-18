/*
 * XREFs of PopCheckForWork @ 0x140009C44
 * Callers:
 *     PopSetNotificationWork @ 0x140008A40 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x140008B3C (PopCheckForIdleness.c)
 *     PoRegisterDeviceForIdleDetection @ 0x14007F3D8 (PoRegisterDeviceForIdleDetection.c)
 *     PoNotifySystemTimeSet @ 0x140131E00 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1402054F4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140205648 (PopCoalesingTimerDpcCallback.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
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
