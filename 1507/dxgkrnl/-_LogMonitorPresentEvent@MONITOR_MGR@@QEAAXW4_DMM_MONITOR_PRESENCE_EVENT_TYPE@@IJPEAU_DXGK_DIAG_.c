/*
 * XREFs of ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C008D164 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z @ 0x1C008D2C8 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@E@Z.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00BE1D4 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ @ 0x1C00CADB4 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJXZ.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C00D6350 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C00D7524 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C00DDE60 (MonitorCreatePhysicalMonitor.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C0182064 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01822FC (MonitorDestroySimulatedMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C0182980 (MonitorRemovePhysicalMonitor.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0185310 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall MONITOR_MGR::_LogMonitorPresentEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _OWORD *a5)
{
  int v5; // r12d
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int128 v12; // xmm1
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-61h]
  _OWORD v16[6]; // [rsp+30h] [rbp-51h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (int)a2 > 1073741826 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = *(_DWORD *)(a1 + 280);
  v10 = v9 % 0x14;
  v11 = 3 * v10;
  *(_DWORD *)(a1 + 8 * v11 + 296) = v9;
  *(_DWORD *)(a1 + 24 * v10 + 288) = v7;
  *(_DWORD *)(a1 + 8 * v11 + 292) = v6;
  *(_DWORD *)(a1 + 8 * v11 + 300) = v5;
  v15 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 8 * v11 + 304) = v15 * KeQueryTimeIncrement();
  ++*(_DWORD *)(a1 + 280);
  memset(v16, 0, sizeof(v16));
  v16[0] = 0x6000000008uLL;
  memset(&v16[1], 0, 28);
  *(_QWORD *)&v16[3] = __PAIR64__(v6, v7);
  DWORD2(v16[3]) = v5;
  if ( a5 )
  {
    v12 = a5[1];
    v16[4] = *a5;
    v16[5] = v12;
  }
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v16);
}
