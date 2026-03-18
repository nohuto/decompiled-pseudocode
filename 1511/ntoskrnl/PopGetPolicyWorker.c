/*
 * XREFs of PopGetPolicyWorker @ 0x1400975A0
 * Callers:
 *     PopCheckForIdleness @ 0x1400973B4 (PopCheckForIdleness.c)
 *     PopSetNotificationWork @ 0x140097574 (PopSetNotificationWork.c)
 *     PoNotifySystemTimeSet @ 0x140126FB0 (PoNotifySystemTimeSet.c)
 *     PopCoalescingCheck @ 0x1401EC87C (PopCoalescingCheck.c)
 *     PopCoalesingTimerDpcCallback @ 0x1401EC92C (PopCoalesingTimerDpcCallback.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopPolicyWorkerActionPromote @ 0x1404F56DC (PopPolicyWorkerActionPromote.c)
 *     PopExecutePowerAction @ 0x1404F6DC0 (PopExecutePowerAction.c)
 *     PopPolicyWorkerAction @ 0x1404F7554 (PopPolicyWorkerAction.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopGetPolicyWorker(int a1)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(&PopWorkerSpinLock);
  PopWorkerPending |= a1;
  KeReleaseSpinLock(&PopWorkerSpinLock, v2);
}
