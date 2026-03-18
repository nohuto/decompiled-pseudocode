/*
 * XREFs of RemoteConnect @ 0x1C00628B0
 * Callers:
 *     <none>
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B40 (IsRemoteConnection_0.c)
 *     IsxxxRemoteConsoleShadowStartSupported_0 @ 0x1C0001B58 (IsxxxRemoteConsoleShadowStartSupported_0.c)
 *     xxxRemoteConsoleShadowStart_0 @ 0x1C0001B60 (xxxRemoteConsoleShadowStart_0.c)
 *     IsLW_BrushInitSupported_0 @ 0x1C0001B68 (IsLW_BrushInitSupported_0.c)
 *     LW_BrushInit_0 @ 0x1C0001B70 (LW_BrushInit_0.c)
 *     IsxxxUserReinitializeAutoRotationSupported_0 @ 0x1C0001B78 (IsxxxUserReinitializeAutoRotationSupported_0.c)
 *     xxxUserReinitializeAutoRotation_0 @ 0x1C0001B80 (xxxUserReinitializeAutoRotation_0.c)
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     GreDeviceIoControlEx @ 0x1C0061C70 (GreDeviceIoControlEx.c)
 *     InitVideo @ 0x1C0061E88 (InitVideo.c)
 *     SetConsoleSwitchInProgress @ 0x1C0062CD0 (SetConsoleSwitchInProgress.c)
 *     GreMultiUserInitSession @ 0x1C0062D30 (GreMultiUserInitSession.c)
 *     SetConnectedState @ 0x1C0062EB0 (SetConnectedState.c)
 *     SetProtocolType @ 0x1C0062ED0 (SetProtocolType.c)
 *     SetConnectCompletedState @ 0x1C0068E20 (SetConnectCompletedState.c)
 *     InitLoadResources @ 0x1C006B5DC (InitLoadResources.c)
 *     FastGetProfileIntW @ 0x1C006C920 (FastGetProfileIntW.c)
 *     CleanupRemoteHandles @ 0x1C007ECC0 (CleanupRemoteHandles.c)
 *     DrvEscapeRemoteDrivers @ 0x1C0087CA0 (DrvEscapeRemoteDrivers.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     GreDrvConnect @ 0x1C00B6320 (GreDrvConnect.c)
 */

