/*
 * XREFs of PopEnforceDeepSleep @ 0x1404F7178
 * Callers:
 *     PopEnforceResiliencyScenarios @ 0x140119F5C (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     PopDeepSleepPhaseEngaged @ 0x1400990C0 (PopDeepSleepPhaseEngaged.c)
 *     KeSetMaxDynamicTickDuration @ 0x1401C3FC0 (KeSetMaxDynamicTickDuration.c)
 *     PopControlDeepSleep @ 0x14063DA90 (PopControlDeepSleep.c)
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
