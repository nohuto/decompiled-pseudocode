/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C00DDE60
 * Callers:
 *     DpiPdoAddPdo @ 0x1C00C75F0 (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00C9AF0 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z @ 0x1C00CB5D8 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EE@Z.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        PERESOURCE *this,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5)
{
  char v5; // r14
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PERESOURCE v14; // rbp
  MONITOR_MGR *SpinLock; // rbp
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int MonitorInstance; // r14d
  struct DXGMONITOR *v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _OWORD v29[2]; // [rsp+30h] [rbp-38h] BYREF
  struct DXGMONITOR *v30; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  v6 = (unsigned int)a2;
  v9 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v9 + 24) = v6;
  *(_QWORD *)(v9 + 32) = this;
  if ( !this || !a3 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v27);
  }
  v14 = this[247];
  if ( !v14 || (SpinLock = (MONITOR_MGR *)v14->SpinLock) == 0LL )
  {
    v26 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  LOBYTE(v13) = v5;
  MONITOR_MGR::_HandleCreatePhysicalMonitor(SpinLock, (unsigned int)v6, a3, v13, a5);
  v30 = 0LL;
  memset(v29, 0, sizeof(v29));
  LOBYTE(v16) = 1;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(
                      (struct _FAST_MUTEX *)SpinLock,
                      (unsigned int)v6,
                      v16,
                      (ULONG **)&v30);
  if ( MonitorInstance >= 0 )
  {
    v22 = v30;
    if ( !v30 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v28);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v22 + 240), 1u);
    DXGMONITOR::_GetMonitorDiagInfo(v22, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v29, v23, v24);
    ExReleaseResourceLite((PERESOURCE)((char *)v22 + 240));
    KeLeaveCriticalRegion();
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 1LL, (unsigned int)v6, (unsigned int)MonitorInstance, v29);
  return (unsigned int)MonitorInstance;
}
