/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJXZ @ 0x1C00DF640
 * Callers:
 *     MonitorInitializeAdapterDone @ 0x1C00DE58C (MonitorInitializeAdapterDone.c)
 * Callees:
 *     DmmGetEmergentSimulatedTarget @ 0x1C00A8F88 (DmmGetEmergentSimulatedTarget.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00DEDFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(MONITOR_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rax

  v5 = (_DWORD *)((char *)this + 160);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( (int)DmmGetEmergentSimulatedTarget(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), (_DWORD *)this + 40) < 0 )
  {
    if ( *v5 == -1 )
      goto LABEL_3;
LABEL_5:
    v11 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v11);
    goto LABEL_3;
  }
  if ( *v5 == -1 )
    goto LABEL_5;
LABEL_3:
  MONITOR_MGR::_CreateBootPersistentMonitors(this, v6, v8, v9);
  *((_BYTE *)this + 5) = 1;
  return 0LL;
}
