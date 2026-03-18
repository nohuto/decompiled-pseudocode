/*
 * XREFs of PopEnforceResiliencyScenarios @ 0x140147FD0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PopEnforceDeepSleep @ 0x140565960 (PopEnforceDeepSleep.c)
 */

__int64 __fastcall PopEnforceResiliencyScenarios(unsigned int *a1)
{
  PopEnforceDeepSleep(*((unsigned __int8 *)a1 + 4));
  PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
  PoFxSendSystemLatencyUpdate();
  PpmReleaseLock(&PopFxSystemLatencyLock);
  return PopCoalescingEnforce(*a1);
}
