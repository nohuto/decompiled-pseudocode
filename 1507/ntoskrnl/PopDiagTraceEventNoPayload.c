/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x14012DD44
 * Callers:
 *     PopScanIdleList @ 0x1400D0490 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14023CAA4 (PopThermalStandbyNotify.c)
 *     PopBuildDeviceNotifyList @ 0x1403EC3B4 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x1403ECAA4 (PopFlushVolumes.c)
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 *     PopTransitionToSleep @ 0x1403F045C (PopTransitionToSleep.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x140403EFC (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x140403F08 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopDiagTracePreSleepCallbacks @ 0x140564A4C (PopDiagTracePreSleepCallbacks.c)
 *     PopDiagTraceSuperfetchNotification @ 0x1405660EC (PopDiagTraceSuperfetchNotification.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x140567418 (PopResumeApps.c)
 *     PopResumeServices @ 0x140567474 (PopResumeServices.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140567970 (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingActivate @ 0x1406B5318 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x1406B540C (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x1406B602C (PopSetSystemAwayMode.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
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
