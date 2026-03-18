/*
 * XREFs of ?_UpdateLinkInfo@DXGMONITOR@@AEAAJE@Z @ 0x1C00F0720
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F21F8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F2610 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ?DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z @ 0x1C00F641C (-DdiUpdateMonitorLinkInfo@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_UPDATEMONITORLINKINFO@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(D3DDDI_VIDEO_PRESENT_TARGET_ID *this, char a2)
{
  ADAPTER_DISPLAY *v4; // rsi
  D3DDDI_VIDEO_PRESENT_TARGET_ID v5; // eax
  int updated; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  DXGK_MONITORLINKINFO_USAGEHINTS v13; // ecx
  _DXGKARG_UPDATEMONITORLINKINFO v14; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v4 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 2) + 8LL);
  if ( !v4 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v12);
  }
  v5 = this[7];
  v14.MonitorLinkInfo.Capabilities.Value = 0;
  v14.VideoPresentTargetId = v5;
  v14.MonitorLinkInfo.UsageHints.Value = a2 & 1;
  updated = ADAPTER_DISPLAY::DdiUpdateMonitorLinkInfo(v4, &v14);
  v8 = updated;
  if ( updated >= 0 )
  {
    v13.0 = (struct _DXGK_MONITORLINKINFO_USAGEHINTS::$93BFB232C2354556C10F40D8A24AA81F)v14.MonitorLinkInfo.UsageHints;
    this[6] |= 0x400u;
    this[102] = v13.Value;
    this[103] = v14.MonitorLinkInfo.Capabilities.Value;
  }
  else
  {
    this[6] &= ~0x400u;
    v9 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v9[3] = this;
    v9[4] = this[7];
    v9[5] = *((_QWORD *)v4 + 2);
    v9[6] = v8;
    WdLogEvent5_WdError(v9);
  }
  return (unsigned int)v8;
}
