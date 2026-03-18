/*
 * XREFs of PopDeepSleepPhaseEngaged @ 0x1400990C0
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopEnforceDeepSleep @ 0x1404F7178 (PopEnforceDeepSleep.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopDeepSleepPhaseEngaged()
{
  return PopDeepSleepIsEngaged != 0;
}
