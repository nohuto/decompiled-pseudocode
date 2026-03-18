/*
 * XREFs of VideoPortCalloutThread @ 0x1C00A53F4
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C0081520 (xxxCreateSystemThreads.c)
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B20 (IsRemoteConnection_0.c)
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C00021E8 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     xxxSetCsrssThreadDesktop_0 @ 0x1C00021F0 (xxxSetCsrssThreadDesktop_0.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported_0 @ 0x1C00021F8 (IsxxxRestoreCsrssThreadDesktopSupported_0.c)
 *     xxxRestoreCsrssThreadDesktop_0 @ 0x1C0002200 (xxxRestoreCsrssThreadDesktop_0.c)
 *     IsxxxDwmStopRedirectionSupported_0 @ 0x1C0002208 (IsxxxDwmStopRedirectionSupported_0.c)
 *     IsxxxUserResetDisplayDeviceSupported_0 @ 0x1C0002210 (IsxxxUserResetDisplayDeviceSupported_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0002218 (xxxUserResetDisplayDevice_0.c)
 *     IsxxxBroadcastModernAppRedrawSupported_0 @ 0x1C0002220 (IsxxxBroadcastModernAppRedrawSupported_0.c)
 *     xxxBroadcastModernAppRedraw_0 @ 0x1C0002228 (xxxBroadcastModernAppRedraw_0.c)
 *     UpdatePointerDevices_0 @ 0x1C0002230 (UpdatePointerDevices_0.c)
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     PostWinlogonMessage @ 0x1C0019A20 (PostWinlogonMessage.c)
 *     DrvQueryMDEVPowerState @ 0x1C001AE40 (DrvQueryMDEVPowerState.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     _TlgKeywordOn @ 0x1C0057B54 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0057B78 (_TlgWrite.c)
 *     DrvLogDiagDisplayChange @ 0x1C005A240 (DrvLogDiagDisplayChange.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     SafeEnableMDEV @ 0x1C0070960 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0070A00 (SafeDisableMDEV.c)
 *     xxxDwmControl @ 0x1C00802A0 (xxxDwmControl.c)
 *     InitSystemThread @ 0x1C00818B0 (InitSystemThread.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00A44F0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXE@Z @ 0x1C00A5018 (-xxxWaitForVideoPortCalloutReady@@YAXE@Z.c)
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B60D0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvProcessMonitorEventCallback @ 0x1C00BBE04 (DrvProcessMonitorEventCallback.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00BC010 (DrvProcessSetDisplayConfigParameters.c)
 *     DrvUpdateDpiInfoAndNotifyMonitorChange @ 0x1C00BC93C (DrvUpdateDpiInfoAndNotifyMonitorChange.c)
 *     DCompositionForceRender @ 0x1C00D3C30 (DCompositionForceRender.c)
 */

LONG __fastcall VideoPortCalloutThread(__int64 a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rbx
  int inited; // eax
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // rdi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID v12; // rcx
  __int64 v13; // r14
  int v14; // ecx
  LARGE_INTEGER v15; // rsi
  int v16; // r8d
  unsigned int *Param; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  const GUID *v21; // r9
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int MDEVPowerState; // eax
  int v29; // esi
  unsigned int v30; // esi
  int v31; // eax
  int v32; // eax
  LONG v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int pData; // [rsp+30h] [rbp-D8h]
  char v39; // [rsp+58h] [rbp-B0h] BYREF
  int v40; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v41; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Status; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v44[6]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v45; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *p_Status; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  _QWORD *v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  __int64 *v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-18h]
  __int64 *v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]

  v1 = *(struct _VIDEO_WIN32K_CALLBACKS_PARAMS **)a1;
  inited = InitSystemThread(0LL);
  v1->Status = inited;
  if ( inited >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
      if ( v7 )
        v6 = *v7;
      if ( IsCurrentProcessDwm(v9, v8)
        || (PVOID)PsGetCurrentProcess(v11, v10) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v6 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v12 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v6 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeavePriorityRegion(gpresUser);
        v12 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v12, UserRequest, 0, 0, 0LL);
    }
    v13 = PsGetCurrentThreadWin32Thread(v11);
    if ( v13 )
    {
      v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
      if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
        && (qword_1C00FEA40 & 0x200000010000000LL) != 0
        && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v14) = byte_1C00FEA58 - 1;
        Template_xqx(v14, (unsigned int)&AcquiredExclusiveUserCritEvent, v16, v15.LowPart, 0, gullUserCritAcquireToken);
      }
      if ( v15.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v16,
          0,
          1000 * v15.QuadPart / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    xxxWaitForVideoPortCalloutReady((unsigned int)(v1->CalloutType - 7) <= 3);
    if ( (unsigned int)IsRemoteConnection_0()
      && v1->CalloutType != VideoPnpNotifyCallout
      && v1->CalloutType != VideoDxgkFindAdapterTdrCallout )
    {
      goto LABEL_37;
    }
    if ( v1->CalloutType == VideoFindAdapterCallout )
      goto LABEL_78;
    if ( v1->CalloutType == VideoPnpNotifyCallout )
    {
      v1->Status = Win32kPnpNotify(v1);
      goto LABEL_93;
    }
    if ( v1->CalloutType != VideoDxgkDisplaySwitchCallout )
    {
      if ( v1->CalloutType == (VideoDxgkDisplaySwitchCallout|VideoPowerNotifyCallout) )
      {
        Param = (unsigned int *)v1->Param;
        v44[1] = 0LL;
        v39 = 0;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0
          || (PVOID)PsGetCurrentProcess(v19, v18) != gpepCSRSS
          || grpdeskRitInput && (int)xxxSetCsrssThreadDesktop_0() >= 0 )
        {
          v20 = DrvProcessMonitorEventCallback(
                  *(_QWORD *)(gpDispInfo + 8),
                  (_DWORD)Param,
                  Param[2],
                  Param[3],
                  *((_QWORD *)Param + 2),
                  pData,
                  (__int64)&v39);
          v1->Status = v20;
          if ( v20 >= 0 && v39 )
            PostWinlogonMessage(1027LL, 0);
          if ( !Param[3]
            && dword_1C00FE990 > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00FE990, 0x200000000000uLL) )
          {
            Status = v1->Status;
            p_Status = &Status;
            v44[0] = Param[2];
            v48 = v44;
            v41 = (int)Param[1];
            v50 = &v41;
            v42 = *Param;
            v52 = &v42;
            v47 = 8LL;
            v49 = 8LL;
            v51 = 8LL;
            v53 = 8LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C00FE990, &unk_1C00EAB09, 0LL, v21, 6u, &v45);
          }
          v22 = Param[2];
          v40 = 0;
          if ( (int)DrvUpdateDpiInfoAndNotifyMonitorChange(*(_QWORD *)(gpDispInfo + 8), Param, v22, &v40) >= 0 && v40 )
          {
            GreIncrementDisplaySettingsUniqueness();
            xxxResetDisplayDevice(grpdeskRitInput, 0, 0, 1);
          }
          else if ( !Param[3] && *((_QWORD *)Param + 2) == 1LL )
          {
            UpdatePointerDevices_0();
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0
            && (PVOID)PsGetCurrentProcess(v24, v23) == gpepCSRSS )
          {
            xxxRestoreCsrssThreadDesktop_0();
          }
        }
        goto LABEL_92;
      }
      if ( v1->CalloutType != VideoDxgkFindAdapterTdrCallout )
      {
        if ( v1->CalloutType == VideoDxgkHardwareProtectionTeardown )
        {
          DCompositionForceRender(0LL, 0LL, 1LL);
          goto LABEL_93;
        }
LABEL_37:
        v1->Status = -1073741823;
LABEL_93:
        UserSessionSwitchLeaveCrit();
        return KeSetEvent(*(PRKEVENT *)(a1 + 8), 1, 0);
      }
