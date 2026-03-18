/*
 * XREFs of PpmReleaseLock @ 0x140097098
 * Callers:
 *     PpmCheckStart @ 0x140075F90 (PpmCheckStart.c)
 *     PoNotifyVSyncChange @ 0x140097068 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140105218 (PpmMediaBufferingWorker.c)
 *     PopEnforceResiliencyScenarios @ 0x140119F5C (PopEnforceResiliencyScenarios.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401E6E54 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1401E85A8 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x1401EC570 (PpmRegisterPerfCap.c)
 *     PpmParkSetLpiCap @ 0x1401F4644 (PpmParkSetLpiCap.c)
 *     PpmSetProfilePolicySetting @ 0x140454614 (PpmSetProfilePolicySetting.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405366BC (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140543F34 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x14054B8EC (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140633E04 (PopWnfFullscreenVideoCallback.c)
 *     PdcPoPpmResetProfile @ 0x1406377E4 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14063A82C (PpmCompareAndApplyPolicySettings.c)
 *     PpmRegisterSpmSettings @ 0x14063D71C (PpmRegisterSpmSettings.c)
 *     PopControlDeepSleep @ 0x14063DA90 (PopControlDeepSleep.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14063DD50 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14063DEB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14063DF80 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x14076C6CC (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
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
