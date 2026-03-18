/*
 * XREFs of MonitorUnregisterMonitorEventCallback @ 0x1C01B0BBC
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C0032A18 (--1VIDPN_MGR@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorUnregisterMonitorEventCallback(__int64 a1, struct HDXGMONITOREVENT__ *a2)
{
  struct _FAST_MUTEX *v3; // rcx
  __int64 v4; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  v3 = *(struct _FAST_MUTEX **)(a1 + 96);
  if ( !v3 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v4 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  return MONITOR_MGR::_RemoveMonitorEventHandler(v3, a2);
}
