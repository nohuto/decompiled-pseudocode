/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C00542E4
 * Callers:
 *     NtUserInitialize @ 0x1C0051920 (NtUserInitialize.c)
 * Callees:
 *     LW_BrushInit_0 @ 0x1C0001B40 (LW_BrushInit_0.c)
 *     IsxxxSystemParametersInfoSupported_0 @ 0x1C00026B8 (IsxxxSystemParametersInfoSupported_0.c)
 *     xxxSystemParametersInfo_0 @ 0x1C00029A8 (xxxSystemParametersInfo_0.c)
 *     IsInitRimClientSupported_0 @ 0x1C00029B0 (IsInitRimClientSupported_0.c)
 *     InitRimClient_0 @ 0x1C00029B8 (InitRimClient_0.c)
 *     CreateKernelEvent @ 0x1C000D450 (CreateKernelEvent.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C005499C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     FastGetProfileDwordW @ 0x1C00550B0 (FastGetProfileDwordW.c)
 *     FastGetProfileIntFromID @ 0x1C0055720 (FastGetProfileIntFromID.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0055E90 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     InitLoadResources @ 0x1C0056CFC (InitLoadResources.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C00823A8 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     InitVideo @ 0x1C0089318 (InitVideo.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00897F4 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00898A4 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C00B9714 (-DrvDriverFailure@@YAJXZ.c)
 *     InitCreateObjectDirectory @ 0x1C01569A8 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  __int64 v0; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rdi
  int v5; // ecx
  LARGE_INTEGER v6; // rbx
  int v7; // r8d
  int ObjectDirectory; // ebx
  int v9; // eax
  int v10; // ecx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-39h]
  int v13; // [rsp+38h] [rbp-29h]
  PVOID MappedBase; // [rsp+40h] [rbp-21h] BYREF
  PVOID Object; // [rsp+48h] [rbp-19h] BYREF
  __int64 InputBuffer; // [rsp+50h] [rbp-11h] BYREF
  __int64 v17[8]; // [rsp+58h] [rbp-9h] BYREF

  memset(v17, 0, sizeof(v17));
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v17[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[3]) = 28;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v0);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v2 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v4 = PsGetCurrentThreadWin32Thread(v3);
  if ( v4 )
  {
    v6 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v4 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
      && (qword_1C0118B10 & 0x200000010000000LL) != 0
      && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18
      && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
    {
      LOBYTE(v5) = byte_1C0118B28 - 1;
      Template_xqx(v5, (unsigned int)&AcquiredExclusiveUserCritEvent, v7, v6.LowPart, 0, gullUserCritAcquireToken);
    }
    if ( v6.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
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
      goto LABEL_32;
    }
    if ( gbRemoteSession && !gbFirstInteractiveSession )
      goto LABEL_17;
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
      if ( !InitVideo((__int64)v17) )
      {
        ObjectDirectory = DrvDriverFailure();
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_32;
      }
      MmUnmapViewInSessionSpace(MappedBase);
      ObfDereferenceObject(Object);
      gbVideoInitialized = 1;
      InputBuffer = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
LABEL_17:
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
          v9 = gbRemoteSession;
          if ( !gbRemoteSession || (v10 = gbFirstInteractiveSession) != 0 )
          {
            LW_BrushInit_0();
            v9 = gbRemoteSession;
            v10 = gbFirstInteractiveSession;
          }
          if ( !gbSetupDPIInitialized && v9 && v10 )
            SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17);
          InitLoadResources(0LL);
          FastGetProfileDwordW(0LL, 51LL, L"ConvertibleSlateMode");
          if ( v13 )
            *((_DWORD *)gpsi + 555) |= 8u;
          else
            *((_DWORD *)gpsi + 555) &= ~8u;
          FastGetProfileDwordW(0LL, 51LL, L"SystemDockMode");
          if ( v13 )
            *((_DWORD *)gpsi + 555) |= 0x10u;
          else
            *((_DWORD *)gpsi + 555) &= ~0x10u;
          if ( (int)IsInitRimClientSupported_0() >= 0 )
            ObjectDirectory = InitRimClient_0();
        }
      }
    }
  }
LABEL_32:
  UserSessionSwitchLeaveCrit();
  return (unsigned int)ObjectDirectory;
}
