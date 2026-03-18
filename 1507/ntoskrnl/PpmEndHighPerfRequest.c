/*
 * XREFs of PpmEndHighPerfRequest @ 0x14015A1D0
 * Callers:
 *     PoClearBroadcast @ 0x140565E40 (PoClearBroadcast.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PopUserShutdownCancelled @ 0x140566C24 (PopUserShutdownCancelled.c)
 *     PopSetupHighPerfPowerRequest @ 0x140599E20 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1406B75D0 (PdcPoPerfOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEndHighPerfRequest(int a1, __int64 a2)
{
  return PoClearPowerRequestInternalDeferred(PpmHighPerfDuration, a2, (unsigned int)PpmHighPerfDuration[a1]);
}
