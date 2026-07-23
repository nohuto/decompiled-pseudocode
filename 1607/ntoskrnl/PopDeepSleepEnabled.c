/*
 * XREFs of PopDeepSleepEnabled @ 0x140009838
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1403F4B28 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1405349C4 (PopEnforceResiliencyScenarios.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140675590 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
