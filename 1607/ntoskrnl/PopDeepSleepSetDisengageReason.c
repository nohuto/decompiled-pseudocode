/*
 * XREFs of PopDeepSleepSetDisengageReason @ 0x140009D8C
 * Callers:
 *     PopIncrementPowerSettingPendingUpdates @ 0x140009C40 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x140114AF0 (PopSetPowerActionState.c)
 *     PopQueueQuerySetIrp @ 0x14012B5D8 (PopQueueQuerySetIrp.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x14020D2AC (PopIdleAoAcDozeS4TimerCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1403F4B28 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1405349C4 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
