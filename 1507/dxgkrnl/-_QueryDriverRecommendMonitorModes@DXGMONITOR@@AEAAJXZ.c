/*
 * XREFs of ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C00C89C4
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z @ 0x1C00C9E5C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJE@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z @ 0x1C00CA1B4 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000A6EC (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C00CEE54 (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_QueryDriverRecommendMonitorModes(
        D3DDDI_VIDEO_PRESENT_TARGET_ID *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGMONITOR *v14; // rbx
  ADAPTER_DISPLAY *v15; // rbp
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  _DXGKARG_RECOMMENDMONITORMODES v32; // [rsp+20h] [rbp-28h] BYREF
  struct DXGMONITOR *v33; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v20);
  }
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)this);
  if ( !MonitorHandle )
  {
    v21 = WdLogNewEntry5_WdAssertion(v6, v5, v8, v9);
    WdLogEvent5_WdAssertion(v21);
    v26 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
    WdLogEvent5_WdAssertion(v26);
  }
  v33 = 0LL;
  MONITOR_MGR::_GetMonitorFromHandle(MonitorHandle, &v33);
  v14 = v33;
  if ( !v33 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( !*((_QWORD *)v14 + 2) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v14 + 2) + 8LL) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v29);
  }
  v15 = *(ADAPTER_DISPLAY **)(*((_QWORD *)v14 + 2) + 8LL);
  if ( !v15 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v30);
  }
  v32.VideoPresentTargetId = this[7];
  v32.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)MonitorHandle;
  v32.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
  v16 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(v15, &v32);
  v18 = v16;
  if ( v16 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v31[3] = this;
    v31[4] = this[7];
    v31[5] = *((_QWORD *)v15 + 2);
    v31[6] = v18;
    WdLogEvent5_WdError(v31);
  }
  return (unsigned int)v18;
}
