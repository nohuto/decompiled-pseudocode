/*
 * XREFs of MonitorCreateSimulatedMonitor @ 0x1C0182064
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C005FC40 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@PEAE@Z @ 0x1C01504D4 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@PEAE@Z.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0151B30 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C0182198 (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     DmmIsTargetForcable @ 0x1C008D4E4 (DmmIsTargetForcable.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01814E4 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 */

__int64 MonitorCreateSimulatedMonitor(PERESOURCE *this, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rbp
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  PERESOURCE v12; // rax
  __int64 v13; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  int IsTargetForcable; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // [rsp+58h] [rbp+10h] BYREF
  __int64 v25; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  v3 = (int)a3;
  v5 = (unsigned int)a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, v25);
  v6[3] = v3;
  v6[4] = v5;
  v6[5] = this;
  if ( !this || (_DWORD)v5 == -1 || (_DWORD)v3 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = this[247];
  if ( !v12 || (SpinLock = (struct _FAST_MUTEX *)v12->SpinLock) == 0LL )
  {
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v24 = 0;
  IsTargetForcable = DmmIsTargetForcable((__int64)this, v5, &v24, v3);
  v21 = IsTargetForcable;
  if ( IsTargetForcable < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v22 + 24) = v5;
    *(_QWORD *)(v22 + 32) = v21;
    WdLogEvent5_WdError(v22);
    return (unsigned int)v21;
  }
  if ( v24 )
  {
    v25 = 0LL;
    LODWORD(v21) = MONITOR_MGR::_HandleCreateSimulatedMonitor(
                     SpinLock,
                     (unsigned int)v5,
                     (unsigned int)v3,
                     0LL,
                     (struct DXGMONITOR *)va);
    MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 1073741825LL, (unsigned int)v5, (unsigned int)v21, 0LL);
    return (unsigned int)v21;
  }
  v23 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
  *(_QWORD *)(v23 + 24) = v5;
  WdLogEvent5_WdWarning(v23);
  return 3221225659LL;
}
