/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C00E07EC
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C00E047C (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089354 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(
        PERESOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v6; // si
  __int64 v7; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  char *SpinLock; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v6 = a3;
  v7 = (unsigned int)a2;
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v9[5] = 2LL;
  v9[4] = this;
  v9[3] = v7;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v15);
    }
    if ( !this[266] )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v13);
    }
    SpinLock = (char *)this[266]->SpinLock;
    if ( SpinLock )
      return MONITOR_MGR::_EnableDisableMonitor(SpinLock, v7, v6, 2u, a5, a6);
    v14 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
  }
  return 3221225485LL;
}
