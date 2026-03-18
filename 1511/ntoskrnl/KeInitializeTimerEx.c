/*
 * XREFs of KeInitializeTimerEx @ 0x14002C018
 * Callers:
 *     KeInitThread @ 0x14039C2C0 (KeInitThread.c)
 *     PopBuildDeviceNotifyList @ 0x1403A32E0 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403A5618 (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x1403A5A04 (PopHandleWakeSources.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403A6BA8 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x1403A7538 (KiInitializeProcessor.c)
 *     NtCreateTimer @ 0x14044EC80 (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1404CA828 (EtwpInitLoggerContext.c)
 *     PfSnBeginTrace @ 0x1404D5984 (PfSnBeginTrace.c)
 *     PfSnAsyncContextInitialize @ 0x1404DFB18 (PfSnAsyncContextInitialize.c)
 *     PoUserShutdownInitiated @ 0x1404F5250 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x140520684 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x140525298 (PiDrvDbCreateNode.c)
 *     CmpCmdInit @ 0x1405301A0 (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x1405308E4 (CmpInitializeLazyWriters.c)
 *     WdipSemStartTimeoutCheck @ 0x1405328D8 (WdipSemStartTimeoutCheck.c)
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 *     WheapSqmCollectConfigurationDataPoints @ 0x14054A10C (WheapSqmCollectConfigurationDataPoints.c)
 *     PopThermalZoneAdd @ 0x14054C0D8 (PopThermalZoneAdd.c)
 *     IopErrorLogQueueRequest @ 0x1405FE020 (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x140602490 (IoRequestDeviceRemovalForReset.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 *     ViPendingDelayCompletion @ 0x1406C1348 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1406C5940 (ViShutdownScheduleWatchdog.c)
 *     VerifierKeInitializeTimerEx @ 0x1406C604C (VerifierKeInitializeTimerEx.c)
 *     VfWdInit @ 0x1406C83D0 (VfWdInit.c)
 *     AnFwProgressIndicatorTransition @ 0x1406D916C (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1406DB564 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1406DCA98 (AnFwDisplayBackgroundUpdate.c)
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
