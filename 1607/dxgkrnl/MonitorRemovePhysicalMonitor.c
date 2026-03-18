/*
 * XREFs of MonitorRemovePhysicalMonitor @ 0x1C01B09A4
 * Callers:
 *     DpiPdoRemovePdo @ 0x1C019C49C (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0089224 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF4DC (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRemovePhysicalMonitor(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rbp
  unsigned int v15; // ebx

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( a3 )
  {
    *((_DWORD *)a3 + 9) = v5;
    v8 = *(_QWORD *)((char *)this + 268);
    *((_DWORD *)a3 + 10) = 0;
    *((_QWORD *)a3 + 6) = v8;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 266);
  if ( !v11 || (v14 = *(_QWORD *)(v11 + 96)) == 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v15 = MONITOR_MGR::_HandleRemovePhysicalMonitor(*(struct _FAST_MUTEX **)(v11 + 96), v5, a3);
  MONITOR_MGR::_LogMonitorPresentEvent(v14, 2, v5, v15, 0LL);
  return v15;
}
