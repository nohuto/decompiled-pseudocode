/*
 * XREFs of PpmEndHighPerfRequest @ 0x140126A00
 * Callers:
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PopUserShutdownCancelled @ 0x1404F878C (PopUserShutdownCancelled.c)
 *     PoClearBroadcast @ 0x1404F8D9C (PoClearBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x140530ABC (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x1406377C4 (PdcPoPerfOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEndHighPerfRequest(int a1, __int64 a2)
{
  return PoClearPowerRequestInternalDeferred(PpmHighPerfDuration, a2, (unsigned int)PpmHighPerfDuration[a1]);
}
