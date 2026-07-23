/*
 * XREFs of PopDeepSleepClearDisengageReason @ 0x140009D24
 * Callers:
 *     PopDecrementPowerSettingPendingUpdates @ 0x140009CB0 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopSetPowerActionState @ 0x140114AF0 (PopSetPowerActionState.c)
 *     PopDequeueQuerySetIrp @ 0x14012BD3C (PopDequeueQuerySetIrp.c)
 *     PopCheckResiliencyScenarios @ 0x1403F4B28 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1405349C4 (PopEnforceResiliencyScenarios.c)
 *     PopIdleAoAcDozeToS4 @ 0x140674FA4 (PopIdleAoAcDozeToS4.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
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
