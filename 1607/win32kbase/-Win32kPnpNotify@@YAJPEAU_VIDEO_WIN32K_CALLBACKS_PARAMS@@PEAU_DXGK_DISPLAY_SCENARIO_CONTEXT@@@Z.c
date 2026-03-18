/*
 * XREFs of ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     IsDwmAsyncNotifyDisplayModeChangeSupported_0 @ 0x1C0001D18 (IsDwmAsyncNotifyDisplayModeChangeSupported_0.c)
 *     DwmAsyncNotifyDisplayModeChange_0 @ 0x1C0001D20 (DwmAsyncNotifyDisplayModeChange_0.c)
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C0001DA8 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     xxxSetCsrssThreadDesktop_0 @ 0x1C0001DB0 (xxxSetCsrssThreadDesktop_0.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported_0 @ 0x1C0001DB8 (IsxxxRestoreCsrssThreadDesktopSupported_0.c)
 *     xxxRestoreCsrssThreadDesktop_0 @ 0x1C0001DC0 (xxxRestoreCsrssThreadDesktop_0.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00163D0 (DrvUpdateGraphicsDeviceList.c)
 *     ReferenceDwmApiPort @ 0x1C001D7D0 (ReferenceDwmApiPort.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     DrvLogDiagDisplayChange @ 0x1C00629A0 (DrvLogDiagDisplayChange.c)
 *     PostWinlogonMessage @ 0x1C0071B40 (PostWinlogonMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00871CC (DrvSetWddmDeviceMonitorPowerState.c)
 *     ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B1F74 (-PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C3CA0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvCleanupGraphicsDevices @ 0x1C00C8484 (DrvCleanupGraphicsDevices.c)
 */

__int64 __fastcall Win32kPnpNotify(
        struct _VIDEO_WIN32K_CALLBACKS_PARAMS *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebx
  PVOID PhysDisp; // rbp
  struct tagGRAPHICS_DEVICE *i; // rax
  __int64 v8; // rcx
  int v9; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v10; // [rsp+20h] [rbp-68h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v11; // [rsp+20h] [rbp-68h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v12; // [rsp+28h] [rbp-60h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+A0h] [rbp+18h] BYREF

  v4 = 0;
  if ( !gPowerTransitionsState )
    DrvSetWddmDeviceMonitorPowerState((__int64)a1->PhysDisp, 1, 1, (__int64)a2);
  if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || grpdeskRitInput )
  {
    DrvLogDiagDisplayChange((__int64)a1, 6);
    if ( a1->Param )
    {
      if ( !gProtocolType )
      {
        WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 0;
        DrvUpdateGraphicsDeviceList(1, 1);
        if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || (v4 = xxxSetCsrssThreadDesktop_0(), v4 >= 0) )
        {
          LODWORD(v12) = 6;
          LODWORD(v10) = 2191;
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v10, v12, 0, grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 )
            xxxRestoreCsrssThreadDesktop_0();
        }
      }
      v9 = PnpNotifyForRemoteSession(0LL, a2);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        v4 = v9;
    }
    else
    {
      PhysDisp = a1->PhysDisp;
      for ( i = gpLocalGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
      {
        if ( *((PVOID *)i + 18) == PhysDisp )
          *((_DWORD *)i + 41) |= 1u;
      }
      if ( !gProtocolType )
      {
        if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || (v4 = xxxSetCsrssThreadDesktop_0(), v4 >= 0) )
        {
          LODWORD(v12) = 6;
          LODWORD(v10) = 2191;
          LOBYTE(v14) = 0;
          v4 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v10, v12, 0, grpdeskRitInput, 0, 0LL, &v14, (__int64)a2);
          if ( v4 < 0 )
          {
            LODWORD(v13) = 1;
            LODWORD(v11) = 128;
            v4 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v11, v13, 0, grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
          }
          else if ( a1->SurpriseRemoval && (_BYTE)v14 )
          {
            GreIncrementDisplaySettingsUniqueness();
            if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported_0() >= 0 )
            {
              ReferenceDwmApiPort();
              DwmAsyncNotifyDisplayModeChange_0();
            }
            LODWORD(v14) = PsGetCurrentProcessSessionId(v8);
            ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &v14, 0, 0);
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 )
            xxxRestoreCsrssThreadDesktop_0();
        }
      }
      PnpNotifyForRemoteSession(PhysDisp, a2);
      if ( v4 >= 0 )
        DrvCleanupGraphicsDevices(PhysDisp);
      if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
        DrvUpdateGraphicsDeviceList(1, 0);
      if ( a1->LockUserSession )
        PostWinlogonMessage(1027LL, 0);
    }
    if ( !gPowerTransitionsState )
      DrvSetWddmDeviceMonitorPowerState(0LL, 4, 1, (__int64)a2);
    return (unsigned int)v4;
  }
  else
  {
    gbInVideoPnpCallout = 0;
    return 3221225473LL;
  }
}
