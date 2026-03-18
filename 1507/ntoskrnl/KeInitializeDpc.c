/*
 * XREFs of KeInitializeDpc @ 0x1400212A4
 * Callers:
 *     PopBuildDeviceNotifyList @ 0x1403EC3B4 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403EEE9C (PfpStartLoggingHardFaultEvents.c)
 *     PopCaptureTimeOnProcZero @ 0x1403EF070 (PopCaptureTimeOnProcZero.c)
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 *     PopEndMirroring @ 0x1403F1294 (PopEndMirroring.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403F70CC (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitPrcb @ 0x1403F7D4C (KiInitPrcb.c)
 *     KiCompleteKernelInit @ 0x1403F98E4 (KiCompleteKernelInit.c)
 *     PoInitializePrcb @ 0x1403F9D18 (PoInitializePrcb.c)
 *     IopLiveDumpCorralProcessors @ 0x1403FEDD4 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x140400DAC (PnprQuiesceProcessors.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     NtCreateTimer @ 0x140451ED0 (NtCreateTimer.c)
 *     ObpProcessRemoveObjectQueue @ 0x140474070 (ObpProcessRemoveObjectQueue.c)
 *     EtwpInitLoggerContext @ 0x1404B0048 (EtwpInitLoggerContext.c)
 *     PfSnAsyncContextInitialize @ 0x1404F5D18 (PfSnAsyncContextInitialize.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140504F18 (PspThreadDelete.c)
 *     PfSnBeginTrace @ 0x140543FC8 (PfSnBeginTrace.c)
 *     PopUserPresentSetWorker @ 0x14055BF78 (PopUserPresentSetWorker.c)
 *     PoUserShutdownInitiated @ 0x140569744 (PoUserShutdownInitiated.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 *     PiDrvDbCreateNode @ 0x1405956B0 (PiDrvDbCreateNode.c)
 *     EtwpInitializeStackTracing @ 0x140595A28 (EtwpInitializeStackTracing.c)
 *     KeInitializeTimerTable @ 0x14059A850 (KeInitializeTimerTable.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x1405A6AF4 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1405A74EC (CmpInitializeLazyWriters.c)
 *     WdipSemStartTimeoutCheck @ 0x1405ADDBC (WdipSemStartTimeoutCheck.c)
 *     WheapSqmCollectConfigurationDataPoints @ 0x1405C16C4 (WheapSqmCollectConfigurationDataPoints.c)
 *     PopThermalZoneAdd @ 0x1405C343C (PopThermalZoneAdd.c)
 *     IopErrorLogQueueRequest @ 0x140678964 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x14067D338 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14067DB34 (IopAllocatePassiveInterruptBlock.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140698F8C (KeInitializeSecondaryInterruptServices.c)
 *     PopSetSystemAwayMode @ 0x1406B602C (PopSetSystemAwayMode.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140742AC8 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1407475AC (ViShutdownScheduleWatchdog.c)
 *     VfWdInit @ 0x14074AE94 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x14075C350 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14075E5AC (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14075FAE0 (AnFwDisplayBackgroundUpdate.c)
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
