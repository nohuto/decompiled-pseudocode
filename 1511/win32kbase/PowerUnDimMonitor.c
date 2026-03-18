/*
 * XREFs of PowerUnDimMonitor @ 0x1C000AB34
 * Callers:
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 * Callees:
 *     IsModerncorePowerUnDimMonitorSupported_0 @ 0x1C00021E0 (IsModerncorePowerUnDimMonitorSupported_0.c)
 *     ModerncorePowerUnDimMonitor_0 @ 0x1C00021E8 (ModerncorePowerUnDimMonitor_0.c)
 *     DrvSetMonitorBrightness @ 0x1C005FD54 (DrvSetMonitorBrightness.c)
 *     SqmPowerState @ 0x1C0063030 (SqmPowerState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET@@H@Z @ 0x1C007EEC0 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET@@H@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 PowerUnDimMonitor()
{
  __int64 result; // rax
  _BYTE v1[80]; // [rsp+20h] [rbp-68h] BYREF

  result = (unsigned int)dword_1C0104740;
  if ( dword_1C0104754 != dword_1C0104740 && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET *)v1, 0);
    DrvSetMonitorBrightness(*(_QWORD *)(gpDispInfo + 8), (unsigned int)dword_1C0104740, 0LL);
    if ( (int)IsModerncorePowerUnDimMonitorSupported_0() >= 0 )
      ModerncorePowerUnDimMonitor_0();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    ((void (__fastcall *)(_BYTE *))qword_1C01041B8)(v1);
    result = (unsigned int)dword_1C0104740;
    dword_1C0104754 = dword_1C0104740;
  }
  return result;
}
