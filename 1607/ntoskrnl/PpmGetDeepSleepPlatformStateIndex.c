/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1401FF814
 * Callers:
 *     PopFxEnablePlatformStates @ 0x1402029D0 (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x1403F4B28 (PopCheckResiliencyScenarios.c)
 *     PpmEnableCoordinatedIdleStates @ 0x14066AC0C (PpmEnableCoordinatedIdleStates.c)
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
