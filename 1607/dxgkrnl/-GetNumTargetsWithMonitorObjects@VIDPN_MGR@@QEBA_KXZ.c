/*
 * XREFs of ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1C0033944
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C01A1748 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@QEAXIQEAPEAV.c)
 * Callees:
 *     MonitorGetNumConnectedMonitor @ 0x1C00C5E10 (MonitorGetNumConnectedMonitor.c)
 */

unsigned __int64 __fastcall VIDPN_MGR::GetNumTargetsWithMonitorObjects(VIDPN_MGR *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( !*((_QWORD *)this + 1) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( (int)MonitorGetNumConnectedMonitor(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL)) < 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v4);
  }
  return 1LL;
}
