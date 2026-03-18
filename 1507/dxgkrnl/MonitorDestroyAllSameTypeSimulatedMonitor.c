/*
 * XREFs of MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00AEE74
 * Callers:
 *     ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00AEDD0 (-DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C008D2C8 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z.c)
 */

__int64 __fastcall MonitorDestroyAllSameTypeSimulatedMonitor(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = a3;
  v5 = (int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = this;
  *(_QWORD *)(v7 + 32) = v5;
  if ( !this || (_DWORD)v5 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v14);
  }
  result = (__int64)this[247];
  if ( result )
  {
    v13 = *(_QWORD *)(result + 96);
    if ( v13 )
    {
      LOBYTE(v10) = v4;
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v13, (unsigned int)v5, v10, v11);
    }
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  return result;
}
