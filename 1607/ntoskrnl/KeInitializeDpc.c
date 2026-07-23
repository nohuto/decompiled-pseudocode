/*
 * XREFs of KeInitializeDpc @ 0x14000D25C
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
 *     PfSnAsyncContextInitialize @ 0x1403E6760 (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x1403EACC8 (PfSnBeginTrace.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     NtCreateTimer @ 0x14047056C (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x140493C40 (EtwpInitLoggerContext.c)
 *     ObpProcessRemoveObjectQueue @ 0x1404A541C (ObpProcessRemoveObjectQueue.c)
 *     PopUserPresentSetWorker @ 0x1404D2578 (PopUserPresentSetWorker.c)
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 *     PoUserShutdownInitiated @ 0x140534720 (PoUserShutdownInitiated.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 *     KeInitializeTimerTable @ 0x14054E710 (KeInitializeTimerTable.c)
 *     PiDrvDbCreateNode @ 0x14055211C (PiDrvDbCreateNode.c)
 *     EtwpInitializeStackTracing @ 0x140553288 (EtwpInitializeStackTracing.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 *     PopThermalZoneAdd @ 0x14056C794 (PopThermalZoneAdd.c)
 *     CmpCmdInit @ 0x14056F72C (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x14056F98C (CmpInitializeLazyWriters.c)
 *     WheapEtwEnableCallback @ 0x14057F8D0 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x140628100 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x14062C590 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14062D0F8 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14064FBD4 (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x14066EB8C (PopSetSystemAwayMode.c)
 *     TtmiCreateTerminal @ 0x140677844 (TtmiCreateTerminal.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x14070D3E0 (ViPendingDelayCompletion.c)
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
