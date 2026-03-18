/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1400F07C8
 * Callers:
 *     PopScanIdleList @ 0x1400990D8 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1401EE650 (PopThermalStandbyNotify.c)
 *     PopTransitionToSleep @ 0x14039E084 (PopTransitionToSleep.c)
 *     PopBuildDeviceNotifyList @ 0x1403A32E0 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x1403A39C4 (PopFlushVolumes.c)
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1403B2C5C (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1403B2C68 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopDiagTracePreSleepCallbacks @ 0x1404F6AE0 (PopDiagTracePreSleepCallbacks.c)
 *     PopDiagTraceSuperfetchNotification @ 0x1404F7538 (PopDiagTraceSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x1404F86B4 (PopResumeApps.c)
 *     PopResumeServices @ 0x1404F8710 (PopResumeServices.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1404F8CA4 (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingActivate @ 0x140635B48 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x140635C3C (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1406366F8 (PopSetSystemAwayMode.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 */

void __fastcall PopDiagTraceEventNoPayload(PCEVENT_DESCRIPTOR EventDescriptor)
{
  REGHANDLE v2; // rdi

  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, EventDescriptor) )
      EtwWrite(v2, EventDescriptor, 0LL, 0, 0LL);
  }
}
