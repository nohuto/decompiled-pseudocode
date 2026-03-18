/*
 * XREFs of ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJXZ @ 0x1C0189AB4
 * Callers:
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0189B20 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverDeparture(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v8);
  }
  return 0LL;
}
