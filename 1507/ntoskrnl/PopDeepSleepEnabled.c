/*
 * XREFs of PopDeepSleepEnabled @ 0x1400D0888
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
