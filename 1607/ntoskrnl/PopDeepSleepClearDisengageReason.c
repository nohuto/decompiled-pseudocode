/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x14000A1A4
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x14000A130 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x140114580 (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x14012B7CC (PopDequeueQuerySetIrp.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140534484 (PopEnforceResiliencyScenarios.c)
 *     PopIdleAoAcDozeToS4 @ 0x140674EC0 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopDeepSleepClearDisengageReason(char a1)
{
  KIRQL v2; // al
  int v3; // r9d
  KIRQL v4; // di
  int v5; // r10d

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  v5 = ~(1 << a1) & PopDeepSleepDisengageReasonMask;
  PopDeepSleepDisengageReasonMask = v5;
  if ( v3 != v5 && !v5 && !PopDeepSleepEvaluateWorkItemQueued )
  {
    PopDeepSleepEvaluateWorkItemQueued = 1;
    ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
  }
  KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v4);
}
