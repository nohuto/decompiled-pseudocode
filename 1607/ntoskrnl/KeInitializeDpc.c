/*
 * XREFs of KeInitializeDpc @ 0x14000D6DC
 * Callers:
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403D03E4 (PfpStartLoggingHardFaultEvents.c)
 *     PopCaptureTimeOnProcZero @ 0x1403D058C (PopCaptureTimeOnProcZero.c)
 *     PopHandleWakeSources @ 0x1403D0AEC (PopHandleWakeSources.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403D3108 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiCompleteKernelInit @ 0x1403D46A0 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x1403D4A9C (PoInitializePrcb.c)
 *     KiInitPrcb @ 0x1403D5408 (KiInitPrcb.c)
 *     IopLiveDumpCorralProcessors @ 0x1403DAA8C (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 *     PfSnAsyncContextInitialize @ 0x1403E5134 (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x1403E9698 (PfSnBeginTrace.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtCreateTimer @ 0x14047169C (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1404931B0 (EtwpInitLoggerContext.c)
 *     PspThreadDelete @ 0x1404A37B8 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404B96EC (ObpProcessRemoveObjectQueue.c)
 *     PopUserPresentSetWorker @ 0x1404F0484 (PopUserPresentSetWorker.c)
 *     PoUserShutdownInitiated @ 0x1405341E0 (PoUserShutdownInitiated.c)
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
 *     KeInitializeTimerTable @ 0x14054E370 (KeInitializeTimerTable.c)
 *     PiDrvDbCreateNode @ 0x140551BDC (PiDrvDbCreateNode.c)
 *     EtwpInitializeStackTracing @ 0x140552D48 (EtwpInitializeStackTracing.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055EB0C (ExpRefreshTimeZoneInformation.c)
 *     PopThermalZoneAdd @ 0x14056C254 (PopThermalZoneAdd.c)
 *     CmpCmdInit @ 0x14056F1EC (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x14056F44C (CmpInitializeLazyWriters.c)
 *     WheapEtwEnableCallback @ 0x14057F424 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x14062804C (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x14062C4DC (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14062D044 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14064FAF0 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x14066EAA8 (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x140677760 (TtmiCreateTerminal.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x14070D3B0 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140711980 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x140716D78 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x140725550 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140727494 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140728B84 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeDpc(PRKDPC Dpc, PKDEFERRED_ROUTINE DeferredRoutine, PVOID DeferredContext)
{
  Dpc->TargetInfoAsUlong = 275;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  Dpc->DeferredRoutine = DeferredRoutine;
  Dpc->DeferredContext = DeferredContext;
}
