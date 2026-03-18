/*
 * XREFs of KeInitializeTimerEx @ 0x1400F0C50
 * Callers:
 *     KeInitThread @ 0x1403C8E74 (KeInitThread.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403D03E4 (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x1403D0AEC (PopHandleWakeSources.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403D3108 (PfSnAllocateEnablePrefetcherTimer.c)
 *     KiInitializeProcessor @ 0x1403D34A8 (KiInitializeProcessor.c)
 *     PfSnAsyncContextInitialize @ 0x1403E5134 (PfSnAsyncContextInitialize.c)
 *     PfSnBeginTrace @ 0x1403E9698 (PfSnBeginTrace.c)
 *     NtCreateTimer @ 0x14047169C (NtCreateTimer.c)
 *     EtwpInitLoggerContext @ 0x1404931B0 (EtwpInitLoggerContext.c)
 *     PoUserShutdownInitiated @ 0x1405341E0 (PoUserShutdownInitiated.c)
 *     MiInitializeSections @ 0x14054F190 (MiInitializeSections.c)
 *     PiDrvDbCreateNode @ 0x140551BDC (PiDrvDbCreateNode.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055EB0C (ExpRefreshTimeZoneInformation.c)
 *     PopThermalZoneAdd @ 0x14056C254 (PopThermalZoneAdd.c)
 *     CmpCmdInit @ 0x14056F1EC (CmpCmdInit.c)
 *     CmpInitializeLazyWriters @ 0x14056F44C (CmpInitializeLazyWriters.c)
 *     WheapEtwEnableCallback @ 0x14057F424 (WheapEtwEnableCallback.c)
 *     IopErrorLogQueueRequest @ 0x14062804C (IopErrorLogQueueRequest.c)
 *     IoRequestDeviceRemovalForReset @ 0x14062C4DC (IoRequestDeviceRemovalForReset.c)
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

void __stdcall KeInitializeTimerEx(PKTIMER Timer, TIMER_TYPE Type)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = Type + 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  *(_QWORD *)&Timer->Processor = 0LL;
}
