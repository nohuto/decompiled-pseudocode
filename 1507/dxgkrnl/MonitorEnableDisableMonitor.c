/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C00BE2F8
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C008D164 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // di
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char *SpinLock; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v5 = a3;
  v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v7[5] = 2LL;
  v7[4] = this;
  v7[3] = 0xFFFFFFFFLL;
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      WdLogEvent5_WdAssertion(v16);
    }
    if ( !this[247] )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      WdLogEvent5_WdAssertion(v14);
    }
    SpinLock = (char *)this[247]->SpinLock;
    if ( SpinLock )
      return MONITOR_MGR::_EnableDisableMonitor(SpinLock, v8, v5, 2, a5);
    v15 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
  }
  return 3221225485LL;
}
