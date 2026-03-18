/*
 * XREFs of ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C002CC04
 * Callers:
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00BE1D4 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_ChangeLIDStatus(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  char v5; // si
  __int64 v7; // rax

  v4 = 0;
  v5 = a2;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  LOBYTE(v4) = v5 == 0;
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (4 * v4)) & 4;
}
