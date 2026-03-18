/*
 * XREFs of PopCheckResiliencyScenarios @ 0x14045680C
 * Callers:
 *     PopSystemRequiredCallback @ 0x140099070 (PopSystemRequiredCallback.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopUpdateConsoleDisplayState @ 0x14050C75C (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x14054AB4C (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x14054AE3C (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingActivate @ 0x140635B48 (PopCoalescingActivate.c)
 *     PdcPoResiliencyClient @ 0x14063795C (PdcPoResiliencyClient.c)
 * Callees:
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400970CC (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PopDeepSleepPhaseEngaged @ 0x1400990C0 (PopDeepSleepPhaseEngaged.c)
 *     PopDeepSleepEnabled @ 0x1400990CC (PopDeepSleepEnabled.c)
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1401E7040 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopCoalescingActivate @ 0x140635B48 (PopCoalescingActivate.c)
 *     PopControlDeepSleep @ 0x14063DA90 (PopControlDeepSleep.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // bl
  char v2; // cl
  int v3; // r11d
  char v4; // dl
  char v5; // di
  char v6; // al
  __int64 v7; // rcx
  char v8; // r9
  char v9; // r10

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    if ( byte_1402DDF74 )
    {
      v1 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        if ( v1 )
          PpmDripsStateIndex = PpmGetDeepSleepPlatformStateIndex();
        else
          PpmDripsStateIndex = -1;
      }
    }
    else
    {
      v1 = 0;
    }
    PopDeepSleepEnabled();
    if ( !v4 || (v5 = v2, PopDppeCoalescingSpindownTimeout == v3) )
      v5 = v3;
    v6 = PopDeepSleepPhaseEngaged();
    if ( (_BYTE)v7 == v6 )
    {
      if ( v8 && !v9 )
      {
        PpmAcquireLock(&PopFxSystemLatencyLock);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v1 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v1;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
      }
    }
    else
    {
      PopControlDeepSleep();
    }
    if ( v5 != v0 )
    {
      LOBYTE(v7) = v5;
      PopCoalescingActivate(v7);
    }
  }
}
