/*
 * XREFs of PpmAcquireLock @ 0x14000A528
 * Callers:
 *     PoNotifyVSyncChange @ 0x14000A270 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14010D7EC (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14013566C (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x140143630 (PopIntSteerSetMode.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401FF7FC (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140200FB8 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x140205028 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x14020B1B8 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14020E108 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x1403F766C (PpmSetProfilePolicySetting.c)
 *     PpmPerfReApplyStates @ 0x140531814 (PpmPerfReApplyStates.c)
 *     PopEnforceResiliencyScenarios @ 0x140534484 (PopEnforceResiliencyScenarios.c)
 *     PopPerfBoostPowerRequest @ 0x140544740 (PopPerfBoostPowerRequest.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405694F8 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140569F90 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1405784E0 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x14058174C (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14066C228 (PopWnfFullscreenVideoCallback.c)
 *     PpmUpdatePerfStates @ 0x14066DDDC (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x14066FAE4 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140672C98 (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x140675A3C (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x140675E04 (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x140675EB0 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406764BC (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x14067662C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406766F4 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1407B6F10 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
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
