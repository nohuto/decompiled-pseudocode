/*
 * XREFs of MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00C2A44
 * Callers:
 *     ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00C29A0 (-DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C00985A0 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z.c)
 */

__int64 __fastcall MonitorDestroyAllSameTypeSimulatedMonitor(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = a3;
  v5 = (int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = this;
  *(_QWORD *)(v7 + 32) = v5;
  if ( !this || (_DWORD)v5 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v11);
  }
  result = (__int64)this[248];
  if ( result )
  {
    v10 = *(_QWORD *)(result + 120);
    if ( v10 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v10, v5, v4);
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  return result;
}
