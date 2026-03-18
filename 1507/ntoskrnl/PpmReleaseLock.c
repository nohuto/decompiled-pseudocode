/*
 * XREFs of PpmReleaseLock @ 0x1400E70D0
 * Callers:
 *     PpmCheckStart @ 0x1400E71A0 (PpmCheckStart.c)
 *     PoNotifyVSyncChange @ 0x1400ED1EC (PoNotifyVSyncChange.c)
 *     PpmMediaBufferingWorker @ 0x14013258C (PpmMediaBufferingWorker.c)
 *     PopEnforceResiliencyScenarios @ 0x140147FD0 (PopEnforceResiliencyScenarios.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140234100 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140235870 (PpmSetExitLatencySamplingPercentage.c)
 *     PpmRegisterPerfCap @ 0x14023A7B8 (PpmRegisterPerfCap.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14023C8F0 (PopAccumulateNonActivatedCpuTime.c)
 *     PpmParkSetLpiCap @ 0x1402427F8 (PpmParkSetLpiCap.c)
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PpmInfoReleaseLocks @ 0x1404FE334 (PpmInfoReleaseLocks.c)
 *     PopPpmHeteroPolicyCallback @ 0x1405AF588 (PopPpmHeteroPolicyCallback.c)
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 *     PpmRegisterProfiles @ 0x1405B9F50 (PpmRegisterProfiles.c)
 *     PpmEventTraceControlCallback @ 0x1405C2C9C (PpmEventTraceControlCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406B34B0 (PopWnfFullscreenVideoCallback.c)
 *     PdcPoPpmResetProfile @ 0x1406B75F0 (PdcPoPpmResetProfile.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406BA7C8 (PpmCompareAndApplyPolicySettings.c)
 *     PpmRegisterSpmSettings @ 0x1406BDFB8 (PpmRegisterSpmSettings.c)
 *     PopControlDeepSleep @ 0x1406BE32C (PopControlDeepSleep.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1406BE5EC (PpmPerfRegisterHvPerfStateCounters.c)
 *     PpmParkApplyForcedMask @ 0x1406BE7BC (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406BE884 (PpmParkClearForcedMask.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 *     PpmInitPolicyConfiguration @ 0x1407E18E0 (PpmInitPolicyConfiguration.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

int __fastcall PpmReleaseLock(__int64 *a1)
{
  __int64 v1; // rbx
  $CD287064E7C9F7953DE243E927CFCB99 *v2; // rax
  struct _KTHREAD *CurrentThread; // rcx

  v1 = *a1;
  *a1 = 0LL;
  LODWORD(v2) = KeSetEvent((PRKEVENT)(a1 + 1), 0, 0);
  if ( v1 )
  {
    CurrentThread = KeGetCurrentThread();
    LODWORD(v2) = ++CurrentThread->SpecialApcDisable;
    if ( !(_WORD)v2 )
    {
      v2 = &CurrentThread->152;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v2->ApcState.ApcListHead[0].Flink != v2 )
        LODWORD(v2) = KiCheckForKernelApcDelivery(CurrentThread);
    }
  }
  return (int)v2;
}
