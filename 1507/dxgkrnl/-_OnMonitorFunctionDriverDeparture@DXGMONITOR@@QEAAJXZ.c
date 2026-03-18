/*
 * XREFs of ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJXZ @ 0x1C01852A0
 * Callers:
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0185310 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverDeparture(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 24) & 1) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v11);
  }
  return 0LL;
}
