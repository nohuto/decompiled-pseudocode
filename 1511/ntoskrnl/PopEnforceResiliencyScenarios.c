/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x140119F5C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400970CC (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PopEnforceDeepSleep @ 0x1404F7178 (PopEnforceDeepSleep.c)
 */

__int64 __fastcall PopEnforceResiliencyScenarios(unsigned int *a1)
{
  PopEnforceDeepSleep(*((unsigned __int8 *)a1 + 4));
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PoFxSendSystemLatencyUpdate();
  PpmReleaseLock((__int64 *)&PopFxSystemLatencyLock);
  return PopCoalescingEnforce(*a1);
}
