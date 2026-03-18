/*
 * XREFs of KeAddProcessorAffinityEx @ 0x1400D3F88
 * Callers:
 *     ExpUpdateTimerConfiguration @ 0x140007024 (ExpUpdateTimerConfiguration.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14000C48C (KiIntRedirectQueueRequestOnProcessor.c)
 *     PoGetIdleTimes @ 0x14000DBB4 (PoGetIdleTimes.c)
 *     KiSendThawExecution @ 0x14008313C (KiSendThawExecution.c)
 *     KeFlushQueuedDpcs @ 0x1400841B4 (KeFlushQueuedDpcs.c)
 *     KeQueryTotalCycleTimeThread @ 0x140095D3C (KeQueryTotalCycleTimeThread.c)
 *     KiSendClockInterruptToClockOwner @ 0x14009DE7C (KiSendClockInterruptToClockOwner.c)
 *     KiCheckKeepAlive @ 0x14009F7D8 (KiCheckKeepAlive.c)
 *     PpmParkSteerInterrupts @ 0x1400D7A40 (PpmParkSteerInterrupts.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400DBCB0 (PpmIdlePrepare.c)
 *     KeDisableTimer2 @ 0x1400F79FC (KeDisableTimer2.c)
 *     KeUpdateThreadTag @ 0x14010D1D8 (KeUpdateThreadTag.c)
 *     PpmIdleSelectStates @ 0x14013B680 (PpmIdleSelectStates.c)
 *     PpmInstallNewIdleStates @ 0x1401456F8 (PpmInstallNewIdleStates.c)
 *     KiStopProfileTarget @ 0x1401D7350 (KiStopProfileTarget.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401DA468 (KeGetAffinitizedInterruptsInfo.c)
 *     PpmIdleDurationExpiration @ 0x140200578 (PpmIdleDurationExpiration.c)
 *     PpmRemoveIdleStates @ 0x140200E0C (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x140201240 (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1402014F8 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1402019D4 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x140201B30 (PpmUpdateProcessorIdleVeto.c)
 *     PoGetPerfStateAndParkingInfo @ 0x14020A2B8 (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x14020A4B8 (PpmCapturePerformanceDistribution.c)
 *     KiUpdateProcessorCount @ 0x1403D3BD4 (KiUpdateProcessorCount.c)
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 *     KiInitializeBootStructures @ 0x1403D4E7C (KiInitializeBootStructures.c)
 *     KiConfigureHeteroProcessorsTarget @ 0x1403DD1E8 (KiConfigureHeteroProcessorsTarget.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403DD5DC (KiInitializeDynamicProcessorDpc.c)
 *     PpmUpdateIdleStates @ 0x14054EC10 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
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
