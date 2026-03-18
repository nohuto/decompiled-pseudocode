/*
 * XREFs of PpmGetDeepSleepPlatformStateIndex @ 0x1401FF9E8
 * Callers:
 *     PopFxEnablePlatformStates @ 0x140202BA4 (PopFxEnablePlatformStates.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PpmEnableCoordinatedIdleStates @ 0x14066AB28 (PpmEnableCoordinatedIdleStates.c)
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
