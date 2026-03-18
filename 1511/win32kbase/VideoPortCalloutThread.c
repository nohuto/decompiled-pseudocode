/*
 * XREFs of VideoPortCalloutThread @ 0x1C00A9D78
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C0063FE0 (xxxCreateSystemThreads.c)
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B40 (IsRemoteConnection_0.c)
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C0002248 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     xxxSetCsrssThreadDesktop_0 @ 0x1C0002250 (xxxSetCsrssThreadDesktop_0.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported_0 @ 0x1C0002258 (IsxxxRestoreCsrssThreadDesktopSupported_0.c)
 *     xxxRestoreCsrssThreadDesktop_0 @ 0x1C0002260 (xxxRestoreCsrssThreadDesktop_0.c)
 *     IsxxxDwmStopRedirectionSupported_0 @ 0x1C0002268 (IsxxxDwmStopRedirectionSupported_0.c)
 *     IsxxxUserResetDisplayDeviceSupported_0 @ 0x1C0002270 (IsxxxUserResetDisplayDeviceSupported_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0002278 (xxxUserResetDisplayDevice_0.c)
 *     IsxxxBroadcastModernAppRedrawSupported_0 @ 0x1C0002280 (IsxxxBroadcastModernAppRedrawSupported_0.c)
 *     xxxBroadcastModernAppRedraw_0 @ 0x1C0002288 (xxxBroadcastModernAppRedraw_0.c)
 *     UpdatePointerDevices_0 @ 0x1C0002290 (UpdatePointerDevices_0.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     _TlgKeywordOn @ 0x1C0049E20 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C004A48C (_TlgWrite.c)
 *     DrvQueryMDEVPowerState @ 0x1C0052ED0 (DrvQueryMDEVPowerState.c)
 *     DrvLogDiagDisplayChange @ 0x1C0053620 (DrvLogDiagDisplayChange.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     InitSystemThread @ 0x1C007C320 (InitSystemThread.c)
 *     xxxDwmControl @ 0x1C0080800 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C0080870 (PostWinlogonMessage.c)
 *     SafeEnableMDEV @ 0x1C0087B60 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0087C00 (SafeDisableMDEV.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXE@Z @ 0x1C00A99A4 (-xxxWaitForVideoPortCalloutReady@@YAXE@Z.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00B88B0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvProcessMonitorEventCallback @ 0x1C00BD71C (DrvProcessMonitorEventCallback.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00BD928 (DrvProcessSetDisplayConfigParameters.c)
 *     DrvUpdateDpiInfoAndNotifyMonitorChange @ 0x1C00BE178 (DrvUpdateDpiInfoAndNotifyMonitorChange.c)
 *     DCompositionForceRender @ 0x1C00D5AF0 (DCompositionForceRender.c)
 */

LONG __fastcall VideoPortCalloutThread(__int64 a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rbx
  int inited; // eax
  __int64 v4; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v12; // r8d
  LONGLONG v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int *Param; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  const GUID *v20; // r9
  __int64 v21; // r8
  _QWORD *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int MDEVPowerState; // eax
  int v26; // esi
  unsigned int v27; // esi
  int v28; // eax
  int v29; // eax
  LONG v30; // eax
  __int64 v31; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *cData; // [rsp+28h] [rbp-E0h]
  int pData; // [rsp+30h] [rbp-D8h]
  char v35; // [rsp+58h] [rbp-B0h] BYREF
  int v36; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Status; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v40[6]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v41; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *p_Status; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  _QWORD *v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  __int64 *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  __int64 *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]

  v1 = *(struct _VIDEO_WIN32K_CALLBACKS_PARAMS **)a1;
  inited = InitSystemThread(0LL);
  v1->Status = inited;
  if ( inited >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v10 = PsGetCurrentThreadWin32Thread(v7);
    if ( v10 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v8 = 0x200000010000000LL;
      v13 = PerformanceCounter.QuadPart - *(_QWORD *)(v10 + 8);
      if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
        && (qword_1C01020B0 & 0x200000010000000LL) != 0
        && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8
        && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v9) = byte_1C01020C8 - 1;
        Template_xqx(v9, (unsigned int)&AcquiredExclusiveUserCritEvent, v12, v13, 0, gullUserCritAcquireToken);
      }
      if ( v13 >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
        Template_xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v12,
          0,
          1000 * v13 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
    }
    gptiCurrent = v6;
    gbValidateHandleForIL = 1;
    LOBYTE(v9) = (unsigned int)(v1->CalloutType - 7) <= 3;
    xxxWaitForVideoPortCalloutReady(v9, v8);
    if ( (unsigned int)IsRemoteConnection_0()
      && v1->CalloutType != VideoPnpNotifyCallout
      && v1->CalloutType != VideoDxgkFindAdapterTdrCallout )
    {
      goto LABEL_24;
    }
    if ( v1->CalloutType == VideoFindAdapterCallout )
      goto LABEL_65;
    if ( v1->CalloutType == VideoPnpNotifyCallout )
    {
      v1->Status = Win32kPnpNotify(v1, v14);
      goto LABEL_80;
    }
    if ( v1->CalloutType != VideoDxgkDisplaySwitchCallout )
    {
      if ( v1->CalloutType == (VideoDxgkDisplaySwitchCallout|VideoPowerNotifyCallout) )
      {
        Param = (unsigned int *)v1->Param;
        v40[1] = 0LL;
        v35 = 0;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0
          || (PVOID)PsGetCurrentProcess(v18, v17) != gpepCSRSS
          || (v15 = grpdeskRitInput) != 0 && (int)xxxSetCsrssThreadDesktop_0() >= 0 )
        {
          v19 = DrvProcessMonitorEventCallback(
                  *(_QWORD *)(gpDispInfo + 8),
                  (_DWORD)Param,
                  Param[2],
                  Param[3],
                  *((_QWORD *)Param + 2),
                  pData,
                  (__int64)&v35);
          v1->Status = v19;
          if ( v19 >= 0 && v35 )
            PostWinlogonMessage(1027LL, 0);
          if ( !Param[3]
            && dword_1C0101D10 > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0101D10, 0x200000000000uLL) )
          {
            Status = v1->Status;
            p_Status = &Status;
            v40[0] = Param[2];
            v44 = v40;
            v37 = (int)Param[1];
            v46 = &v37;
            v38 = *Param;
            v48 = &v38;
            v43 = 8LL;
            v45 = 8LL;
            v47 = 8LL;
            v49 = 8LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C0101D10, &unk_1C00ED7C1, 0LL, v20, 6u, &v41);
          }
          v21 = Param[2];
          v36 = 0;
          if ( (int)DrvUpdateDpiInfoAndNotifyMonitorChange(*(_QWORD *)(gpDispInfo + 8), Param, v21, &v36) >= 0 && v36 )
          {
            GreIncrementDisplaySettingsUniqueness();
            xxxResetDisplayDevice(grpdeskRitInput, 0, 0, 1);
          }
          else if ( !Param[3] && *((_QWORD *)Param + 2) == 1LL )
          {
            UpdatePointerDevices_0();
          }
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0
            && (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS )
          {
            xxxRestoreCsrssThreadDesktop_0();
          }
        }
        goto LABEL_79;
      }
      v15 = (unsigned int)(v1->CalloutType - 10);
      if ( v1->CalloutType != VideoDxgkFindAdapterTdrCallout )
      {
        if ( v1->CalloutType == VideoDxgkHardwareProtectionTeardown )
        {
          DCompositionForceRender(0LL, 1LL, LODWORD(v1->Param));
          goto LABEL_80;
        }
LABEL_24:
        v1->Status = -1073741823;
LABEL_80:
        UserSessionSwitchLeaveCrit(v15, v14);
        return KeSetEvent(*(PRKEVENT *)(a1 + 8), 1, 0);
      }
