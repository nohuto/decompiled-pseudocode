/*
 * XREFs of PopCheckResiliencyScenarios @ 0x1404E4FEC
 * Callers:
 *     PopSystemRequiredCallback @ 0x1400D082C (PopSystemRequiredCallback.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopUpdateConsoleDisplayState @ 0x140583A58 (PopUpdateConsoleDisplayState.c)
 *     PopDeepSleepPowerSettingCallback @ 0x1405C2068 (PopDeepSleepPowerSettingCallback.c)
 *     PopCoalescingPowerSettingCallback @ 0x1405C22C8 (PopCoalescingPowerSettingCallback.c)
 *     PopCoalescingActivate @ 0x1406B5318 (PopCoalescingActivate.c)
 *     PdcPoResiliencyClient @ 0x1406B76EC (PdcPoResiliencyClient.c)
 * Callees:
 *     PopDeepSleepPhaseEngaged @ 0x1400D087C (PopDeepSleepPhaseEngaged.c)
 *     PopDeepSleepEnabled @ 0x1400D0888 (PopDeepSleepEnabled.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PopCoalescingActivate @ 0x1406B5318 (PopCoalescingActivate.c)
 *     PopControlDeepSleep @ 0x1406BE32C (PopControlDeepSleep.c)
 */

void PopCheckResiliencyScenarios()
{
  char v0; // si
  char v1; // di
  char v2; // cl
  int v3; // r11d
  char v4; // dl
  char v5; // bl
  char v6; // al
  __int64 v7; // rcx
  char v8; // r9
  char v9; // r10
  int v10; // eax
  int v11; // r9d

  v0 = PopCurrentCoalescingSpindownTimeout != 0;
  if ( !PopDeepSleepEnforced && !PopCoalescingEnforced )
  {
    if ( byte_14032E534 )
    {
      v1 = PopPdcIdleResiliency;
      if ( PopDeepSleepEnabled() )
      {
        v10 = -1;
        if ( PpmPlatformStates && *(_DWORD *)PpmPlatformStates )
          v11 = *(_DWORD *)PpmPlatformStates - 1;
        else
          v11 = -1;
        if ( v1 )
          v10 = v11;
        PpmDripsStateIndex = v10;
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
      if ( v9 && !v8 )
      {
        PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
        if ( PopIdleResiliencyIsEngagedWithoutDeepSleep != v1 )
        {
          PopIdleResiliencyIsEngagedWithoutDeepSleep = v1;
          PoFxSendSystemLatencyUpdate();
        }
        PpmReleaseLock(&PopFxSystemLatencyLock);
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
