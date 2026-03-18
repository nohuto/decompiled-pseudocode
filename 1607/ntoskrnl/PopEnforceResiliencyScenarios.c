/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x140534484
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x140009CB8 (PopDeepSleepEnabled.c)
 *     PopDeepSleepClearDisengageReason @ 0x14000A1A4 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14000A20C (PopDeepSleepSetDisengageReason.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14000A2A0 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400D46D4 (PpmReleaseLock.c)
 *     KeSetMaxDynamicTickDuration @ 0x1401D2B68 (KeSetMaxDynamicTickDuration.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x140205660 (PopEnsureCoalescingWorkerWillRun.c)
 */

void __fastcall PopEnforceResiliencyScenarios(int *a1)
{
  char v2; // r8
  int v3; // r9d
  int v4; // ecx

  _InterlockedCompareExchange64(&PopMaxDynamicTickDurationOriginalValue, KiMaxDynamicTickDuration, 0LL);
  if ( PopDeepSleepEnabled() && PopPdcIdleResiliency )
    v2 = 1;
  if ( !v3 )
  {
    if ( !v2 )
      goto LABEL_6;
    goto LABEL_12;
  }
  if ( v2 )
  {
LABEL_12:
    if ( PopDeepSleepEnforced )
    {
      KeSetMaxDynamicTickDuration(PopMaxDynamicTickDurationOriginalValue);
      PopDeepSleepEnforced = 0;
      PopDeepSleepSetDisengageReason(0);
      if ( !byte_140303F74 )
        PopDeepSleepSetDisengageReason(1);
    }
    goto LABEL_6;
  }
  if ( !PopDeepSleepEnforced )
  {
    KeSetMaxDynamicTickDuration((unsigned int)(10000000 * v3));
    PopDeepSleepEnforced = 1;
    PopDeepSleepClearDisengageReason(0);
    PopDeepSleepClearDisengageReason(1);
  }
LABEL_6:
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PoFxSendSystemLatencyUpdate();
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  v4 = *a1;
  if ( *a1 )
  {
    if ( !PopCurrentCoalescingSpindownTimeout )
    {
      PopCoalescingState |= 2u;
      PopCoalescingEnforced = 1;
      PopEnforcedCoalescingSpindownTimeout = v4;
LABEL_19:
      PopEnsureCoalescingWorkerWillRun();
    }
  }
  else if ( PopCurrentCoalescingSpindownTimeout && PopCoalescingEnforced )
  {
    PopEnforcedCoalescingSpindownTimeout = 0;
    PopCoalescingState &= ~2u;
    PopCoalescingEnforced = 0;
    goto LABEL_19;
  }
}
