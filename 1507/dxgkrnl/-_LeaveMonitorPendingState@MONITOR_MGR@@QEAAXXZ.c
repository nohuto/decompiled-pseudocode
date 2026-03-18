/*
 * XREFs of ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C002CCE8
 * Callers:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z @ 0x1C00CB510 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01813A0 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall MONITOR_MGR::_LeaveMonitorPendingState(MONITOR_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 1) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 96);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 20))-- == 1 )
      KeSetEvent((PRKEVENT)(*((_QWORD *)this + 96) + 24LL), 0, 0);
  }
}
