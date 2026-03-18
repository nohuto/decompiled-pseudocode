/*
 * XREFs of MonitorAdapterPowerChange @ 0x1C00CB10C
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00C9E50 (DpiFdoSetAdapterPowerState.c)
 *     DpiPowerArbiterThread @ 0x1C00E8F50 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorAdapterPowerChange(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v9);
  }
  result = (__int64)this[248];
  if ( result )
  {
    v7 = *(_QWORD *)(result + 120);
    if ( v7 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v7, 3, 1);
    v8 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v8 + 24) = this;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  return result;
}
