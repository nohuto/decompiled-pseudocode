/*
 * XREFs of PowerOnGdi @ 0x1C0154B90
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     TransitionCursorSuppressionState @ 0x1C0093FF0 (TransitionCursorSuppressionState.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     ProcessDelayedSdc @ 0x1C0154CA0 (ProcessDelayedSdc.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154CD0 (xxxUserResetDisplayDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall PowerOnGdi(__int64 a1, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 DesktopWindow; // rax

  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL)) )
  {
    DrvWaitForMonitorProcessing(*(_QWORD *)(gpDispInfo + 8LL));
    if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL)) )
    {
      DrvDxgkLogCodePointPacket(11LL, gbFullScreen == 1, gulDelayedSwitchAction);
      EtwTracePowerOnGdiBegin(a3);
      gbGDIOn = 1;
      SafeEnableMDEV(2LL);
      if ( gbFullScreen == 1 && gspwndFullScreen )
      {
        DesktopWindow = GetDesktopWindow((__int64)gspwndFullScreen);
        HMAssignmentLock(&gspwndFullScreen, DesktopWindow);
        gbFullScreen = 2;
        xxxMakeWindowForegroundWithState(0LL, 1);
      }
      DrvSetMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL), 1LL);
      xxxUserResetDisplayDevice(v7, v6);
      if ( a2 )
        ProcessDelayedSdc(a1);
    }
  }
  TransitionCursorSuppressionState(2, 0);
  return EtwTracePowerOnGdiEnd(a3);
}
