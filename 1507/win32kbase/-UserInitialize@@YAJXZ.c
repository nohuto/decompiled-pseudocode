/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C007C5BC
 * Callers:
 *     NtUserInitialize @ 0x1C007A990 (NtUserInitialize.c)
 * Callees:
 *     LW_BrushInit_0 @ 0x1C0001B50 (LW_BrushInit_0.c)
 *     IsxxxSystemParametersInfoSupported_0 @ 0x1C00026E8 (IsxxxSystemParametersInfoSupported_0.c)
 *     xxxSystemParametersInfo_0 @ 0x1C0002978 (xxxSystemParametersInfo_0.c)
 *     IsInitRimClientSupported_0 @ 0x1C0002980 (IsInitRimClientSupported_0.c)
 *     InitRimClient_0 @ 0x1C0002988 (InitRimClient_0.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000F670 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00134A0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     CreateKernelEvent @ 0x1C0016C90 (CreateKernelEvent.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     InitLoadResources @ 0x1C00594A8 (InitLoadResources.c)
 *     FastGetProfileDwordW @ 0x1C007CAF0 (FastGetProfileDwordW.c)
 *     FastGetProfileIntFromID @ 0x1C007CC90 (FastGetProfileIntFromID.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C007D740 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     InitVideo @ 0x1C007D7D8 (InitVideo.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007E44C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0085524 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJXZ @ 0x1C0085664 (-SetDPIinSetup@@YAJXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     Win32UnmapViewInSessionSpace @ 0x1C00A6A78 (Win32UnmapViewInSessionSpace.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00AB514 (-DrvDriverFailure@@YAJXZ.c)
 *     InitCreateObjectDirectory @ 0x1C0139944 (InitCreateObjectDirectory.c)
 */

__int64 __fastcall UserInitialize(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rbx
  struct tagTHREADINFO **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID v6; // rcx
  __int64 v7; // rsi
  int v8; // ecx
  LARGE_INTEGER v9; // rdi
  int v10; // r8d
  int ObjectDirectory; // ebx
  int v12; // eax
  int v13; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+70h] [rbp+38h]
  PVOID MappedBase; // [rsp+78h] [rbp+40h] BYREF
  PVOID Object; // [rsp+80h] [rbp+48h] BYREF
  __int64 InputBuffer; // [rsp+88h] [rbp+50h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = 0LL;
  while ( 1 )
  {
    v3 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v3 )
      v2 = *v3;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess(v5, v4) == gpepCSRSS && v2 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( gbRITBlockedOnDIT )
    {
      if ( v2 == gptiRit )
        break;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v6 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v2 == gptiRit )
        break;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v6 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v6, UserRequest, 0, 0, 0LL);
  }
  v7 = PsGetCurrentThreadWin32Thread(v5);
  if ( v7 )
  {
    v9 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v7 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
      && (qword_1C00FEA40 & 0x200000010000000LL) != 0
      && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v8) = byte_1C00FEA58 - 1;
      Template_xqx(v8, (unsigned int)&AcquiredExclusiveUserCritEvent, v10, v9.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v9.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v10,
        0,
        1000 * v9.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v7 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v2;
  gbValidateHandleForIL = 1;
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  if ( gbRemoteSession )
  {
    LODWORD(Timeout) = gSessionId;
    RtlStringCchPrintfW(
      szWindowStationDirectory,
      0x100uLL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      Timeout,
      L"\\Windows\\WindowStations");
  }
  else
  {
    RtlStringCchCopyW((char *)szWindowStationDirectory, 256LL, (char *)L"\\Windows\\WindowStations");
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    gpEventPnPWainting = (__int64)CreateKernelEvent(SynchronizationEvent, 1u);
    if ( !gpEventPnPWainting
      || (FastGetProfileIntFromID(0LL, 39LL, 616LL, 1LL, &gbSnapShotWindowsAndMonitors, 0),
          FastGetProfileIntFromID(0LL, 52LL, 623LL, 5000LL, &gdwWaitToKillServiceTimeout, 0),
          *((_DWORD *)gpsi + 555) |= 4u,
          (gpEventDiconnectDesktop = (__int64)CreateKernelEvent(SynchronizationEvent, 0)) == 0) )
    {
      ObjectDirectory = -1073741801;
      goto LABEL_66;
    }
    if ( gbRemoteSession && !gbFirstInteractiveSession )
      goto LABEL_45;
    gbUsingDefaultSectionSize = 0;
    ObjectDirectory = ReserveUserSessionViewsWorker(&Object, &MappedBase);
    if ( ObjectDirectory < 0 )
    {
      gdwNOIOSectionSize = 128;
      gdwDesktopSectionSize = 512;
      gbUsingDefaultSectionSize = 1;
      ObjectDirectory = ReserveUserSessionViewsWorker(&Object, &MappedBase);
    }
    if ( ObjectDirectory >= 0 )
    {
      if ( !InitVideo() )
      {
        ObjectDirectory = DrvDriverFailure();
        Win32UnmapViewInSessionSpace(MappedBase);
        CompositionObject::Release(Object);
        goto LABEL_66;
      }
      Win32UnmapViewInSessionSpace(MappedBase);
      CompositionObject::Release(Object);
      gbVideoInitialized = 1;
      InputBuffer = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
LABEL_45:
      gbUserInitialized = 1;
      ObjectDirectory = xxxCreateThreadInfo(KeGetCurrentThread());
      if ( ObjectDirectory >= 0 )
      {
        if ( giDelayedPowerTimeout )
        {
          if ( (int)IsxxxSystemParametersInfoSupported_0() >= 0 )
          {
            xxxSystemParametersInfo_0();
            xxxSystemParametersInfo_0();
          }
          giDelayedPowerTimeout = 0;
        }
        ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
        if ( ObjectDirectory >= 0 )
        {
          v12 = gbRemoteSession;
          if ( !gbRemoteSession || (v13 = gbFirstInteractiveSession) != 0 )
          {
            LW_BrushInit_0();
            v12 = gbRemoteSession;
            v13 = gbFirstInteractiveSession;
          }
          if ( !gbSetupDPIInitialized && v12 && v13 )
            SetDPIinSetup();
          InitLoadResources(0LL);
          FastGetProfileDwordW(0LL, 2LL, L"MouseInPointerAutoOptIn");
          FastGetProfileDwordW(0LL, 51LL, L"ConvertibleSlateMode");
          if ( v16 )
            *((_DWORD *)gpsi + 555) |= 8u;
          else
            *((_DWORD *)gpsi + 555) &= ~8u;
          FastGetProfileDwordW(0LL, 51LL, L"SystemDockMode");
          if ( v16 )
            *((_DWORD *)gpsi + 555) |= 0x10u;
          else
            *((_DWORD *)gpsi + 555) &= ~0x10u;
          if ( (int)IsInitRimClientSupported_0() >= 0 )
            ObjectDirectory = InitRimClient_0();
        }
      }
    }
  }
LABEL_66:
  UserSessionSwitchLeaveCrit();
  return (unsigned int)ObjectDirectory;
}
