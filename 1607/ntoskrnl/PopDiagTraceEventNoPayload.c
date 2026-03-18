/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1400B06CC
 * Callers:
 *     PopScanIdleList @ 0x140009938 (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x1402071F0 (PopThermalStandbyNotify.c)
 *     PopTransitionToSleep @ 0x1403C9804 (PopTransitionToSleep.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     PopFlushVolumes @ 0x1403D0D4C (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x1403D24D0 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x1403D24DC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1403DF948 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1403DF954 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopDiagTracePreSleepCallbacks @ 0x14052FE58 (PopDiagTracePreSleepCallbacks.c)
 *     PopDiagTraceSuperfetchNotification @ 0x14052FEC8 (PopDiagTraceSuperfetchNotification.c)
 *     PopResumeServices @ 0x14052FEE4 (PopResumeServices.c)
 *     PopResumeApps @ 0x14052FF58 (PopResumeApps.c)
 *     PopSuspendServices @ 0x14052FFC8 (PopSuspendServices.c)
 *     PopSuspendApps @ 0x14053001C (PopSuspendApps.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x1405349C0 (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x14066E074 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x14066EAA8 (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x140671718 (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
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
