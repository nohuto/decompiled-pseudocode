/*
 * XREFs of MonitorIsUsingSimulatedMonitor @ 0x1C00C5E88
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C0082D98 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C00C5DC0 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C00894E4 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, char *a2, __int64 a3, __int64 a4)
{
  MONITOR_MGR *v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( this && a2 )
  {
    *a2 = 0;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v10);
    }
    v7 = *((_QWORD *)this + 266);
    if ( v7 )
    {
      v6 = *(MONITOR_MGR **)(v7 + 96);
      if ( v6 )
      {
        *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v6);
        return 0LL;
      }
    }
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
  }
  return 3221225485LL;
}
