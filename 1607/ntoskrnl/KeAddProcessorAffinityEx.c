/*
 * XREFs of KeAddProcessorAffinityEx @ 0x1400D1E28
 * Callers:
 *     ExpUpdateTimerConfiguration @ 0x140007194 (ExpUpdateTimerConfiguration.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14000C00C (KiIntRedirectQueueRequestOnProcessor.c)
 *     PoGetIdleTimes @ 0x14000D734 (PoGetIdleTimes.c)
 *     KeFlushQueuedDpcs @ 0x140082314 (KeFlushQueuedDpcs.c)
 *     KiSendThawExecution @ 0x140083DBC (KiSendThawExecution.c)
 *     KeQueryTotalCycleTimeThread @ 0x14009553C (KeQueryTotalCycleTimeThread.c)
 *     KiSendClockInterruptToClockOwner @ 0x14009D67C (KiSendClockInterruptToClockOwner.c)
 *     KiCheckKeepAlive @ 0x14009E100 (KiCheckKeepAlive.c)
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400D9B50 (PpmIdlePrepare.c)
 *     KeDisableTimer2 @ 0x1400F583C (KeDisableTimer2.c)
 *     KeUpdateThreadTag @ 0x14010D73C (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x14013BBF0 (PpmIdleSelectStates.c)
 *     PpmInstallNewIdleStates @ 0x140145C68 (PpmInstallNewIdleStates.c)
 *     KiStopProfileTarget @ 0x1401D717C (KiStopProfileTarget.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401DA294 (KeGetAffinitizedInterruptsInfo.c)
 *     PpmIdleDurationExpiration @ 0x1402003A4 (PpmIdleDurationExpiration.c)
 *     PpmRemoveIdleStates @ 0x140200C38 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x14020106C (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140201324 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x140201800 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x14020195C (PpmUpdateProcessorIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14020A0E4 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x14020A2E4 (PpmCapturePerformanceDistribution.c)
 *     KiUpdateProcessorCount @ 0x1403D3BD4 (KiUpdateProcessorCount.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x1403DD1E8 (KiConfigureHeteroProcessorsTarget.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403DD5DC (KiInitializeDynamicProcessorDpc.c)
 *     PpmUpdateIdleStates @ 0x14054EFB0 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     KiIntSteerInit @ 0x14079266C (KiIntSteerInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(_WORD *a1, int a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( (unsigned __int16)*a1 <= (unsigned int)v4 )
    *a1 = v4 + 1;
  v5 = (unsigned int)v4;
  v6 = *(_QWORD *)&a1[4 * v4 + 4];
  result = v3;
  _bittestandset64(&v6, v3);
  *(_QWORD *)&a1[4 * v5 + 4] = v6;
  return result;
}
