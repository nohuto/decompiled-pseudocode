/*
 * XREFs of PopGetPolicyWorker @ 0x140008680
 * Callers:
 *     PopSetNotificationWork @ 0x1400085B4 (PopSetNotificationWork.c)
 *     PopCheckForIdleness @ 0x1400086B0 (PopCheckForIdleness.c)
 *     PoNotifySystemTimeSet @ 0x140132370 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x140205320 (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x140205474 (PopCoalesingTimerDpcCallback.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopPolicyWorkerAction @ 0x140530B48 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140534D98 (PopPolicyWorkerActionPromote.c)
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
