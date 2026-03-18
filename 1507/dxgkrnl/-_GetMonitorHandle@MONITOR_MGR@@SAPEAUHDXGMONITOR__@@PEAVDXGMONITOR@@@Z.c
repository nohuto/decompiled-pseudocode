/*
 * XREFs of ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000A6EC
 * Callers:
 *     MonitorGetMonitorHandle @ 0x1C00AF52C (MonitorGetMonitorHandle.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00C89C4 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct HDXGMONITOR__ *__fastcall MONITOR_MGR::_GetMonitorHandle(struct DXGMONITOR *a1)
{
  __int64 v3; // rax

  if ( !a1 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v3);
  }
  return a1;
}
