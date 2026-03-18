/*
 * XREFs of xxxRemoteReconnect @ 0x1C01537F0
 * Callers:
 *     <none>
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0093FF0 (TransitionCursorSuppressionState.c)
 *     SetMouseTrails @ 0x1C0094A28 (SetMouseTrails.c)
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C0094EF4 (DrvOcclusionStateChangeNotify.c)
 *     RemoveInputDevices @ 0x1C00E90F0 (RemoveInputDevices.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C00E92B0 (xxxUserReinitializeAutoRotation.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00EC208 (xxxRemoteStopScreenUpdates.c)
 *     UpdateKeyLights @ 0x1C00EC4CC (UpdateKeyLights.c)
 *     DrvSetGraphicsDevices @ 0x1C00EC818 (DrvSetGraphicsDevices.c)
 *     ?xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EC888 (-xxxRemoteSetDisconnectDisplayMode@@YAJPEAUtagDESKTOP@@GPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     RegisterCDROMNotify @ 0x1C012CF70 (RegisterCDROMNotify.c)
 *     InitKeyboard @ 0x1C01332C4 (InitKeyboard.c)
 *     GreMultiUserSetDisplayDriverName @ 0x1C01540BC (GreMultiUserSetDisplayDriverName.c)
 *     ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01541C8 (-DrvGetRemoteDeviceCount@@YAIXZ.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C01541F8 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0154254 (RemoteRedrawScreen.c)
 *     AttachInputDevices @ 0x1C015434C (AttachInputDevices.c)
 *     DrvOpenLocalGraphicsDevices @ 0x1C0154408 (DrvOpenLocalGraphicsDevices.c)
 *     DrvCloseRemoteGraphicsDevices @ 0x1C0154560 (DrvCloseRemoteGraphicsDevices.c)
 *     GreDrvDisconnect @ 0x1C0154900 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     UnregisterDeviceClassNotifications @ 0x1C01D6EEC (UnregisterDeviceClassNotifications.c)
 *     GreDrvReconnect @ 0x1C02BA424 (GreDrvReconnect.c)
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
  __int64 v8; // rcx
  _OWORD *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  char *v12; // rax
  _OWORD *v13; // rcx
  __int64 v14; // rdx
  wchar_t *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r15
  void *v19; // rax
  int v20; // r15d
  int v21; // r13d
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ecx
  _WORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // r8
  int v38; // [rsp+40h] [rbp-338h]
  BOOL v39; // [rsp+60h] [rbp-318h]
  int v40; // [rsp+70h] [rbp-308h] BYREF
  int v41; // [rsp+74h] [rbp-304h]
  int v42; // [rsp+78h] [rbp-300h]
  int v43; // [rsp+84h] [rbp-2F4h]
  int v44; // [rsp+88h] [rbp-2F0h]
  PVOID v45; // [rsp+90h] [rbp-2E8h] BYREF
  PVOID v46; // [rsp+98h] [rbp-2E0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-2D8h] BYREF
  _BYTE v48[304]; // [rsp+B0h] [rbp-2C8h] BYREF
  char v49; // [rsp+1E0h] [rbp-198h] BYREF
  __int64 v50; // [rsp+200h] [rbp-178h]
  __int64 v51; // [rsp+208h] [rbp-170h]
  __int64 v52; // [rsp+210h] [rbp-168h]
  __int64 v53; // [rsp+218h] [rbp-160h]
  __int64 v54; // [rsp+220h] [rbp-158h]
  __int128 v55; // [rsp+230h] [rbp-148h]
  __int128 v56; // [rsp+240h] [rbp-138h]
  __int128 v57; // [rsp+250h] [rbp-128h]
  __int128 v58; // [rsp+260h] [rbp-118h]
  char v59[58]; // [rsp+270h] [rbp-108h] BYREF
  __int128 v60; // [rsp+2AAh] [rbp-CEh]
  __int16 v61; // [rsp+2BAh] [rbp-BEh]
  __int128 v62; // [rsp+2BCh] [rbp-BCh]
  int v63; // [rsp+2CCh] [rbp-ACh]
  int v64; // [rsp+2D0h] [rbp-A8h]
  int v65; // [rsp+2D4h] [rbp-A4h]
  unsigned __int16 v66; // [rsp+2E8h] [rbp-90h]
  __int64 v67; // [rsp+2ECh] [rbp-8Ch]
  int v68; // [rsp+2F4h] [rbp-84h]
  int v69; // [rsp+2F8h] [rbp-80h]
  int v70; // [rsp+2FCh] [rbp-7Ch]
  int v71; // [rsp+304h] [rbp-74h]
  _QWORD v72[8]; // [rsp+310h] [rbp-68h] BYREF

  memset(v72, 0, sizeof(v72));
  EtwActivityIdControl(3u, (LPGUID)&v72[1]);
  v72[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v72[3]) = 22;
  v2 = 0;
  Win32kDriverObject = 0;
  v4 = 0;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v43 = gMouseTrails + 1;
  v5 = 0LL;
  v6 = 0;
  RemoteContext = GreGetRemoteContext();
  if ( PsGetCurrentProcess(v8) != gpepCSRSS )
    return 3221225506LL;
  gdwHydraHint |= 0x20u;
  v9 = (_OWORD *)a1;
  if ( a1 + 304 < a1 || a1 + 304 > W32UserProbeAddress )
    v9 = (_OWORD *)W32UserProbeAddress;
  v10 = v48;
  v11 = 2LL;
  do
  {
    *v10 = *v9;
    v10[1] = v9[1];
    v10[2] = v9[2];
    v10[3] = v9[3];
    v10[4] = v9[4];
    v10[5] = v9[5];
    v10[6] = v9[6];
    v10 += 8;
    *(v10 - 1) = v9[7];
    v9 += 8;
    --v11;
  }
  while ( v11 );
  *v10 = *v9;
  v10[1] = v9[1];
  v10[2] = v9[2];
  v12 = &v49;
  v13 = v48;
  v14 = 2LL;
  do
  {
    *(_OWORD *)v12 = *v13;
    *((_OWORD *)v12 + 1) = v13[1];
    *((_OWORD *)v12 + 2) = v13[2];
    *((_OWORD *)v12 + 3) = v13[3];
    *((_OWORD *)v12 + 4) = v13[4];
    *((_OWORD *)v12 + 5) = v13[5];
    *((_OWORD *)v12 + 6) = v13[6];
    v12 += 128;
    *((_OWORD *)v12 - 1) = v13[7];
    v13 += 8;
    --v14;
  }
  while ( v14 );
  *(_OWORD *)v12 = *v13;
  *((_OWORD *)v12 + 1) = v13[1];
  *((_OWORD *)v12 + 2) = v13[2];
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
  v15 = wcschr(gstrBaseWinStationName, 0x23u);
  if ( v15 )
    *v15 = 0;
  if ( gProtocolType )
  {
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v40, 0);
    v16 = gpsi;
    if ( !v40 )
    {
      *(_DWORD *)(gpsi + 2220LL) &= ~4u;
      goto LABEL_16;
    }
  }
  else
  {
    v16 = gpsi;
  }
  *(_DWORD *)(v16 + 2220) |= 4u;
LABEL_16:
  v17 = *(_QWORD *)(RemoteContext + 40);
  if ( v17 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(v17 + 2 * v18) );
    v6 = v18 + 1;
    v19 = (void *)Win32AllocPoolWithQuota(2LL * v6, 2020897621LL);
    v5 = v19;
    if ( !v19 )
    {
      Win32kDriverObject = -1073741801;
      v20 = 0;
      v21 = 0;
      goto LABEL_69;
    }
    memmove(v19, *(const void **)(RemoteContext + 40), 2LL * v6);
    v2 = 0;
  }
  if ( !gVideoFileObject && ghRemoteVideoChannel )
  {
    Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v45, 0LL);
    if ( Win32kDriverObject >= 0 )
    {
      gVideoFileObject = v45;
      IoGetRelatedDeviceObject((PFILE_OBJECT)v45);
      Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v46, 0LL);
      gThinwireFileObject = v46;
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
  else if ( !ghRemoteVideoChannel
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
  if ( Win32kDriverObject < 0 )
    goto LABEL_112;
  if ( ghRemoteBeepChannel )
  {
    Win32kDriverObject = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &Object, 0LL);
    gpRemoteBeepDevice = Object;
    v2 = 0;
  }
  if ( Win32kDriverObject < 0 )
    goto LABEL_112;
  if ( gnShadowers )
    xxxRemoteStopScreenUpdates();
  if ( v66 != gPreviousProtocolType && gPreviousProtocolType )
  {
    if ( !v5 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, v6 - 1, v5) )
    {
      Win32kDriverObject = xxxRemoteSetDisconnectDisplayMode(
                             grpdeskRitInput,
                             gProtocolType,
                             (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v72);
      if ( Win32kDriverObject < 0 )
      {
LABEL_112:
        v20 = 0;
        v21 = 0;
        goto LABEL_68;
      }
      if ( *(_DWORD *)(a1 + 288) )
        DrvCloseRemoteGraphicsDevices();
      if ( !v5 || (unsigned int)GreMultiUserSetDisplayDriverName(RemoteContext, 8LL, v59) )
        goto LABEL_41;
    }
    Win32kDriverObject = -1073741823;
    goto LABEL_112;
  }
LABEL_41:
  SetProtocolType(v66);
  v20 = 1;
  v21 = 1;
  if ( gProtocolType )
  {
    if ( gProtocolType == gPreviousProtocolType )
    {
      Win32kDriverObject = GreDrvReconnect(RemoteContext);
      LOBYTE(v2) = Win32kDriverObject >= 0;
      v39 = v2;
      v22 = 0;
    }
    else
    {
      v22 = 1;
      Win32kDriverObject = GreDrvConnect(RemoteContext);
      v39 = Win32kDriverObject >= 0;
    }
  }
  else
  {
    v22 = 1;
    Win32kDriverObject = DrvOpenLocalGraphicsDevices();
    if ( Win32kDriverObject < 0 )
    {
      v20 = 0;
      goto LABEL_68;
    }
    v42 = 1;
  }
  if ( !(unsigned int)DrvSetGraphicsDevices(v59, gProtocolType) )
  {
    if ( gnShadowers )
      RemoteRedrawScreen(v24, v23, 0LL);
    Win32kDriverObject = -1073741823;
    goto LABEL_68;
  }
  if ( v69 || (v26 = *(_WORD **)&gPreviousProtocolType, gProtocolType != gPreviousProtocolType) || v70 )
  {
    if ( v70 || (v25 = 0, !gProtocolType) )
      v25 = 256;
    LOBYTE(v38) = 0;
    Win32kDriverObject = xxxUserSetDisplayConfig(
                           0LL,
                           0LL,
                           0LL,
                           0LL,
                           v25 | 0x88Fu,
                           2,
                           0,
                           gspdeskShouldBeForeground,
                           v38,
                           0LL,
                           0LL,
                           v72);
    if ( Win32kDriverObject < 0 )
      goto LABEL_68;
    v26 = *(_WORD **)&gPreviousProtocolType;
  }
  else
  {
    v20 = 0;
  }
  if ( gProtocolType )
  {
    if ( v22
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
    if ( *v26 )
      RemoveInputDevices();
    if ( !gpWin32kDriverObject )
      Win32kDriverObject = GetWin32kDriverObject();
    AttachInputDevices(1LL);
    xxxUserReinitializeAutoRotation();
    if ( gdwInAtomicOperation )
    {
      v27 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v27, gdwInAtomicOperation);
    RegisterCDROMNotify();
    v41 = 1;
    EnterCrit(0LL, 1LL);
  }
  RemoteRedrawScreen(v29, v28, v30);
  if ( v20 && !gProtocolType && gbSnapShotWindowsAndMonitors )
    xxxRestoreDesktopsMonitorsAndWindowsRects(*(_QWORD *)(grpdeskIODefault + 24LL), gWndsMonitorSnapshotHead);
  InitKeyboard();
  UpdateKeyLights(0);
  SetPointer(1);
  if ( ((gCursorSuppressionState - 1) & 0xFFFFFFFB) != 0 )
    TransitionCursorSuppressionState(2, 0);
  SetConnectedState(1LL, gbConnectCompleted);
  if ( gProtocolType )
  {
    FastGetProfileIntW(0LL, 39LL, L"CursorBlinkEnable", 0LL, &v40, 0);
    v31 = gpsi;
    if ( !v40 )
    {
      *(_DWORD *)(gpsi + 2220LL) &= ~4u;
      goto LABEL_67;
    }
  }
  else
  {
    v31 = gpsi;
  }
  *(_DWORD *)(v31 + 2220) |= 4u;
LABEL_67:
  DrvGetRemoteDeviceCount();
  _guard_dispatch_icall_fptr();
  LOBYTE(v32) = gProtocolType == 0;
  LOBYTE(v33) = 1;
  CitSessionConnectChange(v33, v32);
  v20 = 1;
LABEL_68:
  v4 = v39;
LABEL_69:
  SetMouseTrails(v43);
  v34 = Win32kDriverObject == 0;
  if ( Win32kDriverObject < 0 )
  {
    if ( v4 )
      GreDrvDisconnect(RemoteContext);
    v34 = Win32kDriverObject == 0;
  }
  if ( v34 && !gProtocolType )
    RtlSetActiveConsoleId(gSessionId);
  if ( Win32kDriverObject < 0 )
    CleanupRemoteHandles(RemoteContext);
  SetConsoleSwitchInProgress(0LL);
  if ( Win32kDriverObject < 0 )
  {
    gbRemoteFxSession = v44;
    *(_DWORD *)(RemoteContext + 64) = v44;
    if ( v41 )
      UnregisterDeviceClassNotifications();
    if ( v42 )
      DrvCloseLocalGraphicsDevices();
    if ( v21 )
      SetProtocolType(gProtocolType);
    if ( v20 )
      DrvSetGraphicsDevices(v59, gProtocolType);
  }
  if ( v5 )
    Win32FreePool(v5, v35, v36);
  if ( !Win32kDriverObject )
  {
    if ( gProtocolType )
      DrvEscapeRemoteDrivers(*(_QWORD *)(gpDispInfo + 8LL), gProtocolType, *(_QWORD *)(RemoteContext + 40), 6LL, 0LL, 0);
  }
  DrvOcclusionStateChangeNotify();
  return (unsigned int)Win32kDriverObject;
}
