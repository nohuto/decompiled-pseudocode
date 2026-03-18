/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C006A144
 * Callers:
 *     NtUserInitialize @ 0x1C007DC70 (NtUserInitialize.c)
 * Callees:
 *     LW_BrushInit_0 @ 0x1C0001B70 (LW_BrushInit_0.c)
 *     IsxxxSystemParametersInfoSupported_0 @ 0x1C0002708 (IsxxxSystemParametersInfoSupported_0.c)
 *     xxxSystemParametersInfo_0 @ 0x1C0002998 (xxxSystemParametersInfo_0.c)
 *     IsInitRimClientSupported_0 @ 0x1C00029A0 (IsInitRimClientSupported_0.c)
 *     InitRimClient_0 @ 0x1C00029A8 (InitRimClient_0.c)
 *     CreateKernelEvent @ 0x1C0011650 (CreateKernelEvent.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     InitVideo @ 0x1C0061E88 (InitVideo.c)
 *     FastGetProfileDwordW @ 0x1C006AB50 (FastGetProfileDwordW.c)
 *     InitLoadResources @ 0x1C006B5DC (InitLoadResources.c)
 *     FastGetProfileIntFromID @ 0x1C006C7D0 (FastGetProfileIntFromID.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00715F0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0071664 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C007E85C (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0088584 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJXZ @ 0x1C0088654 (-SetDPIinSetup@@YAJXZ.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00AFA14 (-DrvDriverFailure@@YAJXZ.c)
 *     InitCreateObjectDirectory @ 0x1C013C89C (InitCreateObjectDirectory.c)
 */

__int64 __fastcall UserInitialize(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // ecx
  LARGE_INTEGER v6; // rbx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  int ObjectDirectory; // ebx
  int v11; // eax
  int v12; // ecx
  ULONG OutputBufferLength[2]; // [rsp+20h] [rbp-18h]
  int v15; // [rsp+70h] [rbp+38h]
  PVOID MappedBase; // [rsp+78h] [rbp+40h] BYREF
  PVOID Object; // [rsp+80h] [rbp+48h] BYREF
  __int64 InputBuffer; // [rsp+88h] [rbp+50h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v4 = PsGetCurrentThreadWin32Thread(v3);
  if ( v4 )
  {
    v6 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v4 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
      && (qword_1C01020B0 & 0x200000010000000LL) != 0
      && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v5) = byte_1C01020C8 - 1;
      Template_xqx(v5, (unsigned int)&AcquiredExclusiveUserCritEvent, v7, v6.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v6.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      Template_xqx(
        gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v7,
        0,
        1000 * v6.QuadPart / gliQpcFreq.QuadPart,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v4 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gdwHydraHint |= 2u;
  gptiCurrent = v2;
  gbValidateHandleForIL = 1;
  if ( gbRemoteSession )
  {
    OutputBufferLength[0] = gSessionId;
    RtlStringCchPrintfW(
      szWindowStationDirectory,
      0x100uLL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      *(_QWORD *)OutputBufferLength,
      L"\\Windows\\WindowStations");
  }
  else
  {
    RtlStringCchCopyW(szWindowStationDirectory, 0x100uLL, L"\\Windows\\WindowStations");
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
      goto LABEL_50;
    }
    if ( gbRemoteSession && !gbFirstInteractiveSession )
      goto LABEL_29;
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
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_50;
      }
      MmUnmapViewInSessionSpace(MappedBase);
      ObfDereferenceObject(Object);
      gbVideoInitialized = 1;
      InputBuffer = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
LABEL_29:
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
          v11 = gbRemoteSession;
          if ( !gbRemoteSession || (v12 = gbFirstInteractiveSession) != 0 )
          {
            LW_BrushInit_0();
            v11 = gbRemoteSession;
            v12 = gbFirstInteractiveSession;
          }
          if ( !gbSetupDPIInitialized && v11 && v12 )
            SetDPIinSetup();
          InitLoadResources(0LL);
          FastGetProfileDwordW(0LL, 2LL, L"MouseInPointerAutoOptIn");
          FastGetProfileDwordW(0LL, 51LL, L"ConvertibleSlateMode");
          if ( v15 )
            *((_DWORD *)gpsi + 555) |= 8u;
          else
            *((_DWORD *)gpsi + 555) &= ~8u;
          FastGetProfileDwordW(0LL, 51LL, L"SystemDockMode");
          if ( v15 )
            *((_DWORD *)gpsi + 555) |= 0x10u;
          else
            *((_DWORD *)gpsi + 555) &= ~0x10u;
          if ( (int)IsInitRimClientSupported_0() >= 0 )
            ObjectDirectory = InitRimClient_0();
        }
      }
    }
  }
LABEL_50:
  UserSessionSwitchLeaveCrit(v9, v8);
  return (unsigned int)ObjectDirectory;
}
