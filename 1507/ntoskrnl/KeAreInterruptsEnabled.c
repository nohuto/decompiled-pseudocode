/*
 * XREFs of KeAreInterruptsEnabled @ 0x140048A30
 * Callers:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     MmCanThreadFault @ 0x14001F4C0 (MmCanThreadFault.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140026CF4 (PnpIsSafeToExamineUserModeTeb.c)
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1400637C4 (EtwpRequestFlushTimer.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     KeAreAllApcsDisabled @ 0x140110060 (KeAreAllApcsDisabled.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KdPowerTransition @ 0x1401FDE40 (KdPowerTransition.c)
 *     KeResumeClockTimerSafe @ 0x1401FEA88 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401FEAC8 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140204508 (KeTryToInsertQueueApc.c)
 *     MiTrimAllSystemPagableMemory @ 0x14021B230 (MiTrimAllSystemPagableMemory.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14025C7C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x14025C988 (EtwSendTraceBuffer.c)
 *     EtwpSendTraceEvent @ 0x14025F398 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x1402601B0 (EtwpStackTraceDispatcher.c)
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     MmFlushVirtualMemory @ 0x140531D6C (MmFlushVirtualMemory.c)
 *     EtwpSynchronizeWithLogger @ 0x14054D790 (EtwpSynchronizeWithLogger.c)
 *     VfFastIoCheckState @ 0x140739E88 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140739F38 (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x140740DEC (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1407410A4 (VfBeforeCallDriver.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 *     ViDeadlockCanProceed @ 0x1407507C0 (ViDeadlockCanProceed.c)
 *     ViZwCheckApcRequirement @ 0x1407586B8 (ViZwCheckApcRequirement.c)
 * Callees:
 *     <none>
 */

__int64 KeAreInterruptsEnabled()
{
  unsigned int v1; // [rsp+0h] [rbp-8h]

  return (v1 >> 9) & 1;
}
