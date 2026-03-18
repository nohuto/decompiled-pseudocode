/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C00D7524
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C00D6720 (DpiPdoHandleQueryId.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C002CCB8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00C9AF0 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00C9B50 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0185B84 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGMONITOR *v20; // rdi
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // ebx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v30; // r8
  __int64 v31; // r9
  DXGMONITOR *v32; // rdi
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  _OWORD v43[2]; // [rsp+30h] [rbp-48h] BYREF
  DXGMONITOR *v44; // [rsp+80h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !this[247] )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  SpinLock = (struct _FAST_MUTEX *)this[247]->SpinLock;
  if ( !SpinLock )
  {
    v37 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v37 + 24) = this;
    WdLogEvent5_WdError(v37);
    return 3221225485LL;
  }
  v44 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v5, 0LL, (ULONG **)&v44);
  v20 = v44;
  v21 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v44 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v39);
    }
    if ( v21 == -1073741275 )
      goto LABEL_27;
    v40 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    WdLogEvent5_WdAssertion(v40);
  }
  else
  {
    if ( !v44 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v38);
    }
    if ( *((_DWORD *)v20 + 94) == 1 )
    {
      AttachedPhysicalMonitor = v20;
      v20 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v20, v16, v18, v19);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 5) != a3 )
  {
LABEL_27:
    v42 = WdLogNewEntry5_WdDmmEvent(v17);
    *(_QWORD *)(v42 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v42);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
  v25 = DXGMONITOR::_OnMonitorDeviceNodeReady(AttachedPhysicalMonitor, v22, v23, v24);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240));
  KeLeaveCriticalRegion();
  if ( v25 >= 0 && v20 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v20 + 240), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
    DXGMONITOR::_CopyMonitorInformation(v20, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v20 + 240));
    KeLeaveCriticalRegion();
  }
  v44 = 0LL;
  memset(v43, 0, sizeof(v43));
  LOBYTE(v26) = 1;
  v29 = MONITOR_MGR::_GetMonitorInstance(SpinLock, (unsigned int)v5, v26, (ULONG **)&v44);
  if ( v29 >= 0 )
  {
    v32 = v44;
    if ( !v44 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v28, v27, v30, v31);
      WdLogEvent5_WdAssertion(v41);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v32 + 240), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v32, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v43, v33, v34);
    ExReleaseResourceLite((PERESOURCE)((char *)v32 + 240));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 7LL, (unsigned int)v5, (unsigned int)v29, v43);
  return (unsigned int)v29;
}
