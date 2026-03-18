/*
 * XREFs of KeAddProcessorAffinityEx @ 0x140076CC0
 * Callers:
 *     KeDisableTimer2 @ 0x1400319E4 (KeDisableTimer2.c)
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     PpmIdlePrepare @ 0x1400488C0 (PpmIdlePrepare.c)
 *     PpmPerfApplyDomainStates @ 0x140074E40 (PpmPerfApplyDomainStates.c)
 *     PpmParkSteerInterrupts @ 0x140074F40 (PpmParkSteerInterrupts.c)
 *     PpmPerfSelectDomainStates @ 0x140076BB0 (PpmPerfSelectDomainStates.c)
 *     KeFlushQueuedDpcs @ 0x14009C070 (KeFlushQueuedDpcs.c)
 *     PoGetIdleTimes @ 0x14009D63C (PoGetIdleTimes.c)
 *     KiCheckKeepAlive @ 0x1400E255C (KiCheckKeepAlive.c)
 *     ExpUpdateTimerConfiguration @ 0x1400EB410 (ExpUpdateTimerConfiguration.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400EC2C0 (KiSendClockInterruptToClockOwner.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400F1340 (KeQueryTotalCycleTimeThread.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1400F6900 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeUpdateThreadTag @ 0x140104FD4 (KeUpdateThreadTag.c)
 *     PoLatencySensitivityHint @ 0x140105D7C (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140107594 (PpmPerfLatencySensitivityHintWorker.c)
 *     PpmIdleSelectStates @ 0x140134970 (PpmIdleSelectStates.c)
 *     PpmInstallNewIdleStates @ 0x140139824 (PpmInstallNewIdleStates.c)
 *     KiStopProfileTarget @ 0x1401C8324 (KiStopProfileTarget.c)
 *     KiSendThawExecution @ 0x1401C93D4 (KiSendThawExecution.c)
 *     KeGetAffinitizedInterruptsInfo @ 0x1401CA838 (KeGetAffinitizedInterruptsInfo.c)
 *     PpmIdleDurationExpiration @ 0x1401E79C0 (PpmIdleDurationExpiration.c)
 *     PpmRemoveIdleStates @ 0x1401E83F8 (PpmRemoveIdleStates.c)
 *     PpmTestAndLockProcessor @ 0x1401E8820 (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x1401E8AD0 (PpmUnlockProcessors.c)
 *     PpmUpdatePlatformIdleVeto @ 0x1401E8FB0 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1401E9110 (PpmUpdateProcessorIdleVeto.c)
 *     PpmRegisterPerfCap @ 0x1401EC570 (PpmRegisterPerfCap.c)
 *     PoGetPerfStateAndParkingInfo @ 0x1401F11AC (PoGetPerfStateAndParkingInfo.c)
 *     PpmCapturePerformanceDistribution @ 0x1401F1398 (PpmCapturePerformanceDistribution.c)
 *     KiInitializeBootStructures @ 0x1403A770C (KiInitializeBootStructures.c)
 *     KiUpdateProcessorCount @ 0x1403A903C (KiUpdateProcessorCount.c)
 *     KiInitializeKernel @ 0x1403A9234 (KiInitializeKernel.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403B10E8 (KiInitializeDynamicProcessorDpc.c)
 *     PpmPerfReApplyStates @ 0x1404F8CB0 (PpmPerfReApplyStates.c)
 *     PpmUpdateIdleStates @ 0x14052FF24 (PpmUpdateIdleStates.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmPerfUpdateDomains @ 0x140537610 (PpmPerfUpdateDomains.c)
 *     KiIntSteerInit @ 0x14074EC6C (KiIntSteerInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddProcessorAffinityEx(_WORD *a1, int a2)
{
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  _WORD *v6; // rdx
  __int64 result; // rax

  v3 = KiProcessorIndexToNumberMappingTable[a2] & 0x3F;
  v4 = (unsigned int)KiProcessorIndexToNumberMappingTable[a2] >> 6;
  if ( (unsigned __int16)*a1 <= (unsigned int)v4 )
    *a1 = v4 + 1;
  v5 = *(_QWORD *)&a1[4 * v4 + 4];
  v6 = &a1[4 * v4];
  result = v3;
  _bittestandset64(&v5, v3);
  *((_QWORD *)v6 + 1) = v5;
  return result;
}
