/*
 * XREFs of PopDiagTraceEventNoPayload @ 0x1400AE73C
 * Callers:
 *     PopScanIdleList @ 0x1400094AC (PopScanIdleList.c)
 *     PopThermalStandbyNotify @ 0x14020701C (PopThermalStandbyNotify.c)
 *     PopTransitionToSleep @ 0x1403C9804 (PopTransitionToSleep.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     PopFlushVolumes @ 0x1403D0D4C (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 *     PopDiagTraceFlushSleepStudyLoggerEnd @ 0x1403D24D0 (PopDiagTraceFlushSleepStudyLoggerEnd.c)
 *     PopDiagTraceFlushSleepStudyLogger @ 0x1403D24DC (PopDiagTraceFlushSleepStudyLogger.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     PopDiagTraceZeroHiberFile @ 0x1403DF948 (PopDiagTraceZeroHiberFile.c)
 *     PopDiagTraceZeroHiberFileEnd @ 0x1403DF954 (PopDiagTraceZeroHiberFileEnd.c)
 *     PopDiagTracePreSleepCallbacks @ 0x140530398 (PopDiagTracePreSleepCallbacks.c)
 *     PopDiagTraceSuperfetchNotification @ 0x140530408 (PopDiagTraceSuperfetchNotification.c)
 *     PopResumeServices @ 0x140530424 (PopResumeServices.c)
 *     PopResumeApps @ 0x140530498 (PopResumeApps.c)
 *     PopSuspendServices @ 0x140530508 (PopSuspendServices.c)
 *     PopSuspendApps @ 0x14053055C (PopSuspendApps.c)
 *     PopDiagTraceDevicesWakeEnd @ 0x140534F00 (PopDiagTraceDevicesWakeEnd.c)
 *     PopCoalescingNotify @ 0x14066E158 (PopCoalescingNotify.c)
 *     PopSetSystemAwayMode @ 0x14066EB8C (PopSetSystemAwayMode.c)
 *     PopDiagTraceIoCoalescingOff @ 0x1406717FC (PopDiagTraceIoCoalescingOff.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
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
