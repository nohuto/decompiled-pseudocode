/*
 * XREFs of xxxRemoteDisconnect @ 0x1C00EBC70
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F54 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0053F90 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     RemoveInputDevices @ 0x1C00E90F0 (RemoveInputDevices.c)
 *     AutoRotationUpdateRegistry @ 0x1C00EC030 (AutoRotationUpdateRegistry.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00EC208 (xxxRemoteStopScreenUpdates.c)
 *     DrvSetGraphicsDevices @ 0x1C00EC818 (DrvSetGraphicsDevices.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EC888 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0135AE0 (CleanupDesktopsMonitorsAndWindowsSnapShot.c)
 *     RemoteRedrawScreen @ 0x1C0154254 (RemoteRedrawScreen.c)
 *     GreDrvDisconnect @ 0x1C0154900 (GreDrvDisconnect.c)
 *     PowerOnGdi @ 0x1C0154B90 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1C0155010 (PowerOffGdi.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01CE694 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     UnregisterDeviceClassNotifications @ 0x1C01D6EEC (UnregisterDeviceClassNotifications.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01E598C (xxxRequestOutOfFullScreenMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxRemoteDisconnect()
{
  int v0; // esi
  __int64 RemoteContext; // rbp
  int v2; // r14d
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rcx
  _BYTE v11[8]; // [rsp+30h] [rbp-78h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v13[8]; // [rsp+40h] [rbp-68h] BYREF

  memset(v13, 0, sizeof(v13));
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  v0 = 0;
  v13[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v13[3]) = 21;
  RemoteContext = GreGetRemoteContext();
  v2 = 0;
  if ( PsGetCurrentProcess(v3) != gpepCSRSS )
    return 3221225506LL;
  if ( !gbConnected )
    return 0LL;
  if ( !gbIsRITReady )
    return 3221225473LL;
  if ( gProtocolType )
  {
    ((void (__fastcall *)(_QWORD))gDxgkInterface[122])(0LL);
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
      PowerOnGdi(v13, 1LL, 4LL);
    }
    SetConsoleSwitchInProgress(1LL);
    if ( !gspdeskDisconnect )
    {
      Timeout.QuadPart = -3000000000LL;
      if ( gdwInAtomicOperation )
      {
        v4 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v4, gdwInAtomicOperation);
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
      v5 = xxxRemoteStopScreenUpdates();
      if ( v5 < 0 )
        goto LABEL_53;
      v0 = 1;
      if ( gnShadowers )
        RemoteRedrawScreen();
      if ( gProtocolType )
      {
        GreDrvDisconnect(RemoteContext);
      }
      else
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v11);
        LOBYTE(v6) = 1;
        ((void (__fastcall *)(__int64))gDxgkInterface[121])(v6);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
        v5 = xxxRemoteSetDisconnectDisplayMode(
               grpdeskRitInput,
               gProtocolType,
               (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v13);
        LOBYTE(v8) = 1;
        ((void (__fastcall *)(__int64))gDxgkInterface[122])(v8);
        if ( v5 < 0 )
          goto LABEL_52;
        DrvCloseLocalGraphicsDevices();
      }
      gPreviousProtocolType = gProtocolType;
      if ( !gProtocolType )
      {
        UnregisterDeviceClassNotifications();
        RemoveInputDevices();
      }
      OPMDestroyAllProtectedOutputs();
      SetConnectedState(0LL, 0LL);
      AutoRotationUpdateRegistry();
      CitSessionConnectChange(0LL, 0LL);
    }
    else
    {
      v5 = -1073741823;
    }
    if ( v5 >= 0 )
    {
      if ( gProtocolType )
        gRemotePreviousMonitorsCount = *(_DWORD *)(gpDispInfo + 80LL);
      else
        DrvSetGraphicsDevices(L"TSDDD");
      CleanupRemoteHandles(RemoteContext);
LABEL_31:
      SetConsoleSwitchInProgress(0LL);
      if ( v5 < 0 && v2 == 1 )
        PowerOffGdi();
      return (unsigned int)v5;
    }
    if ( !v0 )
    {
LABEL_53:
      if ( !gProtocolType )
        CleanupDesktopsMonitorsAndWindowsSnapShot(gWndsMonitorSnapshotHead);
      goto LABEL_31;
    }
LABEL_52:
    RemoteRedrawScreen();
    goto LABEL_53;
  }
  return result;
}
