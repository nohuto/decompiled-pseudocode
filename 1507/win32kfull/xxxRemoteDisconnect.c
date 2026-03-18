/*
 * XREFs of xxxRemoteDisconnect @ 0x1C012D870
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     AutoRotationUpdateRegistry @ 0x1C012DBC0 (AutoRotationUpdateRegistry.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C012DCD8 (xxxRemoteStopScreenUpdates.c)
 *     RemoteRedrawScreen @ 0x1C012ED14 (RemoteRedrawScreen.c)
 *     RemoveInputDevices @ 0x1C012F0C0 (RemoveInputDevices.c)
 *     DrvSetGraphicsDevices @ 0x1C012F374 (DrvSetGraphicsDevices.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@G@Z @ 0x1C012F628 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@G@Z.c)
 *     xxxUnregisterDeviceClassNotifications @ 0x1C012F6C0 (xxxUnregisterDeviceClassNotifications.c)
 *     GreDrvDisconnect @ 0x1C012F760 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C01301F0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0130390 (PowerOffGdi.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0132CC0 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D5CB4 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01EFC4C (xxxRequestOutOfFullScreenMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  int v0; // esi
  __int64 RemoteContext; // r14
  int v2; // ebp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  RemoteContext = GreGetRemoteContext();
  v2 = 0;
  if ( PsGetCurrentProcess(v4, v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    ((void (__fastcall *)(_QWORD))gDxgkInterface[121])(0LL);
  }
  else
  {
    while ( ghSwitcher )
      xxxSleepThread2(0, 1u, 0, 0, 0LL);
  }
  if ( gProtocolType || gbFullScreen != 1 || (result = xxxRequestOutOfFullScreenMode(), (int)result >= 0) )
  {
    gdwHydraHint |= 0x10u;
    memset(gstrBaseWinStationName, 0, 0x40uLL);
    if ( gfSessionSwitchBlock )
      return 3221226029LL;
    if ( !gProtocolType && !gbGDIOn )
    {
      v2 = 1;
      PowerOnGdi();
    }
    SetConsoleSwitchInProgress(1LL);
    if ( !gspdeskDisconnect )
    {
      Timeout.QuadPart = -3000000000LL;
      UserSessionSwitchLeaveCrit(v7, v6);
      KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(1LL);
    }
    if ( !gProtocolType && gbSnapShotWindowsAndMonitors && *(_DWORD *)(gpDispInfo + 80LL) > 1u )
    {
      v8 = *(_QWORD *)(gptiCurrent + 416LL);
      if ( !v8 )
        v8 = grpdeskIODefault;
      SnapShotDesktopsMonitorsAndWindowsRects(*(_QWORD *)(v8 + 24), gWndsMonitorSnapshotHead);
    }
    if ( gspdeskDisconnect )
    {
      v9 = xxxRemoteStopScreenUpdates();
      if ( v9 < 0 )
        goto LABEL_43;
      v0 = 1;
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( gProtocolType )
      {
        GreDrvDisconnect(RemoteContext);
      }
      else
      {
        v9 = xxxRemoteSetDisconnectDisplayMode(grpdeskRitInput, 0);
        LOBYTE(v10) = 1;
        ((void (__fastcall *)(__int64))gDxgkInterface[121])(v10);
        if ( v9 < 0 )
          goto LABEL_42;
        DrvCloseLocalGraphicsDevices();
      }
      gPreviousProtocolType = gProtocolType;
      if ( !gProtocolType )
      {
        xxxUnregisterDeviceClassNotifications();
        RemoveInputDevices();
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0LL, 0LL);
      AutoRotationUpdateRegistry();
      CitSessionConnectChange(0LL, 0LL);
    }
    else
    {
      v9 = -1073741823;
    }
    if ( v9 >= 0 )
    {
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)(gpDispInfo + 80LL);
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
LABEL_49:
      SetConsoleSwitchInProgress(0LL);
      if ( v9 < 0 && v2 == 1 )
        PowerOffGdi();
      return (unsigned int)v9;
    }
    if ( !v0 )
    {
LABEL_43:
      if ( !gProtocolType )
        CleanupDesktopsMonitorsAndWindowsSnapShot(gWndsMonitorSnapshotHead);
      goto LABEL_49;
    }
LABEL_42:
    RemoteRedrawScreen();
    goto LABEL_43;
  }
  return result;
}
