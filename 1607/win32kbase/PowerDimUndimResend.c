/*
 * XREFs of PowerDimUndimResend @ 0x1C005DAB4
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvSetMonitorBrightness @ 0x1C005DCC0 (DrvSetMonitorBrightness.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0064A40 (DrvDxgkWriteDiagEntry.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0070928 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

__int64 PowerDimUndimResend()
{
  int v0; // ebx
  __int64 result; // rax
  _BYTE v2[96]; // [rsp+30h] [rbp-78h] BYREF

  v0 = 0;
  if ( !gProtocolType
    && !LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext)
    && !gbPowerHighPrecisionBrightness
    && !byte_1C011BB54
    && dword_1C011BB30 != -1 )
  {
    result = DrvSetMonitorBrightness(
               *(_QWORD *)(gpDispInfo + 8),
               dword_1C011BB30,
               -1,
               dword_1C011BB30 == dword_1C011BB24,
               (__int64)&byte_1C011BB54,
               1);
    if ( byte_1C011BB54 )
    {
      LOBYTE(v0) = dword_1C011BB30 == dword_1C011BB24;
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v2, v0);
      return DrvDxgkWriteDiagEntry(v2);
    }
  }
  return result;
}
