/*
 * XREFs of xxxRemoteConnect @ 0x1C00B1960
 * Callers:
 *     <none>
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B10 (IsRemoteConnection_0.c)
 *     IsxxxRemoteConsoleShadowStartSupported_0 @ 0x1C0001B28 (IsxxxRemoteConsoleShadowStartSupported_0.c)
 *     xxxRemoteConsoleShadowStart_0 @ 0x1C0001B30 (xxxRemoteConsoleShadowStart_0.c)
 *     IsLW_BrushInitSupported_0 @ 0x1C0001B38 (IsLW_BrushInitSupported_0.c)
 *     LW_BrushInit_0 @ 0x1C0001B40 (LW_BrushInit_0.c)
 *     IsxxxUserReinitializeAutoRotationSupported_0 @ 0x1C0001B48 (IsxxxUserReinitializeAutoRotationSupported_0.c)
 *     xxxUserReinitializeAutoRotation_0 @ 0x1C0001B50 (xxxUserReinitializeAutoRotation_0.c)
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     FastGetProfileIntW @ 0x1C0055910 (FastGetProfileIntW.c)
 *     InitLoadResources @ 0x1C0056CFC (InitLoadResources.c)
 *     GreDeviceIoControlEx @ 0x1C005FB00 (GreDeviceIoControlEx.c)
 *     SetProtocolType @ 0x1C00705B0 (SetProtocolType.c)
 *     SetConnectedState @ 0x1C0070A10 (SetConnectedState.c)
 *     SetConnectCompletedState @ 0x1C0070A30 (SetConnectCompletedState.c)
 *     SetConsoleSwitchInProgress @ 0x1C0081640 (SetConsoleSwitchInProgress.c)
 *     CleanupRemoteHandles @ 0x1C00825D0 (CleanupRemoteHandles.c)
 *     GreDxgkSessionConnected @ 0x1C0082D08 (GreDxgkSessionConnected.c)
 *     GreMultiUserInitSession @ 0x1C0087E20 (GreMultiUserInitSession.c)
 *     DrvEscapeRemoteDrivers @ 0x1C0088D80 (DrvEscapeRemoteDrivers.c)
 *     InitVideo @ 0x1C0089318 (InitVideo.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     GreDrvConnect @ 0x1C00C0F00 (GreDrvConnect.c)
 */

