/*
 * XREFs of PopDeepSleepPhaseEngaged @ 0x1400D087C
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x140565960 (PopEnforceDeepSleep.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopDeepSleepPhaseEngaged()
{
  return PopDeepSleepIsEngaged != 0;
}
