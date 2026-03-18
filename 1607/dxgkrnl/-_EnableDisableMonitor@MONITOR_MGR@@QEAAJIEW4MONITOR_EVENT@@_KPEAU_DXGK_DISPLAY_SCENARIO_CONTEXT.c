/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089354
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0088FA0 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableMonitor @ 0x1C00E07EC (MonitorEnableDisableMonitor.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AEC98 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0089224 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2BAC (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(
        char *a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // r8
  int v11; // eax
  int v12; // ebp
  unsigned int v13; // ebp
  unsigned int v14; // ebx
  char v15; // al
  char v16; // si
  __int64 v17; // r8
  __int64 v19; // rax
  _OWORD v20[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( a4 != 8 && a4 != 2 )
    return 3221225485LL;
  memset(v20, 0, sizeof(v20));
  v11 = a1[1] & 1;
  v12 = 2 * (a1[2] & 1);
  DWORD1(v20[0]) = a4;
  *((_QWORD *)&v20[0] + 1) = a5;
  v13 = v20[0] & 0xFFFFFFF0 | a3 & 1 | (2 * (*a1 & 1 | (2 * (v11 | v12))));
  if ( a2 == -1 )
  {
    if ( a4 == 8 )
    {
      v14 = 0;
      a1[1] = a3 == 0;
    }
    else
    {
      if ( a4 != 2 )
      {
        v19 = WdLogNewEntry5_WdAssertion(a5);
        WdLogEvent5_WdAssertion(v19);
      }
      v14 = 0;
      a1[2] = a3 == 0;
    }
    v15 = a1[1];
    if ( v15 || (v16 = 1, a1[2]) )
      v16 = 0;
    LODWORD(v20[0]) = v13 & 0xFFFFFF8F | (16 * (v16 & 1 | (2 * (v15 & 1 | (2 * (a1[2] & 1))))));
    MONITOR_MGR::_LogMonitorPresentEvent((__int64)a1, 14, 0xFFFFFFFF, 0, v20);
    if ( v16 != *a1 )
    {
      LOBYTE(v14) = v16 == 0;
      LOBYTE(v17) = v16;
      v14 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, 0xFFFFFFFFLL, v17, 2LL, (int)v14, a6);
      *a1 = v16;
    }
    return v14;
  }
  else
  {
    LOBYTE(v10) = a3;
    return MONITOR_MGR::_EnableDisableMonitorInternal(a1, a2, v10, a4, a5, a6);
  }
}
