/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C008D164
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ @ 0x1C008CE38 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ.c)
 *     MonitorEnableDisableMonitor @ 0x1C00BE2F8 (MonitorEnableDisableMonitor.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0181014 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C008D034 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00BE1D4 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(char *a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // bp
  int v13; // eax
  unsigned int v14; // ebp
  unsigned int v15; // ebx
  char v16; // al
  char v17; // si
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v21; // rax
  _OWORD v22[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( a4 != 8 && a4 != 2 )
    return 3221225485LL;
  memset(v22, 0, sizeof(v22));
  v12 = a1[2];
  *((_QWORD *)&v22[0] + 1) = a5;
  v13 = a1[1] & 1;
  DWORD1(v22[0]) = a4;
  v14 = v22[0] & 0xFFFFFFF0 | a3 & 1 | (2 * (*a1 & 1 | (2 * (v13 | (2 * (v12 & 1))))));
  if ( a4 == 8 )
  {
    v15 = 0;
    a1[1] = a3 == 0;
  }
  else
  {
    if ( a4 != 2 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
      WdLogEvent5_WdAssertion(v21);
    }
    v15 = 0;
    a1[2] = a3 == 0;
  }
  v16 = a1[1];
  if ( v16 || (v17 = 1, a1[2]) )
    v17 = 0;
  LODWORD(v22[0]) = v14 & 0xFFFFFF8F | (16 * (v17 & 1 | (2 * (v16 & 1 | (2 * (a1[2] & 1))))));
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)a1, 14LL, 0xFFFFFFFFLL, 0LL, v22);
  if ( v17 != *a1 )
  {
    LOBYTE(v19) = v17;
    LOBYTE(v15) = v17 == 0;
    v15 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, v18, v19, 2LL, (int)v15);
    *a1 = v17;
  }
  return v15;
}
