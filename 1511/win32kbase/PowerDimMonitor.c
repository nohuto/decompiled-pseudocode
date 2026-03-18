/*
 * XREFs of PowerDimMonitor @ 0x1C00A9BD0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     IsModerncorePowerDimMonitorSupported_0 @ 0x1C00021D0 (IsModerncorePowerDimMonitorSupported_0.c)
 *     ModerncorePowerDimMonitor_0 @ 0x1C00021D8 (ModerncorePowerDimMonitor_0.c)
 *     DrvSetMonitorBrightness @ 0x1C005FD54 (DrvSetMonitorBrightness.c)
 *     SqmPowerState @ 0x1C0063030 (SqmPowerState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET@@H@Z @ 0x1C007EEC0 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET@@H@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C0085264 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 PowerDimMonitor()
{
  __int64 result; // rax
  _BYTE v1[80]; // [rsp+20h] [rbp-68h] BYREF

  result = (unsigned int)dword_1C0104748;
  if ( dword_1C0104754 != dword_1C0104748 && dword_1C0104748 < (unsigned int)dword_1C0104740 && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET *)v1, 1);
    DrvSetMonitorBrightness(*(_QWORD *)(gpDispInfo + 8), (unsigned int)dword_1C0104748, 1);
    if ( (int)IsModerncorePowerDimMonitorSupported_0() >= 0 )
      ModerncorePowerDimMonitor_0();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    ((void (__fastcall *)(_BYTE *))qword_1C01041B8)(v1);
    UpdateDisplayState(2, MonitorRequestReasonUnknown, 1);
    result = (unsigned int)dword_1C0104748;
    dword_1C0104754 = dword_1C0104748;
  }
  return result;
}