__int64 __fastcall RemoteConnect(__int64 a1, int a2, unsigned __int16 *a3)
{
  int v6; // ebx
  wchar_t *v7; // rax
  int v8; // ebp
  _DWORD *v9; // rax
  bool v10; // zf
  struct _KTIMER *v11; // rax
  __int64 result; // rax
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  PVOID v14; // [rsp+60h] [rbp-48h] BYREF
  PVOID v15; // [rsp+68h] [rbp-40h] BYREF
  PVOID Object; // [rsp+70h] [rbp-38h] BYREF
  int v17; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+20h] BYREF

  v6 = 0;
  if ( !*(_DWORD *)a1 )
  {
    gdwHydraHint |= 8u;
    if ( gfSessionSwitchBlock )
      return 3221225473LL;
    SetConsoleSwitchInProgress(1LL);
    *(_QWORD *)&gpThinWireCache = &ThinWireCache;
    ghRemoteMouseChannel = *(_QWORD *)(a1 + 48);
    gRemoteNumMonitors = *(_DWORD *)(a1 + 20);
    gRemotePrimaryMonitor = *(_DWORD *)(a1 + 24);
    ghRemoteVideoChannel = *(HANDLE *)(a1 + 32);
    ghRemoteBeepChannel = *(HANDLE *)(a1 + 40);
    ghRemoteKeyboardChannel = *(_QWORD *)(a1 + 56);
    ghRemoteThinwireChannel = *(HANDLE *)(a1 + 64);
    SetProtocolType(*(unsigned __int16 *)(a1 + 264));
    WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) = *(_WORD *)(a1 + 264);
    gRemoteClientKeyboardType = *(_QWORD *)(a1 + 268);
    dword_1C0103060 = *(_DWORD *)(a1 + 276);
    gbClientDoubleClickSupport = *(_DWORD *)(a1 + 240);
    gfEnableWindowsKey = *(_DWORD *)(a1 + 244);
    gRemotePreviousMonitorsCount = gRemoteNumMonitors;
    *(_OWORD *)&gRemoteDisplayDeviceName = *(_OWORD *)(a1 + 162);
    xmmword_1C0103038 = *(_OWORD *)(a1 + 178);
    qword_1C0103048 = *(_QWORD *)(a1 + 194);
    gWinStationInfo = *(_OWORD *)(a1 + 202);
    word_1C0103010 = *(_WORD *)(a1 + 218);
    xmmword_1C0103014 = *(_OWORD *)(a1 + 220);
    dword_1C0103024 = *(_DWORD *)(a1 + 236);
    memset(&gstrBaseWinStationName, 0, 0x40uLL);
    *(_OWORD *)&gstrBaseWinStationName = *(_OWORD *)(a1 + 80);
    xmmword_1C0102FD0 = *(_OWORD *)(a1 + 96);
    xmmword_1C0102FE0 = *(_OWORD *)(a1 + 112);
    xmmword_1C0102FF0 = *(_OWORD *)(a1 + 128);
    v7 = wcschr(&gstrBaseWinStationName, 0x23u);
    if ( v7 )
      *v7 = 0;
    v8 = gbRemoteFxSession;
    gbRemoteFxSession = *(_DWORD *)(a1 + 292);
    dword_1C0104870 = *(_DWORD *)(a1 + 292);
    if ( *(_DWORD *)(a1 + 292) )
      qword_1C0104874 = *(_QWORD *)(a1 + 296);
    SetConnectedState(1LL, (unsigned int)gbConnectCompleted);
    if ( (unsigned int)IsRemoteConnection_0() )
    {
      FastGetProfileIntW(0, 39, (unsigned int)L"CursorBlinkEnable", 0, (__int64)&v17, 0);
      v9 = gpsi;
      if ( !v17 )
      {
        *((_DWORD *)gpsi + 555) &= ~4u;
LABEL_10:
        if ( gVideoFileObject )
        {
          if ( ghRemoteVideoChannel )
          {
LABEL_13:
            if ( ghRemoteBeepChannel )
            {
              v6 = ObReferenceObjectByHandle(ghRemoteBeepChannel, 0, 0LL, 0, &Object, 0LL);
              gpRemoteBeepDevice = Object;
            }
            v10 = v6 == 0;
            if ( v6 >= 0 )
            {
              if ( gbVideoInitialized || !gbRemoteSession )
              {
                v6 = 0;
                goto LABEL_23;
              }
              if ( InitVideo() )
              {
                if ( (int)IsLW_BrushInitSupported_0() < 0 || (unsigned int)LW_BrushInit_0() )
                {
                  InitLoadResources(0LL);
                  v11 = (struct _KTIMER *)Win32AllocPoolNonPaged();
                  gptmrWD = v11;
                  if ( v11 )
                  {
                    KeInitializeTimerEx(v11, SynchronizationTimer);
                    gbVideoInitialized = 1;
LABEL_23:
                    v10 = v6 == 0;
                    goto LABEL_24;
                  }
                }
                v6 = -1073741801;
LABEL_56:
                gbRemoteFxSession = v8;
                dword_1C0104870 = v8;
                CleanupRemoteHandles(&gRemoteContext);
LABEL_34:
                SetConsoleSwitchInProgress(0LL);
                return (unsigned int)v6;
              }
              SetConnectedState(0LL, 0LL);
LABEL_49:
              v6 = -1073741823;
              goto LABEL_56;
            }
LABEL_24:
            if ( v10 )
            {
              if ( !gProtocolType && !gServiceSessionId )
                MEMORY[0xFFFFF780000002D8] = gSessionId;
              if ( (int)IsxxxUserReinitializeAutoRotationSupported_0() >= 0 )
                xxxUserReinitializeAutoRotation_0();
              if ( (unsigned int)IsRemoteConnection_0() )
                DrvEscapeRemoteDrivers(
                  *(_QWORD *)(gpDispInfo + 8),
                  (unsigned __int16)gProtocolType,
                  (_DWORD)qword_1C0104858,
                  6,
                  0LL,
                  0);
              SetConnectCompletedState(1LL);
            }
            if ( v6 >= 0 )
              goto LABEL_34;
            goto LABEL_56;
          }
        }
        else if ( ghRemoteVideoChannel )
        {
          v6 = ObReferenceObjectByHandle(ghRemoteVideoChannel, 0, 0LL, 0, &v14, 0LL);
          if ( v6 < 0 )
            goto LABEL_23;
          gVideoFileObject = v14;
          RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v14);
          v6 = ObReferenceObjectByHandle(ghRemoteThinwireChannel, 0, 0LL, 0, &v15, 0LL);
          gThinwireFileObject = v15;
          if ( v6 < 0 )
            goto LABEL_23;
          if ( !(unsigned int)GreMultiUserInitSession(
                                (int)&gRemoteContext,
                                (int)ghRemoteThinwireChannel,
                                gpThinWireCache,
                                gRemoteNumMonitors,
                                gRemotePrimaryMonitor,
                                (__int64)gVideoFileObject,
                                (__int64)v15,
                                a2,
                                a3,
                                19,
                                &gRemoteDisplayDeviceName) )
            goto LABEL_49;
          if ( (unsigned int)IsRemoteConnection_0() )
          {
            v6 = GreDeviceIoControlEx(RelatedDeviceObject, 0x381004u, 0LL, 0, 0LL, 0, &v18, 0);
            if ( v6 < 0 )
              goto LABEL_23;
            v6 = GreDrvConnect(&gRemoteContext);
          }
          goto LABEL_53;
        }
        if ( (unsigned int)GreMultiUserInitSession(
                             (int)&gRemoteContext,
                             (int)ghRemoteThinwireChannel,
                             gpThinWireCache,
                             gRemoteNumMonitors,
                             gRemotePrimaryMonitor,
                             (__int64)gVideoFileObject,
                             (__int64)gThinwireFileObject,
                             a2,
                             a3,
                             19,
                             &gRemoteDisplayDeviceName) )
          goto LABEL_13;
        v6 = -1073741823;
LABEL_53:
        v10 = v6 == 0;
        if ( v6 < 0 )
          goto LABEL_24;
        goto LABEL_13;
      }
    }
    else
    {
      v9 = gpsi;
    }
    v9[555] |= 4u;
    goto LABEL_10;
  }
  result = IsxxxRemoteConsoleShadowStartSupported_0();
  if ( (int)result >= 0 )
    return xxxRemoteConsoleShadowStart_0();
  return result;
}
