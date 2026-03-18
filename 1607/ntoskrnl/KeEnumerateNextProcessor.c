/*
 * XREFs of KeEnumerateNextProcessor @ 0x1400D53B0
 * Callers:
 *     PopCheckForIdleness @ 0x140008B3C (PopCheckForIdleness.c)
 *     PopQueueTargetDpc @ 0x14000D654 (PopQueueTargetDpc.c)
 *     KeFreezeExecution @ 0x1400822D0 (KeFreezeExecution.c)
 *     KiSendThawExecution @ 0x14008313C (KiSendThawExecution.c)
 *     KiSendFreeze @ 0x140083960 (KiSendFreeze.c)
 *     KeFlushQueuedDpcs @ 0x1400841B4 (KeFlushQueuedDpcs.c)
 *     KeRemoveQueueDpcEx @ 0x140085D28 (KeRemoveQueueDpcEx.c)
 *     PpmPerfMinimumPerfReached @ 0x1400AA6F4 (PpmPerfMinimumPerfReached.c)
 *     PpmCheckComputeEnergy @ 0x1400D483C (PpmCheckComputeEnergy.c)
 *     PpmParkDistributeUtility @ 0x1400D4870 (PpmParkDistributeUtility.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1400D4BCC (PpmParkCalculateCoreParkingMask.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1400D4C44 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfApplyLatencyHints @ 0x1400D51B0 (PpmPerfApplyLatencyHints.c)
 *     PpmParkUnblockIdle @ 0x1400D520C (PpmParkUnblockIdle.c)
 *     PpmParkReportParkedCores @ 0x1400D5250 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x1400D5294 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerDistributeInterrupts @ 0x1400D7010 (KiIntSteerDistributeInterrupts.c)
 *     PpmParkSteerInterrupts @ 0x1400D7A40 (PpmParkSteerInterrupts.c)
 *     PpmIdlePrepare @ 0x1400DBCB0 (PpmIdlePrepare.c)
 *     KiIntSteerDisable @ 0x140123F48 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14012D37C (KiIntSteerConnect.c)
 *     PpmPerfApplyProcessorStates @ 0x14012F1C0 (PpmPerfApplyProcessorStates.c)
 *     PpmEstimateIdleDuration @ 0x14013BA50 (PpmEstimateIdleDuration.c)
 *     PpmParkRegisterParking @ 0x140143818 (PpmParkRegisterParking.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401BFDE4 (HvlpAffinityToHvProcessorSet.c)
 *     KiStartProfileTarget @ 0x1401D7154 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1401D7350 (KiStopProfileTarget.c)
 *     KiIntSteerLogProc @ 0x1401DA7D8 (KiIntSteerLogProc.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1401FFE4C (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleDurationExpiration @ 0x140200578 (PpmIdleDurationExpiration.c)
 *     PpmIdleWaitForDependentTransitions @ 0x140200BC8 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x1402014F8 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x14020A4B8 (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x14020AC4C (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x14020AF20 (PpmHeteroDistributeUtility.c)
 *     PpmParkChooseCoresToUnpark @ 0x14020D984 (PpmParkChooseCoresToUnpark.c)
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x1403D3734 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1403DAA8C (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1403DB400 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 *     PopProcessorInformation @ 0x14051DE1C (PopProcessorInformation.c)
 *     PpmPerfUpdateDomains @ 0x140544794 (PpmPerfUpdateDomains.c)
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x14056A584 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x14056AC20 (PpmPerfResetHistoryAll.c)
 *     PpmPerfResizeHistoryAll @ 0x14056AC74 (PpmPerfResizeHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x14058174C (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14064F7A0 (KiSynchNumaCounterSetCallback.c)
 *     PpmUpdatePerfStates @ 0x14066DDDC (PpmUpdatePerfStates.c)
 *     VslConnectSwInterrupt @ 0x14079873C (VslConnectSwInterrupt.c)
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
