/*
 * XREFs of PpmBeginHighPerfRequest @ 0x1401323F8
 * Callers:
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x14053253C (PoInitializeBroadcast.c)
 *     PoUserShutdownInitiated @ 0x140534720 (PoUserShutdownInitiated.c)
 *     PopSetupHighPerfPowerRequest @ 0x140581AE8 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x14066FBA8 (PdcPoPerfOverride.c)
 * Callees:
 *     <none>
 */

__int64 PpmBeginHighPerfRequest()
{
  if ( PopTransitionHighPerfRequest )
    return PoSetPowerRequestInternal(PopTransitionHighPerfRequest, 4u);
  else
    return 3221225473LL;
}
