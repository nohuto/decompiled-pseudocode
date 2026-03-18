/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00983AC
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ @ 0x1C009806C (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXXZ.c)
 *     MonitorEnableDisableMonitor @ 0x1C00CCA9C (MonitorEnableDisableMonitor.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C0185508 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C009827C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z @ 0x1C00CC8A8 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(char *a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 v8; // rcx
  char v9; // bp
  int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // ebx
  char v13; // al
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v18; // rax
  _OWORD v19[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( a4 != 8 && a4 != 2 )
    return 3221225485LL;
  memset(v19, 0, sizeof(v19));
  v9 = a1[2];
  *((_QWORD *)&v19[0] + 1) = a5;
  v10 = a1[1] & 1;
  DWORD1(v19[0]) = a4;
  v11 = v19[0] & 0xFFFFFFF0 | a3 & 1 | (2 * (*a1 & 1 | (2 * (v10 | (2 * (v9 & 1))))));
  if ( a4 == 8 )
  {
    v12 = 0;
    a1[1] = a3 == 0;
  }
  else
  {
    if ( a4 != 2 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v18);
    }
    v12 = 0;
    a1[2] = a3 == 0;
  }
  v13 = a1[1];
  if ( v13 || (v14 = 1, a1[2]) )
    v14 = 0;
  LODWORD(v19[0]) = v11 & 0xFFFFFF8F | (16 * (v14 & 1 | (2 * (v13 & 1 | (2 * (a1[2] & 1))))));
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)a1, 14, 0xFFFFFFFF, 0, v19);
  if ( v14 != *a1 )
  {
    LOBYTE(v16) = v14;
    LOBYTE(v12) = v14 == 0;
    v12 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, v15, v16, 2LL, (int)v12);
    *a1 = v14;
  }
  return v12;
}
