/*
 * XREFs of PopGetPolicyWorker @ 0x140008B0C
 * Callers:
 *     PopSetNotificationWork @ 0x140008A40 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x140008B3C (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x140131E00 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1402054F4 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140205648 (PopCoalesingTimerDpcCallback.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopPolicyWorkerAction @ 0x140530608 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140534858 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
