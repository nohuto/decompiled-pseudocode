/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C00E372C
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C00CEBE0 (DpiPdoHandleQueryId.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C002C6C8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0097F64 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E1588 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ @ 0x1C00E15E8 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJXZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C018A394 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _FAST_MUTEX *OwnerTable; // r14
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v13; // rcx
  DXGMONITOR *v14; // rdi
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  __int64 v20; // rcx
  int v21; // esi
  DXGMONITOR *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _OWORD v33[2]; // [rsp+30h] [rbp-48h] BYREF
  DXGMONITOR *v34; // [rsp+80h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !this[248] )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  OwnerTable = (struct _FAST_MUTEX *)this[248][1].OwnerTable;
  if ( !OwnerTable )
  {
    v27 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    return 3221225485LL;
  }
  v34 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(OwnerTable, v5, 0, (ULONG **)&v34);
  v14 = v34;
  v15 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v34 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( v15 == -1073741275 )
      goto LABEL_27;
    v30 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v30);
  }
  else
  {
    if ( !v34 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v28);
    }
    if ( *((_DWORD *)v14 + 94) == 1 )
    {
      AttachedPhysicalMonitor = v14;
      v14 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v14);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 5) != a3 )
  {
LABEL_27:
    v32 = WdLogNewEntry5_WdDmmEvent(v13);
    *(_QWORD *)(v32 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v32);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
  v19 = DXGMONITOR::_OnMonitorDeviceNodeReady(AttachedPhysicalMonitor, v16, v17, v18);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240));
  KeLeaveCriticalRegion();
  if ( v19 >= 0 && v14 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v14 + 240), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
    DXGMONITOR::_CopyMonitorInformation(v14, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v14 + 240));
    KeLeaveCriticalRegion();
  }
  v34 = 0LL;
  memset(v33, 0, sizeof(v33));
  v21 = MONITOR_MGR::_GetMonitorInstance(OwnerTable, v5, 1, (ULONG **)&v34);
  if ( v21 >= 0 )
  {
    v22 = v34;
    if ( !v34 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v31);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v22 + 240), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v22, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v33, v23, v24);
    ExReleaseResourceLite((PERESOURCE)((char *)v22 + 240));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)OwnerTable, 7, v5, v21, v33);
  return (unsigned int)v21;
}
