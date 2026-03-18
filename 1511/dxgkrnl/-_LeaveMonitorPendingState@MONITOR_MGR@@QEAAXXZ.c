/*
 * XREFs of ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C002C6F8
 * Callers:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00DF420 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0185894 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall MONITOR_MGR::_LeaveMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = *((_QWORD *)this + 96);
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 20))-- == 1 )
      KeSetEvent((PRKEVENT)(*((_QWORD *)this + 96) + 24LL), 0, 0);
  }
}
