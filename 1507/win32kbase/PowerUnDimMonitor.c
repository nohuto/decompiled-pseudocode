/*
 * XREFs of PowerUnDimMonitor @ 0x1C000A57C
 * Callers:
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 * Callees:
 *     IsModerncorePowerUnDimMonitorSupported_0 @ 0x1C00021B0 (IsModerncorePowerUnDimMonitorSupported_0.c)
 *     ModerncorePowerUnDimMonitor_0 @ 0x1C00021B8 (ModerncorePowerUnDimMonitor_0.c)
 *     SqmPowerState @ 0x1C0079410 (SqmPowerState.c)
 *     DrvSetMonitorBrightness @ 0x1C0083B0C (DrvSetMonitorBrightness.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET@@H@Z @ 0x1C008441C (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET@@H@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 PowerUnDimMonitor()
{
  __int64 result; // rax
  _BYTE v1[80]; // [rsp+20h] [rbp-68h] BYREF

  result = (unsigned int)dword_1C00FFF94;
  if ( dword_1C00FFFA8 != dword_1C00FFF94 && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET *)v1, 0);
    DrvSetMonitorBrightness(*(_QWORD *)(gpDispInfo + 8), (unsigned int)dword_1C00FFF94, 0LL);
    if ( (int)IsModerncorePowerUnDimMonitorSupported_0() >= 0 )
      ModerncorePowerUnDimMonitor_0();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    ((void (__fastcall *)(_BYTE *))qword_1C0101398)(v1);
    result = (unsigned int)dword_1C00FFF94;
    dword_1C00FFFA8 = dword_1C00FFF94;
  }
  return result;
}
