/*
 * XREFs of xxxRemoteReconnect @ 0x1C012DFA0
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C003A4A0 (TransitionCursorSuppressionState.c)
 *     SetPointer @ 0x1C003E370 (SetPointer.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C003E588 (DrvOcclusionStateChangeNotify.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C012DCD8 (xxxRemoteStopScreenUpdates.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C012EAF0 (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C012EBFC (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C012EC2C (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C012ED14 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C012EE0C (AttachInputDevices.c)
 *     RemoveInputDevices @ 0x1C012F0C0 (RemoveInputDevices.c)
 *     DrvSetGraphicsDevices @ 0x1C012F374 (DrvSetGraphicsDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C012F3E4 (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C012F53C (DrvCloseRemoteGraphicsDevices.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@G@Z @ 0x1C012F628 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@G@Z.c)
 *     xxxUnregisterDeviceClassNotifications @ 0x1C012F6C0 (xxxUnregisterDeviceClassNotifications.c)
 *     GreDrvDisconnect @ 0x1C012F760 (GreDrvDisconnect.c)
 *     SetMouseTrails @ 0x1C01359E4 (SetMouseTrails.c)
 *     UpdateKeyLights @ 0x1C01383A4 (UpdateKeyLights.c)
 *     InitKeyboard @ 0x1C0144B1C (InitKeyboard.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C0154340 (xxxUserReinitializeAutoRotation.c)
 *     RegisterCDROMNotify @ 0x1C0157174 (RegisterCDROMNotify.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     GreDrvReconnect @ 0x1C02B7DDC (GreDrvReconnect.c)
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
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  char *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  wchar_t *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  void *v24; // rax
  __int64 v25; // rdx
  int v26; // r15d
  int v27; // r13d
  int v28; // ebx
  int v29; // eax
  __int64 v30; // rcx
  _WORD *v31; // rdx
  int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // zf
  PVOID *Object; // [rsp+20h] [rbp-328h]
  int v41; // [rsp+40h] [rbp-308h]
  BOOL v42; // [rsp+60h] [rbp-2E8h]
  int v43; // [rsp+6Ch] [rbp-2DCh] BYREF
  unsigned __int16 v44; // [rsp+70h] [rbp-2D8h]
  int v45; // [rsp+74h] [rbp-2D4h]
  int v46; // [rsp+78h] [rbp-2D0h]
  unsigned int v47; // [rsp+80h] [rbp-2C8h]
  int v48; // [rsp+88h] [rbp-2C0h]
  PVOID v49; // [rsp+90h] [rbp-2B8h] BYREF
  PVOID v50; // [rsp+98h] [rbp-2B0h] BYREF
  PVOID v51[3]; // [rsp+A0h] [rbp-2A8h] BYREF
  _BYTE v52[312]; // [rsp+B8h] [rbp-290h] BYREF
  char v53; // [rsp+1F0h] [rbp-158h] BYREF
  __int64 v54; // [rsp+210h] [rbp-138h]
  __int64 v55; // [rsp+218h] [rbp-130h]
  __int64 v56; // [rsp+220h] [rbp-128h]
  __int64 v57; // [rsp+228h] [rbp-120h]
  __int64 v58; // [rsp+230h] [rbp-118h]
  __int128 v59; // [rsp+240h] [rbp-108h]
  __int128 v60; // [rsp+250h] [rbp-F8h]
  __int128 v61; // [rsp+260h] [rbp-E8h]
  __int128 v62; // [rsp+270h] [rbp-D8h]
  unsigned __int16 v63[29]; // [rsp+280h] [rbp-C8h] BYREF
  __int128 v64; // [rsp+2BAh] [rbp-8Eh]
  __int16 v65; // [rsp+2CAh] [rbp-7Eh]
  __int128 v66; // [rsp+2CCh] [rbp-7Ch]
  int v67; // [rsp+2DCh] [rbp-6Ch]
  int v68; // [rsp+2E0h] [rbp-68h]
  int v69; // [rsp+2E4h] [rbp-64h]
  unsigned __int16 v70; // [rsp+2F8h] [rbp-50h]
  __int64 v71; // [rsp+2FCh] [rbp-4Ch]
  int v72; // [rsp+304h] [rbp-44h]
  int v73; // [rsp+308h] [rbp-40h]
  int v74; // [rsp+30Ch] [rbp-3Ch]
  int v75; // [rsp+314h] [rbp-34h]

  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v42 = 0;
  v45 = 0;
  v46 = 0;
  v47 = gMouseTrails + 1;
  v44 = gProtocolType;
  v5 = 0LL;
  v6 = 0;
  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v9, v8) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v11 = (_OWORD *)a1;
  if ( a1 + 304 < a1 || a1 + 304 > W32UserProbeAddress )
    v11 = (_OWORD *)W32UserProbeAddress;
  v12 = v52;
  v13 = 2LL;
  do
  {
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    v12[5] = v11[5];
    v12[6] = v11[6];
    v12 += 8;
    *(v12 - 1) = v11[7];
    v11 += 8;
    --v13;
  }
  while ( v13 );
  *v12 = *v11;
  v12[1] = v11[1];
  v12[2] = v11[2];
  v14 = &v53;
  v15 = v52;
  v16 = 2LL;
  do
  {
    *(_OWORD *)v14 = *v15;
    *((_OWORD *)v14 + 1) = v15[1];
    *((_OWORD *)v14 + 2) = v15[2];
    *((_OWORD *)v14 + 3) = v15[3];
    *((_OWORD *)v14 + 4) = v15[4];
    *((_OWORD *)v14 + 5) = v15[5];
    *((_OWORD *)v14 + 6) = v15[6];
    v14 += 128;
    *((_OWORD *)v14 - 1) = v15[7];
    v15 += 8;
    --v16;
  }
  while ( v16 );
  *(_OWORD *)v14 = *v15;
  *((_OWORD *)v14 + 1) = v15[1];
  *((_OWORD *)v14 + 2) = v15[2];
  if ( gfSessionSwitchBlock )
    return 3221225473LL;
  SetConsoleSwitchInProgress(1LL);
  SetMouseTrails(0LL, v17, v18);
  gpThinWireCache = ThinWireCache;
  ghRemoteMouseChannel = v56;
  gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
  gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
  ghRemoteVideoChannel = v54;
  ghRemoteBeepChannel = v55;
  ghRemoteKeyboardChannel = v57;
  ghRemoteThinwireChannel = v58;
  gRemoteClientKeyboardType = v71;
  *((_DWORD *)&gRemoteClientKeyboardType + 2) = v72;
  gbClientDoubleClickSupport = v68;
  gfEnableWindowsKey = v69;
  v48 = gbRemoteFxSession;
  gbRemoteFxSession = v75;
  *(_DWORD *)(RemoteContext + 64) = v75;
  gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
  *((_OWORD *)&gRemoteDisplayDeviceName + 1) = *(_OWORD *)(a1 + 178);
  *((_QWORD *)&gRemoteDisplayDeviceName + 4) = *(_QWORD *)(a1 + 194);
  *(_OWORD *)&gstrBaseWinStationName = v59;
  *((_OWORD *)&gstrBaseWinStationName + 1) = v60;
  *((_OWORD *)&gstrBaseWinStationName + 2) = v61;
  *((_OWORD *)&gstrBaseWinStationName + 3) = v62;
  gWinStationInfo = v64;
  *((_WORD *)&gWinStationInfo + 8) = v65;
  *(_OWORD *)((char *)&gWinStationInfo + 20) = v66;
  *((_DWORD *)&gWinStationInfo + 9) = v67;
  v19 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v19 )
    *v19 = 0;
  if ( gProtocolType )
  {
    Object = (PVOID *)&v43;
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
    v21 = gpsi;
    if ( !v43 )
    {
      *(_DWORD *)(gpsi + 2220LL) &= ~4u;
      goto LABEL_19;
    }
  }
  else
  {
    v21 = gpsi;
  }
  *(_DWORD *)(v21 + 2220) |= 4u;
LABEL_19:
  v22 = *(_QWORD *)(RemoteContext + 40);
  if ( !v22 )
    goto LABEL_25;
  v23 = -1LL;
  do
    ++v23;
  while ( *(_WORD *)(v22 + 2 * v23) );
  v6 = v23 + 1;
  v24 = (void *)Win32AllocPoolWithQuota(2LL * v6, 2020897621LL);
  v5 = v24;
  v25 = 0LL;
  if ( v24 )
  {
    memmove(v24, *(const void **)(RemoteContext + 40), 2LL * v6);
    v2 = 0;
LABEL_25:
    v25 = gVideoFileObject;
    if ( gVideoFileObject || !ghRemoteVideoChannel )
    {
      if ( !ghRemoteVideoChannel )
      {
        LODWORD(Object) = gRemotePrimaryMonitor;
        if ( !(unsigned int)GreMultiUserInitSession(
                              RemoteContext,
                              ghRemoteThinwireChannel,
                              gpThinWireCache,
                              gRemoteNumMonitors,
                              Object,
                              gVideoFileObject,
                              gThinwireFileObject,
                              8,
                              v63,
                              19,
                              gRemoteDisplayDeviceName) )
          Win32kDriverObject = -1073741823;
      }
    }
    else
    {
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v50, 0LL);
      v51[1] = v50;
      if ( Win32kDriverObject >= 0 )
      {
        gVideoFileObject = v50;
        IoGetRelatedDeviceObject((PFILE_OBJECT)v50);
        Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v49, 0LL);
        gThinwireFileObject = v49;
        v2 = 0;
        if ( Win32kDriverObject >= 0 )
        {
          LODWORD(Object) = gRemotePrimaryMonitor;
          if ( !(unsigned int)GreMultiUserInitSession(
                                RemoteContext,
                                ghRemoteThinwireChannel,
                                gpThinWireCache,
                                gRemoteNumMonitors,
                                Object,
                                gVideoFileObject,
                                gThinwireFileObject,
                                8,
                                v63,
                                19,
                                gRemoteDisplayDeviceName) )
            Win32kDriverObject = -1073741823;
        }
      }
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_93;
    if ( ghRemoteBeepChannel )
    {
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, v51, 0LL);
      gpRemoteBeepDevice = v51[0];
      v2 = 0;
    }
    if ( Win32kDriverObject < 0 )
      goto LABEL_93;
    if ( gnShadowers )
      xxxRemoteStopScreenUpdates();
    if ( v70 != gPreviousProtocolType && gPreviousProtocolType )
    {
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, v6 - 1, v5) )
        goto LABEL_44;
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(grpdeskRitInput, gProtocolType);
      if ( Win32kDriverObject < 0 )
        goto LABEL_93;
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices();
      if ( v5 && !(unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v63) )
      {
LABEL_44:
        Win32kDriverObject = -1073741823;
LABEL_93:
        v26 = 0;
        v27 = 0;
        goto LABEL_94;
      }
    }
    SetProtocolType(v70);
    v26 = 1;
    v27 = 1;
    if ( gProtocolType )
    {
      if ( gProtocolType == gPreviousProtocolType )
      {
        Win32kDriverObject = GreDrvReconnect(RemoteContext);
        LOBYTE(v2) = Win32kDriverObject >= 0;
        v42 = v2;
        v28 = 0;
      }
      else
      {
        v28 = 1;
        Win32kDriverObject = GreDrvConnect(RemoteContext);
        v42 = Win32kDriverObject >= 0;
      }
    }
    else
    {
      v28 = 1;
      Win32kDriverObject = DrvOpenLocalGraphicsDevices();
      v25 = 0LL;
      if ( Win32kDriverObject < 0 )
      {
        v26 = 0;
        goto LABEL_94;
      }
      v46 = 1;
    }
    v29 = DrvSetGraphicsDevices(v63);
    v20 = 0LL;
    if ( !v29 )
    {
      if ( gnShadowers )
        RemoteRedrawScreen(v30, v25, 0LL);
      Win32kDriverObject = -1073741823;
      goto LABEL_94;
    }
    if ( v73 || (v31 = *(_WORD **)&gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || v74 )
    {
      if ( v74 || (v32 = 0, !gProtocolType) )
        v32 = 256;
      LOBYTE(v41) = 0;
      LODWORD(Object) = v32 | 0x88F;
      Win32kDriverObject = xxxUserSetDisplayConfig(
                             0LL,
                             0LL,
                             0LL,
                             0LL,
                             Object,
                             2,
                             0,
                             gspdeskShouldBeForeground,
                             v41,
                             0LL);
      if ( Win32kDriverObject < 0 )
        goto LABEL_94;
      v31 = *(_WORD **)&gPreviousProtocolType;
    }
    else
    {
      v26 = 0;
    }
    if ( gProtocolType )
    {
      if ( v28
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
      if ( *v31 )
        RemoveInputDevices();
      if ( !gpWin32kDriverObject )
        Win32kDriverObject = GetWin32kDriverObject();
      AttachInputDevices(1LL);
      xxxUserReinitializeAutoRotation();
      UserSessionSwitchLeaveCrit(v34, v33);
      RegisterCDROMNotify();
      v45 = 1;
      EnterCrit(1LL);
    }
    ((void (*)(void))RemoteRedrawScreen)();
    if ( v26 && !gProtocolType && gbSnapShotWindowsAndMonitors )
      xxxRestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 24LL), gWndsMonitorSnapshotHead);
    InitKeyboard();
    UpdateKeyLights(0LL, v35);
    SetPointer(1);
    if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
      TransitionCursorSuppressionState(2, 0);
    SetConnectedState(1LL, gbConnectCompleted);
    if ( gProtocolType )
    {
      FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable");
      v36 = gpsi;
      if ( !v43 )
      {
        *(_DWORD *)(gpsi + 2220LL) &= ~4u;
LABEL_90:
        DrvGetRemoteDeviceCount();
        _guard_dispatch_icall_fptr();
        LOBYTE(v37) = gProtocolType == 0;
        LOBYTE(v38) = 1;
        CitSessionConnectChange(v38, v37);
        v26 = 1;
LABEL_94:
        v4 = v42;
        goto LABEL_95;
      }
    }
    else
    {
      v36 = gpsi;
    }
    *(_DWORD *)(v36 + 2220) |= 4u;
    goto LABEL_90;
  }
  Win32kDriverObject = -1073741801;
  v26 = 0;
  v27 = 0;
LABEL_95:
  SetMouseTrails(v47, v25, v20);
  v39 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v39 = Win32kDriverObject == 0;
  }
  if ( v39 && !gProtocolType && !gServiceSessionId )
    MEMORY[0xFFFFF780000002D8] = gSessionId;
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  if ( Win32kDriverObject < 0 )
  {
    gbRemoteFxSession = v48;
    *(_DWORD *)(RemoteContext + 64) = v48;
    if ( v45 )
      xxxUnregisterDeviceClassNotifications();
    if ( v46 )
      DrvCloseLocalGraphicsDevices();
    if ( v27 )
      SetProtocolType(v44);
    if ( v26 )
      DrvSetGraphicsDevices(v63);
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
