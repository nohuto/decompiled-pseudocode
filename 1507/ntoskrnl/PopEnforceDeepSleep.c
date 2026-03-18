/*
 * XREFs of PopEnforceDeepSleep @ 0x140565960
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x140147FD0 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     PopDeepSleepPhaseEngaged @ 0x1400D087C (PopDeepSleepPhaseEngaged.c)
 *     KeSetMaxDynamicTickDuration @ 0x14020014C (KeSetMaxDynamicTickDuration.c)
 *     PopControlDeepSleep @ 0x1406BE32C (PopControlDeepSleep.c)
 */

__int64 PopEnforceDeepSleep()
{
  __int64 result; // rax
  int v1; // ecx
  __int64 v2; // rcx

  _InterlockedCompareExchange64(&PopMaxDynamicTickDurationOriginalValue, KiMaxDynamicTickDuration, 0LL);
  result = PopDeepSleepPhaseEngaged();
  if ( v1 )
  {
    if ( !(_BYTE)result )
    {
      KeSetMaxDynamicTickDuration((unsigned int)(10000000 * v1));
      LOBYTE(v2) = 1;
      PopDeepSleepEnforced = 1;
      return PopControlDeepSleep(v2);
    }
  }
  else if ( !(_BYTE)result )
  {
    return result;
  }
  if ( PopDeepSleepEnforced )
  {
    KeSetMaxDynamicTickDuration(PopMaxDynamicTickDurationOriginalValue);
    result = PopControlDeepSleep(0LL);
    PopDeepSleepEnforced = 0;
  }
  return result;
}
