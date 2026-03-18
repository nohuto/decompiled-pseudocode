/*
 * XREFs of ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00983AC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C00985A0 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00CC8A8 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00DEDFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00E372C (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C00E38F0 (MonitorCreatePhysicalMonitor.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00E3E40 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01866A4 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C018694C (MonitorDestroySimulatedMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C0187030 (MonitorRemovePhysicalMonitor.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0189B20 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall MONITOR_MGR::_LogMonitorPresentEvent(__int64 a1, int a2, unsigned int a3, int a4, _OWORD *a5)
{
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int128 v12; // xmm1
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-61h]
  _OWORD v16[6]; // [rsp+30h] [rbp-51h] BYREF

  if ( a2 > 1073741826 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = *(_DWORD *)(a1 + 280);
  v10 = v9 % 0x14;
  v11 = 3 * v10;
  *(_DWORD *)(a1 + 8 * v11 + 296) = v9;
  *(_DWORD *)(a1 + 24 * v10 + 288) = a2;
  *(_DWORD *)(a1 + 8 * v11 + 292) = a3;
  *(_DWORD *)(a1 + 8 * v11 + 300) = a4;
  v15 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 8 * v11 + 304) = v15 * KeQueryTimeIncrement();
  ++*(_DWORD *)(a1 + 280);
  memset(v16, 0, sizeof(v16));
  v16[0] = 0x6000000008uLL;
  memset(&v16[1], 0, 28);
  *(_QWORD *)&v16[3] = __PAIR64__(a3, a2);
  DWORD2(v16[3]) = a4;
  if ( a5 )
  {
    v12 = a5[1];
    v16[4] = *a5;
    v16[5] = v12;
  }
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16);
}
