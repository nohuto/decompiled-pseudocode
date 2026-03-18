/*
 * XREFs of PpmBeginHighPerfRequest @ 0x140127004
 * Callers:
 *     PoUserShutdownInitiated @ 0x1404F5250 (PoUserShutdownInitiated.c)
 *     PoInitializeBroadcast @ 0x1404F6AFC (PoInitializeBroadcast.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PopSetupHighPerfPowerRequest @ 0x140530ABC (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1406377C4 (PdcPoPerfOverride.c)
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
