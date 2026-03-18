/*
 * XREFs of PpmAcquireLock @ 0x1400ED5A0
 * Callers:
 *     PoNotifyVSyncChange @ 0x1400ED1EC (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14013258C (PpmMediaBufferingWorker.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140133D48 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopEnforceResiliencyScenarios @ 0x140147FD0 (PopEnforceResiliencyScenarios.c)
 *     PopIntSteerSetMode @ 0x140167724 (PopIntSteerSetMode.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140234100 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140235870 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x14023A7B8 (PpmRegisterPerfCap.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14023C8F0 (PopAccumulateNonActivatedCpuTime.c)
 *     PpmParkSetLpiCap @ 0x1402427F8 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PpmSetProfilePolicySetting @ 0x1404FF554 (PpmSetProfilePolicySetting.c)
 *     PpmPerfReApplyStates @ 0x140566064 (PpmPerfReApplyStates.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405AF588 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1405B9F50 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x1405C2C9C (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406B34B0 (PopWnfFullscreenVideoCallback.c)
 *     PdcPoPpmResetProfile @ 0x1406B75F0 (PdcPoPpmResetProfile.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1406BABDC (PpmPerfProcCapFloorSettingCallback.c)
 *     PpmApplyProfile @ 0x1406BD84C (PpmApplyProfile.c)
 *     PpmProfileAcDcUpdate @ 0x1406BDEAC (PpmProfileAcDcUpdate.c)
 *     PpmRegisterSpmSettings @ 0x1406BDFB8 (PpmRegisterSpmSettings.c)
 *     PopControlDeepSleep @ 0x1406BE32C (PopControlDeepSleep.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406BE5EC (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1406BE7BC (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406BE884 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1407E18E0 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
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
