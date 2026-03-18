/*
 * XREFs of ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3A30
 * Callers:
 *     MonitorInitializeAdapterDone @ 0x1C00F62CC (MonitorInitializeAdapterDone.c)
 * Callees:
 *     DmmGetEmergentSimulatedTarget @ 0x1C00C0E48 (DmmGetEmergentSimulatedTarget.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F3120 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_OnAdapterInitializationDone(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rax

  v6 = (_DWORD *)((char *)this + 160);
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( (int)DmmGetEmergentSimulatedTarget(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), (_DWORD *)this + 40) < 0 )
  {
    if ( *v6 == -1 )
      goto LABEL_3;
LABEL_5:
    v11 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v11);
    goto LABEL_3;
  }
  if ( *v6 == -1 )
    goto LABEL_5;
LABEL_3:
  MONITOR_MGR::_CreateBootPersistentMonitors(this, a2, v8, v9);
  result = 0LL;
  *((_BYTE *)this + 5) = 1;
  return result;
}
