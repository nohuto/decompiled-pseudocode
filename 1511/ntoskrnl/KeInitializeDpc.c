/*
 * XREFs of KeInitializeDpc @ 0x140093330
 * Callers:
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     PopBuildDeviceNotifyList @ 0x1403A32E0 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403A5618 (PfpStartLoggingHardFaultEvents.c)
 *     PopCaptureTimeOnProcZero @ 0x1403A58B0 (PopCaptureTimeOnProcZero.c)
 *     PopHandleWakeSources @ 0x1403A5A04 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403A6BA8 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x1403A7C1C (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x1403A9A9C (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x1403A9E9C (PoInitializePrcb.c)
 *     IopLiveDumpCorralProcessors @ 0x1403AEA00 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1403B079C (PnprQuiesceProcessors.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x1403F1F50 (PspThreadDelete.c)
 *     NtCreateTimer @ 0x14044EC80 (NtCreateTimer.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x14049BD74 (ObpProcessRemoveObjectQueue.c)
 *     PopUserPresentSetWorker @ 0x1404C552C (PopUserPresentSetWorker.c)
 *     EtwpInitLoggerContext @ 0x1404CA828 (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x1404D5984 (PfSnBeginTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1404DFB18 (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x1404F5250 (PoUserShutdownInitiated.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 *     PiDrvDbCreateNode @ 0x140525298 (PiDrvDbCreateNode.c)
 *     EtwpInitializeStackTracing @ 0x140525610 (EtwpInitializeStackTracing.c)
 *     KeInitializeTimerTable @ 0x14052F834 (KeInitializeTimerTable.c)
 *     CmpCmdInit @ 0x1405301A0 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1405308E4 (CmpInitializeLazyWriters.c)
 *     WdipSemStartTimeoutCheck @ 0x1405328D8 (WdipSemStartTimeoutCheck.c)
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 *     WheapSqmCollectConfigurationDataPoints @ 0x14054A10C (WheapSqmCollectConfigurationDataPoints.c)
 *     PopThermalZoneAdd @ 0x14054C0D8 (PopThermalZoneAdd.c)
 *     IopErrorLogQueueRequest @ 0x1405FE020 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x140602490 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140602CC8 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14061A8BC (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1406366F8 (PopSetSystemAwayMode.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1406C1348 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1406C5940 (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x1406C83D0 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x1406D916C (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1406DB564 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1406DCA98 (AnFwDisplayBackgroundUpdate.c)
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
