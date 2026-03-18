/*
 * XREFs of xxxRemoteReconnect @ 0x1C014DAC0
 * Callers:
 *     <none>
 * Callees:
 *     DrvOcclusionStateChangeNotify @ 0x1C0096B6C (DrvOcclusionStateChangeNotify.c)
 *     SetMouseTrails @ 0x1C0096C64 (SetMouseTrails.c)
 *     SetPointer @ 0x1C0096E50 (SetPointer.c)
 *     TransitionCursorSuppressionState @ 0x1C00987A0 (TransitionCursorSuppressionState.c)
 *     RemoveInputDevices @ 0x1C009A070 (RemoveInputDevices.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C009A300 (xxxUserReinitializeAutoRotation.c)
 *     InitKeyboard @ 0x1C009D464 (InitKeyboard.c)
 *     UpdateKeyLights @ 0x1C009D668 (UpdateKeyLights.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C009D96C (xxxRemoteStopScreenUpdates.c)
 *     DrvSetGraphicsDevices @ 0x1C009F510 (DrvSetGraphicsDevices.c)
 *     xxxUnregisterDeviceClassNotifications @ 0x1C009F580 (xxxUnregisterDeviceClassNotifications.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@G@Z @ 0x1C009F620 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@G@Z.c)
 *     RegisterCDROMNotify @ 0x1C010AE98 (RegisterCDROMNotify.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C014E610 (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C014E71C (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C014E74C (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C014E7A8 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C014E8A0 (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C014EB58 (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C014ECB0 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C014ED9C (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     GreDrvReconnect @ 0x1C02B71F0 (GreDrvReconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteReconnect(unsigned __int64 a1)
{
  BOOL v2; // ebx
  NTSTATUS Win32kDriverObject; // edi
  BOOL v4; // esi
  void *v5; // r12
  unsigned int v6; // r15d
  __int64 RemoteContext; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  char *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  wchar_t *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  void *v23; // rax
  int v24; // r15d
  int v25; // r13d
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _WORD *v29; // rdx
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  bool v36; // zf
  int v37; // [rsp+40h] [rbp-308h]
  BOOL v38; // [rsp+60h] [rbp-2E8h]
  int v39; // [rsp+6Ch] [rbp-2DCh] BYREF
  unsigned __int16 v40; // [rsp+70h] [rbp-2D8h]
  int v41; // [rsp+74h] [rbp-2D4h]
  int v42; // [rsp+78h] [rbp-2D0h]
  int v43; // [rsp+80h] [rbp-2C8h]
  int v44; // [rsp+88h] [rbp-2C0h]
  PVOID v45; // [rsp+90h] [rbp-2B8h] BYREF
  PVOID Object; // [rsp+98h] [rbp-2B0h] BYREF
  PVOID v47[3]; // [rsp+A0h] [rbp-2A8h] BYREF
  _BYTE v48[312]; // [rsp+B8h] [rbp-290h] BYREF
  char v49; // [rsp+1F0h] [rbp-158h] BYREF
  __int64 v50; // [rsp+210h] [rbp-138h]
  __int64 v51; // [rsp+218h] [rbp-130h]
  __int64 v52; // [rsp+220h] [rbp-128h]
  __int64 v53; // [rsp+228h] [rbp-120h]
  __int64 v54; // [rsp+230h] [rbp-118h]
  __int128 v55; // [rsp+240h] [rbp-108h]
  __int128 v56; // [rsp+250h] [rbp-F8h]
  __int128 v57; // [rsp+260h] [rbp-E8h]
  __int128 v58; // [rsp+270h] [rbp-D8h]
  char v59[58]; // [rsp+280h] [rbp-C8h] BYREF
  __int128 v60; // [rsp+2BAh] [rbp-8Eh]
  __int16 v61; // [rsp+2CAh] [rbp-7Eh]
  __int128 v62; // [rsp+2CCh] [rbp-7Ch]
  int v63; // [rsp+2DCh] [rbp-6Ch]
  int v64; // [rsp+2E0h] [rbp-68h]
  int v65; // [rsp+2E4h] [rbp-64h]
  unsigned __int16 v66; // [rsp+2F8h] [rbp-50h]
  __int64 v67; // [rsp+2FCh] [rbp-4Ch]
  int v68; // [rsp+304h] [rbp-44h]
  int v69; // [rsp+308h] [rbp-40h]
  int v70; // [rsp+30Ch] [rbp-3Ch]
  int v71; // [rsp+314h] [rbp-34h]

  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v38 = 0;
  v41 = 0;
  v42 = 0;
  v43 = gMouseTrails + 1;
  v40 = gProtocolType;
  v5 = 0LL;
  v6 = 0;
  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v9, v8, v10, v11) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v13 = (_OWORD *)a1;
  if ( a1 + 304 < a1 || a1 + 304 > W32UserProbeAddress )
    v13 = (_OWORD *)W32UserProbeAddress;
  v14 = v48;
  v15 = 2LL;
  do
  {
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    v14[5] = v13[5];
    v14[6] = v13[6];
    v14 += 8;
    *(v14 - 1) = v13[7];
    v13 += 8;
    --v15;
  }
  while ( v15 );
  *v14 = *v13;
  v14[1] = v13[1];
  v14[2] = v13[2];
  v16 = &v49;
  v17 = v48;
  v18 = 2LL;
  do
  {
    *(_OWORD *)v16 = *v17;
    *((_OWORD *)v16 + 1) = v17[1];
    *((_OWORD *)v16 + 2) = v17[2];
    *((_OWORD *)v16 + 3) = v17[3];
    *((_OWORD *)v16 + 4) = v17[4];
    *((_OWORD *)v16 + 5) = v17[5];
    *((_OWORD *)v16 + 6) = v17[6];
    v16 += 128;
    *((_OWORD *)v16 - 1) = v17[7];
    v17 += 8;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)v16 = *v17;
  *((_OWORD *)v16 + 1) = v17[1];
  *((_OWORD *)v16 + 2) = v17[2];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0);
  gpThinWireCache = ThinWireCache;
  ghRemoteMouseChannel = v52;
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  ghRemoteVideoChannel = v50;
  ghRemoteBeepChannel = v51;
  ghRemoteKeyboardChannel = v53;
  ghRemoteThinwireChannel = v54;
  *(_QWORD *)gRemoteClientKeyboardType = v67;
  gRemoteClientKeyboardType[2] = v68;
  gbClientDoubleClickSupport = v64;
  gfEnableWindowsKey = v65;
  v44 = gbRemoteFxSession;
  gbRemoteFxSession = v71;
  *(_DWORD *)(RemoteContext + 64) = v71;
  gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
  *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
  *(_OWORD *)&gstrBaseWinStationName = v55;
  *((_OWORD *)&gstrBaseWinStationName + 1) = v56;
  *((_OWORD *)&gstrBaseWinStationName + 2) = v57;
  *((_OWORD *)&gstrBaseWinStationName + 3) = v58;
  gWinStationInfo = v60;
  *((_WORD *)&gWinStationInfo + 8) = v61;
  *(_OWORD *)((char *)&gWinStationInfo + 20) = v62;
  *((_DWORD *)&gWinStationInfo + 9) = v63;
  v19 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v19 )
    *v19 = 0;
  if ( gProtocolType )
  {
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v39, 0);
    v20 = gpsi;
    if ( !v39 )
    {
      *(_DWORD *)(gpsi + 2220LL) &= ~4u;
      goto LABEL_19;
    }
  }
  else
  {
    v20 = gpsi;
  }
  *(_DWORD *)(v20 + 2220) |= 4u;
LABEL_19:
  v21 = *(_QWORD *)(RemoteContext + 40);
  if ( !v21 )
    goto LABEL_25;
  v22 = -1LL;
  do
    ++v22;
  while ( *(_WORD *)(v21 + 2 * v22) );
  v6 = v22 + 1;
  v23 = (void *)Win32AllocPoolWithQuota(2LL * v6, 2020897621LL);
  v5 = v23;
  if ( v23 )
  {
    memmove(v23, *(const void **)(RemoteContext + 40), 2LL * v6);
    v2 = 0;
LABEL_25:
    if ( gVideoFileObject || !ghRemoteVideoChannel )
    {
      if ( !ghRemoteVideoChannel
        && !(unsigned int)GreMultiUserInitSession(
                            RemoteContext,
                            ghRemoteThinwireChannel,
                            gpThinWireCache,
                            gRemoteNumMonitors,
                            gRemotePrimaryMonitor,
                            gVideoFileObject,
                            gThinwireFileObject,
                            8,
                            v59,
                            19,
                            gRemoteDisplayDeviceName) )
      {
        Win32kDriverObject = -1073741823;
      }
    }
    else
    {
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &Object, 0LL);
      v47[1] = Object;
      if ( Win32kDriverObject >= 0 )
      {
        gVideoFileObject = Object;
        IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v45, 0LL);
        gThinwireFileObject = v45;
        v2 = 0;
        if ( Win32kDriverObject >= 0
          && !(unsigned int)GreMultiUserInitSession(
                              RemoteContext,
                              ghRemoteThinwireChannel,
                              gpThinWireCache,
                              gRemoteNumMonitors,
                              gRemotePrimaryMonitor,
                              gVideoFileObject,
                              gThinwireFileObject,
                              8,
                              v59,
                              19,
                              gRemoteDisplayDeviceName) )
        {
          Win32kDriverObject = -1073741823;
        }
      }
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_93;
    if ( ghRemoteBeepChannel )
    {
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, v47, 0LL);
      gpRemoteBeepDevice = v47[0];
      v2 = 0;
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_93;
    if ( gnShadowers )
      xxxRemoteStopScreenUpdates();
    if ( v66 != gPreviousProtocolType && gPreviousProtocolType )
    {
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, v6 - 1, v5) )
        goto LABEL_44;
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(grpdeskRitInput, gProtocolType);
      if ( Win32kDriverObject < 0 )
        goto LABEL_93;
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices();
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v59) )
      {
LABEL_44:
        Win32kDriverObject = -1073741823;
LABEL_93:
        v24 = 0;
        v25 = 0;
        goto LABEL_94;
      }
    }
    SetProtocolType(v66);
    v24 = 1;
    v25 = 1;
    if ( gProtocolType )
    {
      if ( gProtocolType == gPreviousProtocolType )
      {
        Win32kDriverObject = GreDrvReconnect(RemoteContext);
        LOBYTE(v2) = Win32kDriverObject >= 0;
        v38 = v2;
        v26 = 0;
      }
      else
      {
        v26 = 1;
        Win32kDriverObject = GreDrvConnect(RemoteContext);
        v38 = Win32kDriverObject >= 0;
      }
    }
    else
    {
      v26 = 1;
      Win32kDriverObject = DrvOpenLocalGraphicsDevices();
      if ( Win32kDriverObject < 0 )
      {
        v24 = 0;
        goto LABEL_94;
      }
      v42 = 1;
    }
    if ( !(unsigned int)DrvSetGraphicsDevices(v59, gProtocolType) )
    {
      if ( gnShadowers )
        RemoteRedrawScreen(v28, v27, 0LL);
      Win32kDriverObject = -1073741823;
      goto LABEL_94;
    }
    if ( v69 || (v29 = *(_WORD **)&gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || v70 )
    {
      if ( v70 || (v30 = 0, !gProtocolType) )
        v30 = 256;
      LOBYTE(v37) = 0;
      Win32kDriverObject = xxxUserSetDisplayConfig(
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             v30 | 0x88Fu,
                             2,
                             0,
                             gspdeskShouldBeForeground,
                             v37,
                             0LL);
      if ( Win32kDriverObject < 0 )
        goto LABEL_94;
      v29 = *(_WORD **)&gPreviousProtocolType;
    }
    else
    {
      v24 = 0;
    }
    if ( gProtocolType )
    {
      if ( v26
        && !(unsigned int)DrvEscapeRemoteDrivers(
                            *(_QWORD *)(gpDispInfo + 8LL),
                            gProtocolType,
                            *(_QWORD *)(RemoteContext + 40),
                            2LL,
                            gptmrWD,
                            8) )
      {
        Win32kDriverObject = -1073741823;
      }
      AttachInputDevices(0LL);
    }
    else
    {
      if ( *v29 )
        RemoveInputDevices();
      if ( !gpWin32kDriverObject )
        Win32kDriverObject = GetWin32kDriverObject();
      AttachInputDevices(1LL);
      xxxUserReinitializeAutoRotation();
      UserSessionSwitchLeaveCrit(v32, v31);
      RegisterCDROMNotify();
      v41 = 1;
      EnterCrit(0LL, 1LL);
    }
    ((void (*)(void))RemoteRedrawScreen)();
    if ( v24 && !gProtocolType && gbSnapShotWindowsAndMonitors )
      xxxRestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 24LL), gWndsMonitorSnapshotHead);
    InitKeyboard();
    UpdateKeyLights(0);
    SetPointer(1);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2, 0);
    SetConnectedState(1LL, gbConnectCompleted);
    if ( gProtocolType )
    {
      FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v39, 0);
      v33 = gpsi;
      if ( !v39 )
      {
        *(_DWORD *)(gpsi + 2220LL) &= ~4u;
LABEL_90:
        DrvGetRemoteDeviceCount();
        _guard_dispatch_icall_fptr();
        LOBYTE(v34) = gProtocolType == 0;
        LOBYTE(v35) = 1;
        CitSessionConnectChange(v35, v34);
        v24 = 1;
LABEL_94:
        v4 = v38;
        goto LABEL_95;
      }
    }
    else
    {
      v33 = gpsi;
    }
    *(_DWORD *)(v33 + 2220) |= 4u;
    goto LABEL_90;
  }
  Win32kDriverObject = -1073741801;
  v24 = 0;
  v25 = 0;
LABEL_95:
  SetMouseTrails(v43);
  v36 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v36 = Win32kDriverObject == 0;
  }
  if ( v36 && !gProtocolType && !gServiceSessionId )
    MEMORY[0xFFFFF780000002D8] = gSessionId;
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  if ( Win32kDriverObject < 0 )
  {
    gbRemoteFxSession = v44;
    *(_DWORD *)(RemoteContext + 64) = v44;
    if ( v41 )
      xxxUnregisterDeviceClassNotifications();
    if ( v42 )
      DrvCloseLocalGraphicsDevices();
    if ( v25 )
      SetProtocolType(v40);
    if ( v24 )
      DrvSetGraphicsDevices(v59, gProtocolType);
  }
  if ( v5 )
    Win32FreePool(v5);
  if ( !Win32kDriverObject )
  {
    if ( gProtocolType )
      DrvEscapeRemoteDrivers(*(_QWORD *)(gpDispInfo + 8LL), gProtocolType, *(_QWORD *)(RemoteContext + 40), 6LL, 0LL, 0);
  }
  DrvOcclusionStateChangeNotify();
  return (unsigned int)Win32kDriverObject;
}
