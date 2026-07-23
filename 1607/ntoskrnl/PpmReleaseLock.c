/*
 * XREFs of PpmReleaseLock @ 0x1400D2574
 * Callers:
 *     PoNotifyVSyncChange @ 0x140009DF0 (PoNotifyVSyncChange.c)
 *     PpmCheckPeriodicStart @ 0x1400D5130 (PpmCheckPeriodicStart.c)
 *     PpmMediaBufferingWorker @ 0x14010DD50 (PpmMediaBufferingWorker.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401FF628 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140200DE4 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x140204E54 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x14020AFE4 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14020DF34 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x1403F4B28 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x1403F652C (PpmSetProfilePolicySetting.c)
 *     PopEnforceResiliencyScenarios @ 0x1405349C4 (PopEnforceResiliencyScenarios.c)
 *     PopPpmHeteroPolicyCallback @ 0x140569A38 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140578A20 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14066C30C (PopWnfFullscreenVideoCallback.c)
 *     PpmUpdatePerfStates @ 0x14066DEC0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x14066FBC8 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140672A94 (PpmCompareAndApplyPolicySettings.c)
 *     PpmRegisterSpmSettings @ 0x140675F94 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406765A0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x140676710 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406767D8 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1407B6F10 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
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
