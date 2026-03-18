/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x14000A20C
 * Callers:
 *     PopIncrementPowerSettingPendingUpdates @ 0x14000A0C0 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x140114580 (PopSetPowerActionState.c)
 *     PopQueueQuerySetIrp @ 0x14012B068 (PopQueueQuerySetIrp.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14020D480 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140534484 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopDeepSleepSetDisengageReason(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  KIRQL v4; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
  v3 = PopDeepSleepDisengageReasonMask;
  v4 = v2;
  PopDeepSleepDisengageReasonMask |= 1 << a1;
  if ( v3 != PopDeepSleepDisengageReasonMask && !v3 && !PopDeepSleepEvaluateWorkItemQueued )
  {
    PopDeepSleepEvaluateWorkItemQueued = 1;
    ExQueueWorkItem(&PopDeepSleepEvaluateWorkItem, DelayedWorkQueue);
  }
  KeReleaseSpinLock(&PopDeepSleepDisengageReasonLock, v4);
}
