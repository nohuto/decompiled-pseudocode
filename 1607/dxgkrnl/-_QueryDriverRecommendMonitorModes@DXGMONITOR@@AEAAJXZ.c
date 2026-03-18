/*
 * XREFs of ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00F0544
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F1F9C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000A734 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C00F6534 (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_QueryDriverRecommendMonitorModes(D3DDDI_VIDEO_PRESENT_TARGET_ID *this)
{
  __int64 v2; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // rsi
  __int64 v4; // rcx
  struct DXGMONITOR *v5; // rbx
  ADAPTER_DISPLAY *v6; // rbp
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  _DXGKARG_RECOMMENDMONITORMODES v20; // [rsp+20h] [rbp-28h] BYREF
  struct DXGMONITOR *v21; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)this);
  if ( !MonitorHandle )
  {
    v12 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v12);
    v14 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v21 = 0LL;
  MONITOR_MGR::_GetMonitorFromHandle(MonitorHandle, &v21);
  v5 = v21;
  if ( !v21 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_QWORD *)v5 + 2) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v5 + 2) + 8LL) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v17);
  }
  v6 = *(ADAPTER_DISPLAY **)(*((_QWORD *)v5 + 2) + 8LL);
  if ( !v6 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v18);
  }
  v20.VideoPresentTargetId = this[7];
  v20.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)MonitorHandle;
  v20.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
  v7 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(v6, &v20);
  v9 = v7;
  if ( v7 < 0 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v19[3] = this;
    v19[4] = this[7];
    v19[5] = *((_QWORD *)v6 + 2);
    v19[6] = v9;
    WdLogEvent5_WdError(v19);
  }
  return (unsigned int)v9;
}
