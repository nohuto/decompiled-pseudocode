/*
 * XREFs of PpmAcquireLock @ 0x140097354
 * Callers:
 *     PoNotifyVSyncChange @ 0x140097068 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x140105218 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140107594 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopEnforceResiliencyScenarios @ 0x140119F5C (PopEnforceResiliencyScenarios.c)
 *     PopIntSteerSetMode @ 0x140138C14 (PopIntSteerSetMode.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401E6E54 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1401E85A8 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x1401EC570 (PpmRegisterPerfCap.c)
 *     PpmParkSetLpiCap @ 0x1401F4644 (PpmParkSetLpiCap.c)
 *     PpmSetProfilePolicySetting @ 0x140454614 (PpmSetProfilePolicySetting.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PpmPerfReApplyStates @ 0x1404F8CB0 (PpmPerfReApplyStates.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405366BC (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140543F34 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x14054B8EC (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140633E04 (PopWnfFullscreenVideoCallback.c)
 *     PpmPerfRemoveMaximumOverride @ 0x1406359CC (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x1406359EC (PpmPerfSetMaximumOverride.c)
 *     PdcPoPpmResetProfile @ 0x1406377E4 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x14063AB14 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x14063D2A8 (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x14063D670 (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x14063D71C (PpmRegisterSpmSettings.c)
 *     PopControlDeepSleep @ 0x14063DA90 (PopControlDeepSleep.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x14063DD50 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14063DEB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14063DF80 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x14076C6CC (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall PpmAcquireLock(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}