__int64 __fastcall xxxRemoteConnect(__int64 a1, int a2, unsigned __int16 *a3, __int64 a4)
{
  int v8; // ebx
  __int64 result; // rax
  wchar_t *v10; // rax
  int v11; // ebp
  _DWORD *v12; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  bool v14; // zf
  struct _KTIMER *v15; // rax
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF

  v8 = 0;
  if ( !*(_DWORD *)a1 )
  {
    gdwHydraHint |= 8u;
    if ( gfSessionSwitchBlock )
      return 3221225473LL;
    SetConsoleSwitchInProgress(1);
    *(_QWORD *)&gpThinWireCache = &ThinWireCache;
    ghRemoteMouseChannel = *(_QWORD *)(a1 + 48);
    gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
    gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
    ghRemoteVideoChannel = *(HANDLE *)(a1 + 32);
    ghRemoteBeepChannel = *(HANDLE *)(a1 + 40);
    ghRemoteKeyboardChannel = *(_QWORD *)(a1 + 56);
    ghRemoteThinwireChannel = *(HANDLE *)(a1 + 64);
    SetProtocolType(*(_WORD *)(a1 + 264));
    WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = *(_WORD *)(a1 + 264);
    gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
    dword_1C011A440 = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    gRemotePreviousMonitorsCount = gRemoteNumMonitors;
    *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
    xmmword_1C011A418 = *(_OWORD *)(a1 + 178);
    qword_1C011A428 = *(_QWORD *)(a1 + 194);
    gWinStationInfo = *(_OWORD *)(a1 + 202);
    word_1C011A3F0 = *(_WORD *)(a1 + 218);
    xmmword_1C011A3F4 = *(_OWORD *)(a1 + 220);
    dword_1C011A404 = *(_DWORD *)(a1 + 236);
    memset(&gstrBaseWinStationName, 0, 0x40uLL);
    *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
    xmmword_1C011A3B0 = *(_OWORD *)(a1 + 96);
    xmmword_1C011A3C0 = *(_OWORD *)(a1 + 112);
    xmmword_1C011A3D0 = *(_OWORD *)(a1 + 128);
    v10 = wcschr(&gstrBaseWinStationName, 0x23u);
    if ( v10 )
      *v10 = 0;
    v11 = gbRemoteFxSession;
    gbRemoteFxSession = *(_DWORD *)(a1 + 292);
    dword_1C011BC70 = *(_DWORD *)(a1 + 292);
    if ( *(_DWORD *)(a1 + 292) )
      qword_1C011BC74 = *(_QWORD *)(a1 + 296);
    SetConnectedState(1, gbConnectCompleted);
    if ( (unsigned int)IsRemoteConnection_0() )
    {
      FastGetProfileIntW(0LL, 39LL, (__int64)L"CursorBlinkEnable", 0, (ULONG *)&Object, 0);
      v12 = gpsi;
      if ( !(_DWORD)Object )
      {
        *((_DWORD *)gpsi + 555) &= ~4u;
        goto LABEL_15;
      }
    }
    else
    {
      v12 = gpsi;
    }
    v12[555] |= 4u;
LABEL_15:
    if ( gVideoFileObject )
    {
      if ( ghRemoteVideoChannel )
        goto LABEL_28;
    }
    else if ( ghRemoteVideoChannel )
    {
      v8 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &Object, 0LL);
      if ( v8 < 0 )
        goto LABEL_41;
      gVideoFileObject = Object;
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      v8 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &Object, 0LL);
      gThinwireFileObject = Object;
      if ( v8 < 0 )
        goto LABEL_41;
      if ( !(unsigned int)GreMultiUserInitSession(
                            (__int64)&gRemoteContext,
                            (__int64)ghRemoteThinwireChannel,
                            *(__int64 *)&gpThinWireCache,
                            gRemoteNumMonitors,
                            gRemotePrimaryMonitor,
                            (__int64)gVideoFileObject,
                            (__int64)Object,
                            a2,
                            a3,
                            19,
                            &gRemoteDisplayDeviceName) )
      {
LABEL_20:
        v8 = -1073741823;
LABEL_51:
        gbRemoteFxSession = v11;
        dword_1C011BC70 = v11;
        CleanupRemoteHandles(&gRemoteContext);
LABEL_52:
        SetConsoleSwitchInProgress(0);
        return (unsigned int)v8;
      }
      if ( (unsigned int)IsRemoteConnection_0() )
      {
        v8 = GreDeviceIoControlEx(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, &Object, 0);
        if ( v8 < 0 )
          goto LABEL_41;
        v8 = GreDrvConnect(&gRemoteContext);
      }
      goto LABEL_27;
    }
    if ( !(unsigned int)GreMultiUserInitSession(
                          (__int64)&gRemoteContext,
                          (__int64)ghRemoteThinwireChannel,
                          *(__int64 *)&gpThinWireCache,
                          gRemoteNumMonitors,
                          gRemotePrimaryMonitor,
                          (__int64)gVideoFileObject,
                          (__int64)gThinwireFileObject,
                          a2,
                          a3,
                          19,
                          &gRemoteDisplayDeviceName) )
    {
      v8 = -1073741823;
LABEL_27:
      v14 = v8 == 0;
      if ( v8 < 0 )
        goto LABEL_42;
    }
LABEL_28:
    if ( ghRemoteBeepChannel )
    {
      v8 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &Object, 0LL);
      gpRemoteBeepDevice = Object;
    }
    v14 = v8 == 0;
    if ( v8 < 0 )
    {
LABEL_42:
      if ( v14 )
      {
        if ( !gProtocolType )
          RtlSetActiveConsoleId((unsigned int)gSessionId);
        if ( (int)IsxxxUserReinitializeAutoRotationSupported_0() >= 0 )
          xxxUserReinitializeAutoRotation_0();
        if ( (unsigned int)IsRemoteConnection_0() )
          DrvEscapeRemoteDrivers(
            *(_QWORD *)(gpDispInfo + 8),
            (unsigned __int16)gProtocolType,
            (__int64)qword_1C011BC58,
            6u,
            0LL,
            0);
        SetConnectCompletedState(1);
      }
      if ( v8 >= 0 )
        goto LABEL_52;
      goto LABEL_51;
    }
    if ( !gbRemoteSession || gbVideoInitialized )
    {
      IsRemoteConnection_0();
      GreDxgkSessionConnected();
      v8 = 0;
    }
    else
    {
      if ( !InitVideo(a4) )
      {
        SetConnectedState(0, 0);
        goto LABEL_20;
      }
      if ( (int)IsLW_BrushInitSupported_0() >= 0 && !(unsigned int)LW_BrushInit_0()
        || (InitLoadResources(0), v15 = (struct _KTIMER *)Win32AllocPoolNonPaged(), (gptmrWD = v15) == 0LL) )
      {
        v8 = -1073741801;
        goto LABEL_51;
      }
      KeInitializeTimerEx(v15, SynchronizationTimer);
      IsRemoteConnection_0();
      GreDxgkSessionConnected();
      gbVideoInitialized = 1;
    }
LABEL_41:
    v14 = v8 == 0;
    goto LABEL_42;
  }
  result = IsxxxRemoteConsoleShadowStartSupported_0();
  if ( (int)result >= 0 )
    return xxxRemoteConsoleShadowStart_0();
  return result;
}
