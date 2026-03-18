/*
 * XREFs of PpmBeginHighPerfRequest @ 0x140131E88
 * Callers:
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 *     PoInitializeBroadcast @ 0x140531FFC (PoInitializeBroadcast.c)
 *     PoUserShutdownInitiated @ 0x1405341E0 (PoUserShutdownInitiated.c)
 *     PopSetupHighPerfPowerRequest @ 0x14058163C (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x14066FAC4 (PdcPoPerfOverride.c)
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
