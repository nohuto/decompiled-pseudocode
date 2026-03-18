/*
 * XREFs of MonitorReleaseMonitorPendingEvent @ 0x1C00A7750
 * Callers:
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00A7628 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C0126EB8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z @ 0x1C013F898 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@I@Z.c)
 * Callees:
 *     ?_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1C000942C (-_ReleaseMonitorPendingEvent@MONITOR_MGR@@SAXPEAU_MONITOR_PENDING_EVENT@@@Z.c)
 */

__int64 __fastcall MonitorReleaseMonitorPendingEvent(
        struct _MONITOR_PENDING_EVENT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::_ReleaseMonitorPendingEvent(a1);
  return 0LL;
}
