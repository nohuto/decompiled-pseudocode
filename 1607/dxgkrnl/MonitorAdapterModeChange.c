/*
 * XREFs of MonitorAdapterModeChange @ 0x1C00E1F44
 * Callers:
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E1B9C (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089560 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall MonitorAdapterModeChange(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  v6 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v13);
  }
  result = (__int64)this[266];
  if ( result )
  {
    v9 = *(_QWORD *)(result + 96);
    if ( v9 )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v7) + 125) )
      {
        v14 = WdLogNewEntry5_WdDmmEvent(v10);
        *(_QWORD *)(v14 + 24) = this;
        WdLogEvent5_WdDmmEvent(v14);
      }
      else
      {
        v11 = WdLogNewEntry5_WdDmmEvent(v10);
        *(_QWORD *)(v11 + 24) = this;
        WdLogEvent5_WdDmmEvent(v11);
        return (unsigned int)MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v9, 4, 1, a2);
      }
      return v6;
    }
    v12 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  return result;
}
