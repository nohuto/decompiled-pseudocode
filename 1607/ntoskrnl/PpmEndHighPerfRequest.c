/*
 * XREFs of PpmEndHighPerfRequest @ 0x140131ACC
 * Callers:
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PopUserShutdownCancelled @ 0x1405319C8 (PopUserShutdownCancelled.c)
 *     PoClearBroadcast @ 0x140531E44 (PoClearBroadcast.c)
 *     PopSetupHighPerfPowerRequest @ 0x140581AE8 (PopSetupHighPerfPowerRequest.c)
 *     PdcPoPerfOverride @ 0x14066FBA8 (PdcPoPerfOverride.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEndHighPerfRequest(int a1, __int64 a2)
{
  return PoClearPowerRequestInternalDeferred(PpmHighPerfDuration, a2, (unsigned int)PpmHighPerfDuration[a1]);
}
