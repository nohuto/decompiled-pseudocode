/*
 * XREFs of PopDeepSleepEnabled @ 0x140009CB8
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140534484 (PopEnforceResiliencyScenarios.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406754AC (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
