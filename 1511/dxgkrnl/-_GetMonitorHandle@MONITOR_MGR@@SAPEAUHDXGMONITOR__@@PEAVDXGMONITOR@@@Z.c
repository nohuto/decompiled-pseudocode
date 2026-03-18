/*
 * XREFs of ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000CAFC
 * Callers:
 *     MonitorGetMonitorHandle @ 0x1C00C2E0C (MonitorGetMonitorHandle.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00DFF94 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct HDXGMONITOR__ *__fastcall MONITOR_MGR::_GetMonitorHandle(struct DXGMONITOR *a1)
{
  __int64 v3; // rax

  if ( !a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v3);
  }
  return a1;
}
