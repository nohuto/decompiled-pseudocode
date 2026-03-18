/*
 * XREFs of PowerOnGdi @ 0x1C01301F0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C012D870 (xxxRemoteDisconnect.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C012FB50 (xxxUserPowerStateCalloutWorker.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     xxxUserResetDisplayDevice @ 0x1C01302D0 (xxxUserResetDisplayDevice.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG PowerOnGdi()
{
  _DWORD *v0; // rcx
  __int64 DesktopWindow; // rax
  int v3; // edx
  char v4; // [rsp+60h] [rbp+8h] BYREF

  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL)) )
  {
    DrvWaitForMonitorProcessing(*(_QWORD *)(gpDispInfo + 8LL));
    if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8LL)) )
    {
      DrvDxgkLogCodePointPacket(11LL, gbFullScreen == 1, gulDelayedSwitchAction, 0LL);
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
      xxxUserResetDisplayDevice();
      v0 = (_DWORD *)gulDelayedSwitchAction;
      if ( gulDelayedSwitchAction )
      {
        DrvWakeupHandler(&v4);
        v0 = (_DWORD *)gulDelayedSwitchAction;
        if ( (gulDelayedSwitchAction & 1) != 0 && !gProtocolType )
        {
          v3 = 2191;
          if ( (gulDelayedSwitchAction & 2) != 0 )
            v3 = 6287;
          xxxUserSetDisplayConfig(0LL, 0LL, 0LL, 0LL, v3, 0, 0, grpdeskRitInput, 0, 0LL);
          v0 = (_DWORD *)gulDelayedSwitchAction;
        }
      }
      *v0 = 0;
    }
  }
  return TransitionCursorSuppressionState(2, 0);
}
