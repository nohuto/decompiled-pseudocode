/*
 * XREFs of MonitorNotifyDeviceNodeReady @ 0x1C00EE40C
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C00EC870 (DpiPdoHandleQueryId.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ @ 0x1C0034EF8 (-_GetAttachedPhysicalMonitor@DXGMONITOR@@QEAAPEAV1@XZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0089224 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00F1C1C (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F1C7C (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C01B3E20 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  struct DXGMONITOR *AttachedPhysicalMonitor; // rsi
  int MonitorInstance; // eax
  __int64 v16; // rcx
  DXGMONITOR *v17; // rdi
  int v18; // ebx
  int v19; // ebx
  __int64 v20; // rcx
  int v21; // esi
  struct DXGMONITOR *v22; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  DXGMONITOR *v31; // [rsp+30h] [rbp-59h] BYREF
  struct DXGMONITOR *v32; // [rsp+38h] [rbp-51h] BYREF
  _OWORD v33[2]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v34[8]; // [rsp+60h] [rbp-29h] BYREF

  v3 = a2;
  memset(v34, 0, sizeof(v34));
  EtwActivityIdControl(3u, (LPGUID)&v34[1]);
  v34[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v34[3]) = 8;
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = v3;
  *(_QWORD *)(v10 + 32) = this;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !this[266] )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v12);
  }
  SpinLock = (struct _FAST_MUTEX *)this[266]->SpinLock;
  if ( !SpinLock )
  {
    v25 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v25 + 24) = this;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  v31 = 0LL;
  AttachedPhysicalMonitor = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(SpinLock, v3, 0, (ULONG **)&v31);
  v17 = v31;
  v18 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( v31 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v27);
    }
    if ( v18 == -1073741275 )
      goto LABEL_27;
    v28 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v28);
  }
  else
  {
    if ( !v31 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( *((_DWORD *)v17 + 94) == 1 )
    {
      AttachedPhysicalMonitor = v17;
      v17 = 0LL;
    }
    else
    {
      AttachedPhysicalMonitor = DXGMONITOR::_GetAttachedPhysicalMonitor(v17);
    }
  }
  if ( !AttachedPhysicalMonitor || *((_QWORD *)AttachedPhysicalMonitor + 5) != a3 )
  {
LABEL_27:
    v30 = WdLogNewEntry5_WdDmmEvent(v16);
    *(_QWORD *)(v30 + 24) = v3;
    WdLogEvent5_WdDmmEvent(v30);
    return 3221226021LL;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
  v19 = DXGMONITOR::_OnMonitorDeviceNodeReady(AttachedPhysicalMonitor, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v34);
  ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240));
  KeLeaveCriticalRegion();
  if ( v19 >= 0 && v17 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v17 + 240), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240), 1u);
    DXGMONITOR::_CopyMonitorInformation(v17, AttachedPhysicalMonitor);
    ExReleaseResourceLite((PERESOURCE)((char *)AttachedPhysicalMonitor + 240));
    KeLeaveCriticalRegion();
    ExReleaseResourceLite((PERESOURCE)((char *)v17 + 240));
    KeLeaveCriticalRegion();
  }
  v32 = 0LL;
  memset(v33, 0, sizeof(v33));
  v21 = MONITOR_MGR::_GetMonitorInstance(SpinLock, v3, 1, (ULONG **)&v32);
  if ( v21 >= 0 )
  {
    v22 = v32;
    if ( !v32 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v20);
      WdLogEvent5_WdAssertion(v29);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v22 + 240), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v22, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v33);
    ExReleaseResourceLite((PERESOURCE)((char *)v22 + 240));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 7, v3, v21, v33);
  return (unsigned int)v21;
}
