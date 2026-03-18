/*
 * XREFs of MonitorCreateMonitorManager @ 0x1C00F5160
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00F66C0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C000F9B0 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??_GMONITOR_MGR@@QEAAPEAXI@Z @ 0x1C0034E24 (--_GMONITOR_MGR@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x1C00F3A98 (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  MONITOR_MGR *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  MONITOR_MGR *v12; // rbx
  __int64 result; // rax
  unsigned int v14; // esi
  __int64 v15; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( !a1 || !a2 )
  {
    v15 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v15 + 24) = a1;
    *(_QWORD *)(v15 + 32) = a2;
    goto LABEL_12;
  }
  *a2 = 0LL;
  v7 = (MONITOR_MGR *)operator new(0x308uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v7 )
    v12 = MONITOR_MGR::MONITOR_MGR(v7, a1);
  else
    v12 = 0LL;
  if ( !v12 )
  {
    v15 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)a1 + 2);
LABEL_12:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  result = MONITOR_MGR::_InitializeMonitorManager(v12, v8, v10, v11);
  v14 = result;
  if ( (int)result < 0 )
  {
    MONITOR_MGR::`scalar deleting destructor'(v12);
    return v14;
  }
  else
  {
    *a2 = v12;
  }
  return result;
}
