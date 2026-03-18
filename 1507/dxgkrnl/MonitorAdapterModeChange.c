/*
 * XREFs of MonitorAdapterModeChange @ 0x1C0181F94
 * Callers:
 *     ?CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATION@@QEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@EPEAE@Z @ 0x1C011FC00 (-CommitVidPn@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@QEAUD3DKMDT_HVIDPN__@@IEPEBVDXGADAPTERALLOCATI.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C008D2C8 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z.c)
 */

__int64 __fastcall MonitorAdapterModeChange(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax

  v5 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v11);
  }
  result = (__int64)this[247];
  if ( result )
  {
    v12 = *(_QWORD *)(result + 96);
    if ( !v12 )
    {
      v13 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v13 + 24) = this;
      WdLogEvent5_WdError(v13);
      return 3221225485LL;
    }
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v8, v7, v9, v10) + 125) )
    {
      v18 = WdLogNewEntry5_WdDmmEvent(v14);
      *(_QWORD *)(v18 + 24) = this;
      WdLogEvent5_WdDmmEvent(v18);
    }
    else
    {
      v15 = WdLogNewEntry5_WdDmmEvent(v14);
      *(_QWORD *)(v15 + 24) = this;
      WdLogEvent5_WdDmmEvent(v15);
      LOBYTE(v16) = 1;
      return (unsigned int)MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v12, 4LL, v16, v17);
    }
    return v5;
  }
  return result;
}
