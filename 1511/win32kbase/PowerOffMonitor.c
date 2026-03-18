/*
 * XREFs of PowerOffMonitor @ 0x1C0084F80
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 * Callees:
 *     IsPrepareGammaRampDataSupported_0 @ 0x1C0002140 (IsPrepareGammaRampDataSupported_0.c)
 *     PrepareGammaRampData_0 @ 0x1C0002148 (PrepareGammaRampData_0.c)
 *     IsFadeDesktopSupported_0 @ 0x1C0002150 (IsFadeDesktopSupported_0.c)
 *     FadeDesktop_0 @ 0x1C0002158 (FadeDesktop_0.c)
 *     IsModerncorePowerOffMonitorSupported_0 @ 0x1C0002160 (IsModerncorePowerOffMonitorSupported_0.c)
 *     ModerncorePowerOffMonitor_0 @ 0x1C0002168 (ModerncorePowerOffMonitor_0.c)
 *     IsRestoreGammaRampSupported_0 @ 0x1C0002170 (IsRestoreGammaRampSupported_0.c)
 *     RestoreGammaRamp_0 @ 0x1C0002178 (RestoreGammaRamp_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     SqmPowerState @ 0x1C0063030 (SqmPowerState.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E0BC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E4F8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C0080870 (PostWinlogonMessage.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C0085264 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00857B0 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C0085B60 (DrvDxgkLogCodePointPacket.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1)
{
  int v1; // r12d
  int v3; // r14d
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = gPowerTransitionsState;
  v3 = 0;
  if ( gPowerTransitionsState || qword_1C010476C )
  {
    if ( !gProtocolType )
    {
      UserSessionSwitchBlock_Start();
      if ( !gfIsFadingInProgress )
      {
        if ( grpdeskRitInput )
        {
          gfIsFadingInProgress = 1;
          v3 = 1;
          if ( (int)IsPrepareGammaRampDataSupported_0() >= 0 )
            PrepareGammaRampData_0();
        }
      }
      DrvDxgkLogCodePointPacket(14LL, 0LL, 0LL, 0LL);
      if ( (int)IsModerncorePowerOffMonitorSupported_0() >= 0 )
        ModerncorePowerOffMonitor_0();
      LOBYTE(v5) = 1;
      DrvSetMonitorPowerState(v4, 4LL, v5);
      if ( v3 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      dword_1C010471C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    UpdateDisplayState(PowerMonitorOff, a1, v1);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
  }
}
