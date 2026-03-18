/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C00F2140
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0089560 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F2610 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F37CC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF18C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AF644 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C00FAA64 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // r15
  int v6; // ebp
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  int TtmDevice; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rax

  if ( *((_BYTE *)this + 524) )
  {
    v17 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = -1073741637LL;
    return 3221225659LL;
  }
  else
  {
    v5 = (char *)this + 512;
    if ( *((_QWORD *)this + 64) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
      return 0LL;
    }
    v6 = (*((unsigned __int8 *)this + 24) >> 1) & 1;
    v7 = *((_DWORD *)this + 94) != 1 ? 2 : 0;
    v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL);
    v9 = *(_QWORD *)(v8 + 16);
    v10 = *(_QWORD *)(v9 + 192);
    Global = DXGGLOBAL::GetGlobal(v8);
    TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                  *((_QWORD *)Global + 69),
                  v12,
                  v10,
                  v9,
                  *((_DWORD *)this + 7),
                  v6 | (unsigned int)v7,
                  v5);
    v15 = TtmDevice;
    if ( TtmDevice >= 0 )
      return 0LL;
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v18[3] = this;
    v18[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 16LL);
    v18[5] = v15;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v15;
  }
}
