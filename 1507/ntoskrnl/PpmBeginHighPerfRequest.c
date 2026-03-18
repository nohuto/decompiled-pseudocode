/*
 * XREFs of PpmBeginHighPerfRequest @ 0x14015A718
 * Callers:
 *     PoInitializeBroadcast @ 0x140565238 (PoInitializeBroadcast.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PoUserShutdownInitiated @ 0x140569744 (PoUserShutdownInitiated.c)
 *     PopSetupHighPerfPowerRequest @ 0x140599E20 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1406B75D0 (PdcPoPerfOverride.c)
 * Callees:
 *     <none>
 */

__int64 PpmBeginHighPerfRequest()
{
  return PoSetPowerRequestInternal(PopTransitionHighPerfRequest, 4u);
}
