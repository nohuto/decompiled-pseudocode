/*
 * XREFs of PpmAcquireLock @ 0x14000A0A8
 * Callers:
 *     PoNotifyVSyncChange @ 0x140009DF0 (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14010DD50 (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140135BDC (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x140143BA0 (PopIntSteerSetMode.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x1401FF628 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140200DE4 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x140204E54 (PpmRegisterPerfCap.c)
 *     PopDeepSleepEvaluateCallback @ 0x14020AFE4 (PopDeepSleepEvaluateCallback.c)
 *     PpmParkSetLpiCap @ 0x14020DF34 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x1403F4B28 (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x1403F652C (PpmSetProfilePolicySetting.c)
 *     PpmPerfReApplyStates @ 0x140531D54 (PpmPerfReApplyStates.c)
 *     PopEnforceResiliencyScenarios @ 0x1405349C4 (PopEnforceResiliencyScenarios.c)
 *     PopPerfBoostPowerRequest @ 0x140544C80 (PopPerfBoostPowerRequest.c)
 *     PopPpmHeteroPolicyCallback @ 0x140569A38 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x140578A20 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14066C30C (PopWnfFullscreenVideoCallback.c)
 *     PpmUpdatePerfStates @ 0x14066DEC0 (PpmUpdatePerfStates.c)
 *     PdcPoPpmResetProfile @ 0x14066FBC8 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140672D7C (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x140675B20 (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x140675EE8 (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x140675F94 (PpmRegisterSpmSettings.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406765A0 (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x140676710 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406767D8 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1407B6F10 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
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
