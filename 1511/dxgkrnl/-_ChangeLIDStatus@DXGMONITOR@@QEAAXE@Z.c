/*
 * XREFs of ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C002C614
 * Callers:
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00CC8A8 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_ChangeLIDStatus(DXGMONITOR *this, char a2)
{
  int v2; // edi
  __int64 v5; // rax

  v2 = 0;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v5);
  }
  LOBYTE(v2) = a2 == 0;
  *((_DWORD *)this + 6) ^= (*((_DWORD *)this + 6) ^ (4 * v2)) & 4;
}
