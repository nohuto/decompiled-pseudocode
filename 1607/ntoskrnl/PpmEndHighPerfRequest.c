/*
 * XREFs of PpmEndHighPerfRequest @ 0x14013155C
 * Callers:
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 *     PopUserShutdownCancelled @ 0x140531488 (PopUserShutdownCancelled.c)
 *     PoClearBroadcast @ 0x140531904 (PoClearBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x14058163C (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x14066FAC4 (PdcPoPerfOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEndHighPerfRequest(int a1, __int64 a2)
{
  return PoClearPowerRequestInternalDeferred(PpmHighPerfDuration, a2, (unsigned int)PpmHighPerfDuration[a1]);
}
