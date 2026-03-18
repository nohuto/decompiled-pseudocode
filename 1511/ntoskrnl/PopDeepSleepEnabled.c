/*
 * XREFs of PopDeepSleepEnabled @ 0x1400990CC
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14063CD1C (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

_BOOL8 PopDeepSleepEnabled()
{
  return PopDeepSleepIsEnabled != 0;
}
