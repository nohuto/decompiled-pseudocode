/*
 * XREFs of MonitorAdapterModeChange @ 0x1C01865D4
 * Callers:
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C0125730 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C00985A0 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z.c)
 */

__int64 __fastcall MonitorAdapterModeChange(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v5 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  result = (__int64)this[248];
  if ( result )
  {
    v9 = *(_QWORD *)(result + 120);
    if ( !v9 )
    {
      v10 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v10 + 24) = this;
      WdLogEvent5_WdError(v10);
      return 3221225485LL;
    }
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v7) + 161) )
    {
      v13 = WdLogNewEntry5_WdDmmEvent(v11);
      *(_QWORD *)(v13 + 24) = this;
      WdLogEvent5_WdDmmEvent(v13);
    }
    else
    {
      v12 = WdLogNewEntry5_WdDmmEvent(v11);
      *(_QWORD *)(v12 + 24) = this;
      WdLogEvent5_WdDmmEvent(v12);
      return (unsigned int)MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v9, 4, 1);
    }
    return v5;
  }
  return result;
}
