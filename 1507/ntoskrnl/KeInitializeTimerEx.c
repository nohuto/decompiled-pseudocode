/*
 * XREFs of KeInitializeTimerEx @ 0x140021284
 * Callers:
 *     KeInitThread @ 0x1403EB280 (KeInitThread.c)
 *     PopBuildDeviceNotifyList @ 0x1403EC3B4 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403EEE9C (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403F70CC (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x1403F8C60 (KiInitializeProcessor.c)
 *     NtCreateTimer @ 0x140451ED0 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1404B0048 (EtwpInitLoggerContext.c)
 *     PfSnAsyncContextInitialize @ 0x1404F5D18 (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x140543FC8 (PfSnBeginTrace.c)
 *     PoUserShutdownInitiated @ 0x140569744 (PoUserShutdownInitiated.c)
 *     PiDrvDbCreateNode @ 0x1405956B0 (PiDrvDbCreateNode.c)
 *     MiInitializeSections @ 0x140597028 (MiInitializeSections.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x1405A6AF4 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1405A74EC (CmpInitializeLazyWriters.c)
 *     WdipSemStartTimeoutCheck @ 0x1405ADDBC (WdipSemStartTimeoutCheck.c)
 *     WheapSqmCollectConfigurationDataPoints @ 0x1405C16C4 (WheapSqmCollectConfigurationDataPoints.c)
 *     PopThermalZoneAdd @ 0x1405C343C (PopThermalZoneAdd.c)
 *     IopErrorLogQueueRequest @ 0x140678964 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x14067D338 (IoRequestDeviceRemovalForReset.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x140742AC8 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1407475AC (ViShutdownScheduleWatchdog.c)
 *     VerifierKeInitializeTimerEx @ 0x140748358 (VerifierKeInitializeTimerEx.c)
 *     VfWdInit @ 0x14074AE94 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x14075C350 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x14075E5AC (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x14075FAE0 (AnFwDisplayBackgroundUpdate.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  *(_QWORD *)&Timer->Processor = 0LL;
}
