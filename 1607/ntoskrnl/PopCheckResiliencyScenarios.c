/*
 * XREFs of PopCheckResiliencyScenarios @ 0x1403F5C64
 * Callers:
 *     PopSystemRequiredPowerRequest @ 0x140009BA8 (PopSystemRequiredPowerRequest.c)
 *     PopCoalescingSetActiveState @ 0x140205554 (PopCoalescingSetActiveState.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopUpdateConsoleDisplayState @ 0x1405477D4 (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x140580720 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x14058095C (PopCoalescingPowerSettingCallback.c)
 *     PdcPoResiliencyClient @ 0x14066FC04 (PdcPoResiliencyClient.c)
 * Callees:
 *     PopDeepSleepEnabled @ 0x140009CB8 (PopDeepSleepEnabled.c)
 *     PopDeepSleepClearDisengageReason @ 0x14000A1A4 (PopDeepSleepClearDisengageReason.c)
 *     PopDeepSleepSetDisengageReason @ 0x14000A20C (PopDeepSleepSetDisengageReason.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14000A2A0 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400D46D4 (PpmReleaseLock.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1401FF9E8 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopEnsureCoalescingWorkerWillRun @ 0x140205660 (PopEnsureCoalescingWorkerWillRun.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  char v2; // di
  bool v3; // dl
  char v4; // cl

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    v1 = 1;
    if ( byte_140303F74 )
    {
      v2 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        if ( v2 )
          PpmDripsStateIndex = PpmGetDeepSleepPlatformStateIndex();
        else
          PpmDripsStateIndex = -1;
      }
    }
    else
    {
      v2 = 0;
    }
    v3 = PopDeepSleepEnabled();
    if ( !v4 || !PopDppeCoalescingSpindownTimeout )
      v1 = 0;
    if ( v2 && v3 )
    {
      PopDeepSleepClearDisengageReason(0);
    }
    else
    {
      PopDeepSleepSetDisengageReason(0);
      if ( byte_140303F74 && !PopDeepSleepEnabled() )
      {
        PpmAcquireLock(&PopFxSystemLatencyLock);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v2 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v2;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      }
    }
    if ( v1 != v0 )
    {
      PopCoalescingState ^= (PopCoalescingState ^ (2 * v1)) & 2;
      PopEnsureCoalescingWorkerWillRun();
    }
  }
}
