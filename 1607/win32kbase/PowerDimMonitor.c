/*
 * XREFs of PowerDimMonitor @ 0x1C00B2EF0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     IsModerncorePowerDimMonitorSupported_0 @ 0x1C0001D38 (IsModerncorePowerDimMonitorSupported_0.c)
 *     ModerncorePowerDimMonitor_0 @ 0x1C0001D40 (ModerncorePowerDimMonitor_0.c)
 *     DrvSetMonitorBrightness @ 0x1C005DCC0 (DrvSetMonitorBrightness.c)
 *     DrvDxgkWriteDiagEntry @ 0x1C0064A40 (DrvDxgkWriteDiagEntry.c)
 *     SqmPowerState @ 0x1C0070710 (SqmPowerState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0070928 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

void PowerDimMonitor()
{
  __int64 v0; // rdx
  unsigned int v1; // r8d
  _BYTE v2[96]; // [rsp+30h] [rbp-78h] BYREF

  if ( (gbPowerHighPrecisionBrightness
     || dword_1C011BB30 != dword_1C011BB24 && dword_1C011BB24 < (unsigned int)dword_1C011BB1C)
    && !gProtocolType )
  {
    InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v2, 1);
    if ( gbPowerHighPrecisionBrightness )
    {
      v1 = dword_1C011BB48;
      v0 = (unsigned int)dword_1C011BB44;
    }
    else
    {
      v0 = (unsigned int)dword_1C011BB24;
      v1 = -1;
    }
    DrvSetMonitorBrightness(*(_QWORD *)(gpDispInfo + 8), v0, v1, 1u, &byte_1C011BB54, 0);
    if ( (int)IsModerncorePowerDimMonitorSupported_0() >= 0 )
      ModerncorePowerDimMonitor_0();
    if ( gSqmIsOptedIn )
      SqmPowerState();
    DrvDxgkWriteDiagEntry();
    dword_1C011BB30 = dword_1C011BB24;
  }
}
