/*
 * XREFs of KeEnumerateNextProcessor @ 0x1400D3250
 * Callers:
 *     PopCheckForIdleness @ 0x1400086B0 (PopCheckForIdleness.c)
 *     PopQueueTargetDpc @ 0x14000D1D4 (PopQueueTargetDpc.c)
 *     KeFlushQueuedDpcs @ 0x140082314 (KeFlushQueuedDpcs.c)
 *     KeFreezeExecution @ 0x140082F4C (KeFreezeExecution.c)
 *     KiSendThawExecution @ 0x140083DBC (KiSendThawExecution.c)
 *     KiSendFreeze @ 0x1400845E0 (KiSendFreeze.c)
 *     KeRemoveQueueDpcEx @ 0x140087618 (KeRemoveQueueDpcEx.c)
 *     PpmPerfMinimumPerfReached @ 0x1400A8C74 (PpmPerfMinimumPerfReached.c)
 *     PpmCheckComputeEnergy @ 0x1400D26DC (PpmCheckComputeEnergy.c)
 *     PpmParkDistributeUtility @ 0x1400D2710 (PpmParkDistributeUtility.c)
 *     PpmParkCalculateCoreParkingMask @ 0x1400D2A6C (PpmParkCalculateCoreParkingMask.c)
 *     PpmCheckMakeupSkippedChecks @ 0x1400D2AE4 (PpmCheckMakeupSkippedChecks.c)
 *     PpmPerfApplyLatencyHints @ 0x1400D3050 (PpmPerfApplyLatencyHints.c)
 *     PpmParkUnblockIdle @ 0x1400D30AC (PpmParkUnblockIdle.c)
 *     PpmParkReportParkedCores @ 0x1400D30F0 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x1400D3134 (PpmParkReportUnparkedCores.c)
 *     KiIntSteerDistributeInterrupts @ 0x1400D4EB0 (KiIntSteerDistributeInterrupts.c)
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 *     PpmIdlePrepare @ 0x1400D9B50 (PpmIdlePrepare.c)
 *     KiIntSteerDisable @ 0x1401244B8 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14012D8EC (KiIntSteerConnect.c)
 *     PpmPerfApplyProcessorStates @ 0x14012F730 (PpmPerfApplyProcessorStates.c)
 *     PpmEstimateIdleDuration @ 0x14013BFC0 (PpmEstimateIdleDuration.c)
 *     PpmParkRegisterParking @ 0x140143D88 (PpmParkRegisterParking.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1401BFCC8 (HvlpAffinityToHvProcessorSet.c)
 *     KiStartProfileTarget @ 0x1401D6F80 (KiStartProfileTarget.c)
 *     KiStopProfileTarget @ 0x1401D717C (KiStopProfileTarget.c)
 *     KiIntSteerLogProc @ 0x1401DA604 (KiIntSteerLogProc.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1401FFC78 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleDurationExpiration @ 0x1402003A4 (PpmIdleDurationExpiration.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402009F4 (PpmIdleWaitForDependentTransitions.c)
 *     PpmUnlockProcessors @ 0x140201324 (PpmUnlockProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x14020A2E4 (PpmCapturePerformanceDistribution.c)
 *     PpmCheckComputeHeteroResponse @ 0x14020AA78 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroDistributeUtility @ 0x14020AD4C (PpmHeteroDistributeUtility.c)
 *     PpmParkChooseCoresToUnpark @ 0x14020D7B0 (PpmParkChooseCoresToUnpark.c)
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     KiConfigureSchedulingInformation @ 0x1403D3734 (KiConfigureSchedulingInformation.c)
 *     IopLiveDumpCorralProcessors @ 0x1403DAA8C (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1403DB400 (IopLiveDumpMarkRequiredDumpData.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 *     PopProcessorInformation @ 0x140500E84 (PopProcessorInformation.c)
 *     PpmPerfUpdateDomains @ 0x140544CD4 (PpmPerfUpdateDomains.c)
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x14056AAC4 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResetHistoryAll @ 0x14056B160 (PpmPerfResetHistoryAll.c)
 *     PpmPerfResizeHistoryAll @ 0x14056B1B4 (PpmPerfResizeHistoryAll.c)
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x14064F884 (KiSynchNumaCounterSetCallback.c)
 *     PpmUpdatePerfStates @ 0x14066DEC0 (PpmUpdatePerfStates.c)
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
