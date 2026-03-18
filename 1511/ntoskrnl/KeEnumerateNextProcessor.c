/*
 * XREFs of KeEnumerateNextProcessor @ 0x14009C650
 * Callers:
 *     PpmIdlePrepare @ 0x1400488C0 (PpmIdlePrepare.c)
 *     PpmPerfApplyDomainStates @ 0x140074E40 (PpmPerfApplyDomainStates.c)
 *     PpmParkSteerInterrupts @ 0x140074F40 (PpmParkSteerInterrupts.c)
 *     PpmParkReportUnparkedCores @ 0x14007560C (PpmParkReportUnparkedCores.c)
 *     PpmParkReportParkedCores @ 0x140075634 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140075678 (PpmParkUnblockIdle.c)
 *     PpmPerfApplyLatencyHints @ 0x1400756BC (PpmPerfApplyLatencyHints.c)
 *     PpmCheckMakeupSkippedChecks @ 0x140075B84 (PpmCheckMakeupSkippedChecks.c)
 *     PpmParkCalculateCoreParkingMask @ 0x140076518 (PpmParkCalculateCoreParkingMask.c)
 *     PpmParkDistributeUtility @ 0x140076840 (PpmParkDistributeUtility.c)
 *     PpmCheckComputeEnergy @ 0x140076B7C (PpmCheckComputeEnergy.c)
 *     KiIntSteerDistributeInterrupts @ 0x140076D30 (KiIntSteerDistributeInterrupts.c)
 *     PopCheckForIdleness @ 0x1400973B4 (PopCheckForIdleness.c)
 *     PpmPerfMinimumPerfReached @ 0x14009BEEC (PpmPerfMinimumPerfReached.c)
 *     KeFlushQueuedDpcs @ 0x14009C070 (KeFlushQueuedDpcs.c)
 *     PopQueueTargetDpc @ 0x14009C5CC (PopQueueTargetDpc.c)
 *     KeRemoveQueueDpcEx @ 0x1400D948C (KeRemoveQueueDpcEx.c)
 *     KiIntSteerDisable @ 0x140115B90 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x140122B3C (KiIntSteerConnect.c)
 *     PpmPerfApplyProcessorStates @ 0x140123FFC (PpmPerfApplyProcessorStates.c)
 *     PpmPerfForceDomainStates @ 0x140126714 (PpmPerfForceDomainStates.c)
 *     PpmEstimateIdleDuration @ 0x140134D20 (PpmEstimateIdleDuration.c)
 *     PpmParkRegisterParking @ 0x140138DFC (PpmParkRegisterParking.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401AE6F0 (HvlpAffinityToHvProcessorSet.c)
 *     KiStartProfileTarget @ 0x1401C8114 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1401C8324 (KiStopProfileTarget.c)
 *     KeFreezeExecution @ 0x1401C8B48 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1401C9324 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x1401C93D4 (KiSendThawExecution.c)
 *     KiIntSteerLogStatus @ 0x1401CAAB4 (KiIntSteerLogStatus.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1401E7294 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleDurationExpiration @ 0x1401E79C0 (PpmIdleDurationExpiration.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1401E81C0 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x1401E8AD0 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x1401F1398 (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x1401F3220 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x1401F34F4 (PpmHeteroDistributeUtility.c)
 *     PpmParkChooseCoresToUnpark @ 0x1401F3EC0 (PpmParkChooseCoresToUnpark.c)
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x1403A8B9C (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1403AEA00 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1403AF2F8 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1403B079C (PnprQuiesceProcessors.c)
 *     PopProcessorInformation @ 0x14046167C (PopProcessorInformation.c)
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmPerfUpdateDomains @ 0x140537610 (PpmPerfUpdateDomains.c)
 *     PpmPerfResetHistoryAll @ 0x140537958 (PpmPerfResetHistoryAll.c)
 *     PpmPerfResizeHistoryAll @ 0x1405379AC (PpmPerfResizeHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x14054B8EC (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14061A56C (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeEnumerateNextProcessor(_DWORD *a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  unsigned int v4; // r9d
  __int64 v5; // rax
  unsigned __int16 *v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v2 = *a2;
  if ( *a2 )
    v4 = *v2;
  else
    v4 = *((unsigned __int16 *)a2 + 8) + 1;
  if ( a2[1] )
  {
LABEL_6:
    v7 = (unsigned __int64)a2[1];
    _BitScanForward64(&v8, v7);
    a2[1] = (unsigned __int16 *)(v7 & ~(1LL << v8));
    *a1 = KiProcessorNumberToIndexMappingTable[64 * *((unsigned __int16 *)a2 + 8) + (unsigned __int8)v8];
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v5 = (unsigned __int16)++*((_WORD *)a2 + 8);
      if ( (unsigned int)v5 >= v4 )
        return 3221226021LL;
      v6 = *(unsigned __int16 **)&v2[4 * v5 + 4];
      a2[1] = v6;
      if ( v6 )
        goto LABEL_6;
    }
  }
}
