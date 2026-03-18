/*
 * XREFs of PpmReleaseLock @ 0x1400D46D4
 * Callers:
 *     PoNotifyVSyncChange @ 0x14000A270 (PoNotifyVSyncChange.c)
 *     PpmCheckPeriodicStart @ 0x1400D7290 (PpmCheckPeriodicStart.c)
 *     PpmMediaBufferingWorker @ 0x14010D7EC (PpmMediaBufferingWorker.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401FF7FC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140200FB8 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x140205028 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x14020B1B8 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14020E108 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x1403F766C (PpmSetProfilePolicySetting.c)
 *     PopEnforceResiliencyScenarios @ 0x140534484 (PopEnforceResiliencyScenarios.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405694F8 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140569F90 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1405784E0 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x14058174C (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14066C228 (PopWnfFullscreenVideoCallback.c)
 *     PpmUpdatePerfStates @ 0x14066DDDC (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x14066FAE4 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406729B0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmRegisterSpmSettings @ 0x140675EB0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406764BC (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14067662C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406766F4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1407B6F10 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 */

LONG __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = *a1;
  *a1 = 0LL;
  result = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}
