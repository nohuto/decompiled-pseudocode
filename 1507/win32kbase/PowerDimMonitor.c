/*
 * XREFs of PowerDimMonitor @ 0x1C00A5298
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     IsModerncorePowerDimMonitorSupported_0 @ 0x1C00021A0 (IsModerncorePowerDimMonitorSupported_0.c)
 *     ModerncorePowerDimMonitor_0 @ 0x1C00021A8 (ModerncorePowerDimMonitor_0.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C006A508 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 *     SqmPowerState @ 0x1C0079410 (SqmPowerState.c)
 *     DrvSetMonitorBrightness @ 0x1C0083B0C (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET@@H@Z @ 0x1C008441C (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET@@H@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 PowerDimMonitor()
{
  __int64 result; // rax
  __int64 v1; // r8
  _BYTE v2[80]; // [rsp+20h] [rbp-68h] BYREF

  result = (unsigned int)dword_1C00FFF9C;
  if ( dword_1C00FFFA8 != dword_1C00FFF9C && dword_1C00FFF9C < (unsigned int)dword_1C00FFF94 && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET *)v2, 1);
    LOBYTE(v1) = 1;
    DrvSetMonitorBrightness(*(_QWORD *)(gpDispInfo + 8), (unsigned int)dword_1C00FFF9C, v1);
    if ( (int)IsModerncorePowerDimMonitorSupported_0() >= 0 )
      ModerncorePowerDimMonitor_0();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    ((void (__fastcall *)(_BYTE *))qword_1C0101398)(v2);
    UpdateDisplayState(2, MonitorRequestReasonUnknown, 1);
    result = (unsigned int)dword_1C00FFF9C;
    dword_1C00FFFA8 = dword_1C00FFF9C;
  }
  return result;
}
