/*
 * XREFs of ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00DFF94
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00E18FC (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00E1C78 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000CAFC (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C00DB050 (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_QueryDriverRecommendMonitorModes(D3DDDI_VIDEO_PRESENT_TARGET_ID *this)
{
  __int64 v2; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // rsi
  __int64 v4; // rcx
  __int64 v5; // r8
  struct DXGMONITOR *v6; // rbx
  ADAPTER_DISPLAY *v7; // rbp
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  _DXGKARG_RECOMMENDMONITORMODES v21; // [rsp+20h] [rbp-28h] BYREF
  struct DXGMONITOR *v22; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)this);
  if ( !MonitorHandle )
  {
    v13 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v13);
    v15 = WdLogNewEntry5_WdAssertion(v14);
    WdLogEvent5_WdAssertion(v15);
  }
  v22 = 0LL;
  MONITOR_MGR::_GetMonitorFromHandle(MonitorHandle, &v22);
  v6 = v22;
  if ( !v22 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !*((_QWORD *)v6 + 2) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v6 + 2) + 8LL) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v18);
  }
  v7 = *(ADAPTER_DISPLAY **)(*((_QWORD *)v6 + 2) + 8LL);
  if ( !v7 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v19);
  }
  v21.VideoPresentTargetId = this[7];
  v21.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)MonitorHandle;
  v21.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
  v8 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(v7, &v21, v5);
  v10 = v8;
  if ( v8 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    v20[3] = this;
    v20[4] = this[7];
    v20[5] = *((_QWORD *)v7 + 2);
    v20[6] = v10;
    WdLogEvent5_WdError(v20);
  }
  return (unsigned int)v10;
}
