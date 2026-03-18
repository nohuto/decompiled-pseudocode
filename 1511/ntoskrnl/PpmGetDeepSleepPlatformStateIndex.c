/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1401E7040
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1401EA1CC (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PpmEnableCoordinatedIdleStates @ 0x140632660 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetDeepSleepPlatformStateIndex()
{
  if ( PpmPlatformStates && *(_DWORD *)PpmPlatformStates )
    return (unsigned int)(*(_DWORD *)PpmPlatformStates - 1);
  else
    return 0xFFFFFFFFLL;
}
