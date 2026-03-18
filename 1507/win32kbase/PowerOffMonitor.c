/*
 * XREFs of PowerOffMonitor @ 0x1C006A170
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     IsPrepareGammaRampDataSupported_0 @ 0x1C0002110 (IsPrepareGammaRampDataSupported_0.c)
 *     PrepareGammaRampData_0 @ 0x1C0002118 (PrepareGammaRampData_0.c)
 *     IsFadeDesktopSupported_0 @ 0x1C0002120 (IsFadeDesktopSupported_0.c)
 *     FadeDesktop_0 @ 0x1C0002128 (FadeDesktop_0.c)
 *     IsModerncorePowerOffMonitorSupported_0 @ 0x1C0002130 (IsModerncorePowerOffMonitorSupported_0.c)
 *     ModerncorePowerOffMonitor_0 @ 0x1C0002138 (ModerncorePowerOffMonitor_0.c)
 *     IsRestoreGammaRampSupported_0 @ 0x1C0002140 (IsRestoreGammaRampSupported_0.c)
 *     RestoreGammaRamp_0 @ 0x1C0002148 (RestoreGammaRamp_0.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0007B9C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0007DB4 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PostWinlogonMessage @ 0x1C0019A20 (PostWinlogonMessage.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C006A508 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C006AB94 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C006AC90 (DrvDxgkLogCodePointPacket.c)
 *     SqmPowerState @ 0x1C0079410 (SqmPowerState.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1)
{
  int v1; // r12d
  int v3; // r15d

  v1 = gPowerTransitionsState;
  v3 = 0;
  if ( gPowerTransitionsState || qword_1C00FFFC4 )
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
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 8), 4LL);
      if ( v3 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C00FFF68 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(PowerMonitorOff, a1, v1);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
  }
}
