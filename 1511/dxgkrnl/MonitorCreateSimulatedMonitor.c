/*
 * XREFs of MonitorCreateSimulatedMonitor @ 0x1C01866A4
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00ABB60 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAE@Z @ 0x1C01537E8 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAE@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0155D90 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C01867E0 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     DmmIsTargetForcable @ 0x1C00987D8 (DmmIsTargetForcable.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01859D8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 */

__int64 MonitorCreateSimulatedMonitor(PERESOURCE *this, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  PERESOURCE v9; // rax
  __int64 v10; // rax
  struct _FAST_MUTEX *OwnerTable; // r14
  int IsTargetForcable; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  bool v21; // [rsp+58h] [rbp+10h] BYREF
  __int64 v22; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  __int64 v24; // [rsp+70h] [rbp+28h]
  __int64 v25; // [rsp+78h] [rbp+30h]
  va_list va1; // [rsp+80h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v3 = (int)a3;
  v5 = (unsigned int)a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, v22);
  v6[3] = v3;
  v6[4] = v5;
  v6[5] = this;
  if ( !this || (_DWORD)v5 == -1 || (_DWORD)v3 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = this[248];
  if ( !v9 || (OwnerTable = (struct _FAST_MUTEX *)v9[1].OwnerTable) == 0LL )
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( (_BYTE)v25 )
    goto LABEL_16;
  v21 = 0;
  IsTargetForcable = DmmIsTargetForcable((__int64)this, v5, &v21, v3);
  v18 = IsTargetForcable;
  if ( IsTargetForcable < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v19 + 24) = v5;
    *(_QWORD *)(v19 + 32) = v18;
    WdLogEvent5_WdError(v19);
    return (unsigned int)v18;
  }
  if ( v21 )
  {
LABEL_16:
    v22 = 0LL;
    LODWORD(v18) = MONITOR_MGR::_HandleCreateSimulatedMonitor(OwnerTable, v5, v3, 0LL, (struct DXGMONITOR *)va);
    MONITOR_MGR::_LogMonitorPresentEvent((__int64)OwnerTable, 1073741825, v5, v18, 0LL);
    return (unsigned int)v18;
  }
  v20 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
  *(_QWORD *)(v20 + 24) = v5;
  WdLogEvent5_WdWarning(v20);
  return 3221225659LL;
}
