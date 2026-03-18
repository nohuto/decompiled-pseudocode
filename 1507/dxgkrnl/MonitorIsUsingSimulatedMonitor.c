/*
 * XREFs of MonitorIsUsingSimulatedMonitor @ 0x1C00CAA18
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE4@Z @ 0x1C00CC7A0 (-CommitVidPn@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@AEBU_DMM.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C00CAD38 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  MONITOR_MGR *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( this && a2 )
  {
    *a2 = 0;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v13);
    }
    v10 = *((_QWORD *)this + 247);
    if ( v10 )
    {
      v7 = *(MONITOR_MGR **)(v10 + 96);
      if ( v7 )
      {
        *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v7);
        return 0LL;
      }
    }
    v12 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
  }
  return 3221225485LL;
}