LABEL_78:
      if ( v1->Param )
      {
        if ( !gProtocolType )
          SafeEnableMDEV(1u);
        if ( (int)IsxxxDwmStopRedirectionSupported_0() >= 0 )
          xxxDwmControl(1, 1u);
        if ( (int)IsxxxUserResetDisplayDeviceSupported_0() >= 0 )
          xxxUserResetDisplayDevice_0();
        if ( (int)IsxxxBroadcastModernAppRedrawSupported_0() >= 0 )
          xxxBroadcastModernAppRedraw_0();
        PsGetCurrentProcessSessionId(v36);
        ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
      }
      else
      {
        if ( (int)IsxxxDwmStopRedirectionSupported_0() >= 0 )
          xxxDwmControl(0, 1u);
        if ( !gProtocolType )
          SafeDisableMDEV(1u);
      }
LABEL_92:
      v1->Status = 0;
      goto LABEL_93;
    }
    v25 = (_QWORD *)v1->Param;
    v44[3] = 0LL;
    if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() >= 0
      && (PVOID)PsGetCurrentProcess(v27, v26) == gpepCSRSS
      && (!grpdeskRitInput || (int)xxxSetCsrssThreadDesktop_0() < 0) )
    {
      goto LABEL_93;
    }
    DrvLogDiagDisplayChange((__int64)v1, 3);
    MDEVPowerState = DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8));
    if ( v25 )
    {
      if ( !MDEVPowerState )
      {
        v29 = *((_DWORD *)v25 + 6);
        if ( (v29 & 0x200) != 0 )
        {
          v30 = v29 & 0xFFFFFF7F;
          v31 = DrvProcessSetDisplayConfigParameters(
                  *v25,
                  *((unsigned int *)v25 + 4),
                  v25[1],
                  *((unsigned int *)v25 + 5),
                  v30);
          v1->Status = v31;
          if ( v31 >= 0 )
          {
            v32 = gulDelayedSwitchAction | 1;
            gulDelayedSwitchAction |= 1u;
            if ( (v30 & 0x1000) != 0 )
              gulDelayedSwitchAction = v32 | 2;
          }
          goto LABEL_74;
        }
        goto LABEL_71;
      }
      v33 = DrvProcessSetDisplayConfigParameters(
              *v25,
              *((unsigned int *)v25 + 4),
              v25[1],
              *((unsigned int *)v25 + 5),
              *((_DWORD *)v25 + 6));
    }
    else
    {
      if ( !MDEVPowerState )
      {
LABEL_71:
        v1->Status = 0;
LABEL_74:
        if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 && (PVOID)PsGetCurrentProcess(v35, v34) == gpepCSRSS )
          xxxRestoreCsrssThreadDesktop_0();
        goto LABEL_93;
      }
      v33 = xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, 0x98Fu, 0, 0, grpdeskRitInput, 0, 0LL);
    }
    v1->Status = v33;
    goto LABEL_74;
  }
  return KeSetEvent(*(PRKEVENT *)(a1 + 8), 1, 0);
}