LABEL_65:
      if ( v1->Param )
      {
        if ( !gProtocolType )
          SafeEnableMDEV(1u);
        if ( (int)IsxxxDwmStopRedirectionSupported_0() >= 0 )
          xxxDwmControl(1035LL, 0);
        if ( (int)IsxxxUserResetDisplayDeviceSupported_0() >= 0 )
          xxxUserResetDisplayDevice_0();
        if ( (int)IsxxxBroadcastModernAppRedrawSupported_0() >= 0 )
          xxxBroadcastModernAppRedraw_0();
        PsGetCurrentProcessSessionId(v31);
        ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
      }
      else
      {
        if ( (int)IsxxxDwmStopRedirectionSupported_0() >= 0 )
          xxxDwmControl(1034LL, 0);
        if ( !gProtocolType )
          SafeDisableMDEV(1u);
      }
LABEL_79:
      v1->Status = 0;
      goto LABEL_80;
    }
    v22 = (_QWORD *)v1->Param;
    v40[3] = 0LL;
    if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() >= 0 && (PVOID)PsGetCurrentProcess(v24, v23) == gpepCSRSS )
    {
      v15 = grpdeskRitInput;
      if ( !grpdeskRitInput || (int)xxxSetCsrssThreadDesktop_0() < 0 )
        goto LABEL_80;
    }
    DrvLogDiagDisplayChange((__int64)v1, 3);
    MDEVPowerState = DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8));
    if ( v22 )
    {
      if ( !MDEVPowerState )
      {
        v26 = *((_DWORD *)v22 + 6);
        if ( (v26 & 0x200) != 0 )
        {
          v27 = v26 & 0xFFFFFF7F;
          v28 = DrvProcessSetDisplayConfigParameters(
                  *v22,
                  *((unsigned int *)v22 + 4),
                  v22[1],
                  *((unsigned int *)v22 + 5),
                  v27);
          v1->Status = v28;
          if ( v28 >= 0 )
          {
            v29 = gulDelayedSwitchAction | 1;
            gulDelayedSwitchAction |= 1u;
            if ( (v27 & 0x1000) != 0 )
              gulDelayedSwitchAction = v29 | 2;
          }
          goto LABEL_61;
        }
        goto LABEL_58;
      }
      v30 = DrvProcessSetDisplayConfigParameters(
              *v22,
              *((unsigned int *)v22 + 4),
              v22[1],
              *((unsigned int *)v22 + 5),
              *((_DWORD *)v22 + 6));
    }
    else
    {
      if ( !MDEVPowerState )
      {
LABEL_58:
        v1->Status = 0;
LABEL_61:
        if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 && (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS )
          xxxRestoreCsrssThreadDesktop_0();
        goto LABEL_80;
      }
      LODWORD(cData) = 2447;
      v30 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, cData, 0, 0, grpdeskRitInput, 0, 0LL);
    }
    v1->Status = v30;
    goto LABEL_61;
  }
  return KeSetEvent(*(PRKEVENT *)(a1 + 8), 1, 0);
}
