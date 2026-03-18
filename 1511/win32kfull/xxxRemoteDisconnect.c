/*
 * XREFs of xxxRemoteDisconnect @ 0x1C009DC30
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C005B500 (xxxSleepThread2.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007CD4C (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     RemoveInputDevices @ 0x1C009A070 (RemoveInputDevices.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C009D96C (xxxRemoteStopScreenUpdates.c)
 *     AutoRotationUpdateRegistry @ 0x1C009DFB0 (AutoRotationUpdateRegistry.c)
 *     DrvSetGraphicsDevices @ 0x1C009F510 (DrvSetGraphicsDevices.c)
 *     xxxUnregisterDeviceClassNotifications @ 0x1C009F580 (xxxUnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@G@Z @ 0x1C009F620 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@G@Z.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0114BB0 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     RemoteRedrawScreen @ 0x1C014E7A8 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C014ED9C (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C014F210 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C014F490 (PowerOffGdi.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D77E0 (SnapShotDesktopsMonitorsAndWindowsRects.c)
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
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  int *v12; // rcx
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  int *v14; // rcx
  char v15; // [rsp+60h] [rbp+8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp+10h] BYREF

  v0 = 0;
  RemoteContext = GreGetRemoteContext();
  v2 = 0;
  if ( PsGetCurrentProcess(v4, v3, v5, v6) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    gDxgkInterface[121](0LL);
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
      UserSessionSwitchLeaveCrit(v9, v8);
      KeWaitForSingleObject(gpEventDiconnectDesktop, WrUserRequest, 0, 0, &Timeout);
      EnterCrit(0LL, 1LL);
    }
    if ( !gProtocolType && gbSnapShotWindowsAndMonitors && *(_DWORD *)(gpDispInfo + 80LL) > 1u )
    {
      v10 = *(_QWORD *)(gptiCurrent + 408LL);
      if ( !v10 )
        v10 = grpdeskIODefault;
      SnapShotDesktopsMonitorsAndWindowsRects(*(_QWORD *)(v10 + 24), gWndsMonitorSnapshotHead);
    }
    if ( gspdeskDisconnect )
    {
      v11 = xxxRemoteStopScreenUpdates();
      if ( v11 < 0 )
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
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
        LOBYTE(v12) = 1;
        gDxgkInterface[120](v12);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
        v11 = xxxRemoteSetDisconnectDisplayMode(grpdeskRitInput, gProtocolType);
        LOBYTE(v14) = 1;
        gDxgkInterface[121](v14);
        if ( v11 < 0 )
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
      v11 = -1073741823;
    }
    if ( v11 >= 0 )
    {
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)(gpDispInfo + 80LL);
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
LABEL_49:
      SetConsoleSwitchInProgress(0LL);
      if ( v11 < 0 && v2 == 1 )
        PowerOffGdi();
      return (unsigned int)v11;
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
