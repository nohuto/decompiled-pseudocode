/*
 * XREFs of MonitorCleanupGlobal @ 0x1C002C750
 * Callers:
 *     DxgkUnload @ 0x1C0142B60 (DxgkUnload.c)
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C0188F50 (-MonitorCleanupAdditionalTiming@@YAXXZ.c)
 */

__int64 __fastcall MonitorCleanupGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v4; // al
  bool v5; // bl
  __int64 v6; // rcx
  __int64 v7; // rax

  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  IoUnregisterPlugPlayNotification(MONITOR_MGR::_pInterfaceNotificationHandle);
  v4 = KeAcquireSpinLockRaiseToDpc(&MONITOR_MGR::_MonitorPendingEventTraceLock);
  v5 = MONITOR_MGR::_MonitorPendingEventTraceHead.Flink == &MONITOR_MGR::_MonitorPendingEventTraceHead;
  KeReleaseSpinLock(&MONITOR_MGR::_MonitorPendingEventTraceLock, v4);
  if ( !v5 )
  {
    v7 = WdLogNewEntry5_WdError(v6);
    WdLogEvent5_WdError(v7);
  }
  MonitorCleanupAdditionalTiming();
  return 0LL;
}
