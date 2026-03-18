/*
 * XREFs of VideoPortCalloutThread @ 0x1C00B30B4
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C006DBA0 (xxxCreateSystemThreads.c)
 * Callees:
 *     IsRemoteConnection_0 @ 0x1C0001B10 (IsRemoteConnection_0.c)
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C0001DA8 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     xxxSetCsrssThreadDesktop_0 @ 0x1C0001DB0 (xxxSetCsrssThreadDesktop_0.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported_0 @ 0x1C0001DB8 (IsxxxRestoreCsrssThreadDesktopSupported_0.c)
 *     xxxRestoreCsrssThreadDesktop_0 @ 0x1C0001DC0 (xxxRestoreCsrssThreadDesktop_0.c)
 *     IsxxxDwmStopRedirectionSupported_0 @ 0x1C0001DC8 (IsxxxDwmStopRedirectionSupported_0.c)
 *     IsxxxUserResetDisplayDeviceSupported_0 @ 0x1C0001DD0 (IsxxxUserResetDisplayDeviceSupported_0.c)
 *     xxxUserResetDisplayDevice_0 @ 0x1C0001DD8 (xxxUserResetDisplayDevice_0.c)
 *     IsxxxBroadcastModernAppRedrawSupported_0 @ 0x1C0001DE0 (IsxxxBroadcastModernAppRedrawSupported_0.c)
 *     xxxBroadcastModernAppRedraw_0 @ 0x1C0001DE8 (xxxBroadcastModernAppRedraw_0.c)
 *     UpdatePointerDevices_0 @ 0x1C0001DF0 (UpdatePointerDevices_0.c)
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     DrvLogDiagDisplayChange @ 0x1C00629A0 (DrvLogDiagDisplayChange.c)
 *     DrvQueryMDEVPowerState @ 0x1C0064AF0 (DrvQueryMDEVPowerState.c)
 *     xxxDwmControl @ 0x1C0071AE0 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C0071B40 (PostWinlogonMessage.c)
 *     UserLeaveUserCritSec @ 0x1C007A490 (UserLeaveUserCritSec.c)
 *     InitSystemThread @ 0x1C0080020 (InitSystemThread.c)
 *     SafeEnableMDEV @ 0x1C0088C00 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C0088CA0 (SafeDisableMDEV.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00B12FC (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2C54 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00C3CA0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvProcessMonitorEventCallback @ 0x1C00C93EC (DrvProcessMonitorEventCallback.c)
 *     DrvProcessSetDisplayConfigParameters @ 0x1C00C960C (DrvProcessSetDisplayConfigParameters.c)
 *     DrvUpdateDpiInfoAndNotifyMonitorChange @ 0x1C00C9E78 (DrvUpdateDpiInfoAndNotifyMonitorChange.c)
 *     DCompositionForceRender @ 0x1C00E3140 (DCompositionForceRender.c)
 */

LONG __fastcall VideoPortCalloutThread(PRKEVENT *a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r14
  int inited; // eax
  VIDEO_WIN32K_CALLBACKS_PARAMS_TYPE CalloutType; // eax
  char v7; // dl
  ULONG_PTR v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  ULONG_PTR Param; // rdi
  __int64 v14; // rcx
  int MDEVPowerState; // eax
  int v16; // esi
  unsigned int v17; // esi
  int v18; // eax
  int v19; // eax
  LONG v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v24; // [rsp+20h] [rbp-50h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v25; // [rsp+28h] [rbp-48h]
  int v26; // [rsp+A0h] [rbp+30h] BYREF

  v1 = (struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Blink->Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  inited = InitSystemThread(0LL);
  v1->Status = inited;
  if ( inited < 0 )
    return KeSetEvent(a1[1], 1, 0);
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v26);
  CalloutType = v1->CalloutType;
  if ( v1->CalloutType != VideoPnpNotifyCallout
    || (gbInVideoPnpCallout = 1, v7 = 1, CalloutType = v1->CalloutType, v1->CalloutType != VideoPnpNotifyCallout) )
  {
    v7 = 0;
  }
  xxxWaitForVideoPortCalloutReady((unsigned int)(CalloutType - 7) <= 3, v7, v4);
  if ( (unsigned int)IsRemoteConnection_0()
    && v1->CalloutType != VideoPnpNotifyCallout
    && v1->CalloutType != VideoDxgkFindAdapterTdrCallout )
  {
    goto LABEL_8;
  }
  switch ( v1->CalloutType )
  {
    case VideoFindAdapterCallout:
LABEL_54:
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
        PsGetCurrentProcessSessionId(v22);
        ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
      }
      else
      {
        if ( (int)IsxxxDwmStopRedirectionSupported_0() >= 0 )
          xxxDwmControl(1034LL, 0);
        if ( !gProtocolType )
          SafeDisableMDEV(1u);
      }
      goto LABEL_68;
    case VideoPnpNotifyCallout:
      v1->Status = Win32kPnpNotify(v1, v4);
      goto LABEL_69;
    case VideoDxgkDisplaySwitchCallout:
      Param = v1->Param;
      if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() >= 0
        && (PVOID)PsGetCurrentProcess(v14) == gpepCSRSS
        && (!grpdeskRitInput || (int)xxxSetCsrssThreadDesktop_0() < 0) )
      {
        goto LABEL_69;
      }
      DrvLogDiagDisplayChange((__int64)v1, 3);
      MDEVPowerState = DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8));
      if ( Param )
      {
        if ( !MDEVPowerState )
        {
          v16 = *(_DWORD *)(Param + 24);
          if ( (v16 & 0x200) != 0 )
          {
            v17 = v16 & 0xFFFFFF7F;
            LODWORD(v24) = v17;
            v18 = DrvProcessSetDisplayConfigParameters(
                    *(_QWORD *)Param,
                    *(_DWORD *)(Param + 16),
                    *(_QWORD *)(Param + 8),
                    *(_DWORD *)(Param + 20),
                    v24,
                    (int)v25,
                    (__int64)v4);
            v1->Status = v18;
            if ( v18 >= 0 )
            {
              v19 = gulDelayedSwitchAction | 1;
              gulDelayedSwitchAction |= 1u;
              if ( (v17 & 0x1000) != 0 )
                gulDelayedSwitchAction = v19 | 2;
            }
            goto LABEL_50;
          }
          goto LABEL_47;
        }
        LODWORD(v24) = *(_DWORD *)(Param + 24);
        v20 = DrvProcessSetDisplayConfigParameters(
                *(_QWORD *)Param,
                *(_DWORD *)(Param + 16),
                *(_QWORD *)(Param + 8),
                *(_DWORD *)(Param + 20),
                v24,
                (int)v25,
                (__int64)v4);
      }
      else
      {
        if ( !MDEVPowerState )
        {
LABEL_47:
          v1->Status = 0;
LABEL_50:
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 && (PVOID)PsGetCurrentProcess(v21) == gpepCSRSS )
            xxxRestoreCsrssThreadDesktop_0();
          goto LABEL_69;
        }
        LODWORD(v25) = 0;
        LODWORD(v24) = 2447;
        v20 = xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v24, v25, 0, grpdeskRitInput, 0, 0LL, 0LL, (__int64)v4);
      }
      v1->Status = v20;
      goto LABEL_50;
    case VideoDxgkDisplaySwitchCallout|VideoPowerNotifyCallout:
      v8 = v1->Param;
      LOBYTE(v26) = 0;
      if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0
        || (PVOID)PsGetCurrentProcess(v9) != gpepCSRSS
        || grpdeskRitInput && (int)xxxSetCsrssThreadDesktop_0() >= 0 )
      {
        v10 = DrvProcessMonitorEventCallback(
                *(_QWORD *)(gpDispInfo + 8),
                v8,
                *(_DWORD *)(v8 + 8),
                *(_DWORD *)(v8 + 12),
                *(_QWORD *)(v8 + 16));
        v1->Status = v10;
        if ( v10 >= 0 && (_BYTE)v26 )
          PostWinlogonMessage(1027LL, 0);
        v11 = *(unsigned int *)(v8 + 8);
        v26 = 0;
        if ( (int)DrvUpdateDpiInfoAndNotifyMonitorChange(*(_QWORD *)(gpDispInfo + 8), v8, v11, &v26) >= 0 && v26 )
        {
          GreIncrementDisplaySettingsUniqueness();
          xxxResetDisplayDevice(grpdeskRitInput, 0, 0);
        }
        else if ( !*(_DWORD *)(v8 + 12) && *(_QWORD *)(v8 + 16) == 1LL )
        {
          UpdatePointerDevices_0();
        }
        if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 && (PVOID)PsGetCurrentProcess(v12) == gpepCSRSS )
          xxxRestoreCsrssThreadDesktop_0();
      }
      goto LABEL_68;
    case VideoDxgkFindAdapterTdrCallout:
      goto LABEL_54;
    case VideoDxgkHardwareProtectionTeardown:
      DCompositionForceRender(0LL, 1LL, LODWORD(v1->Param));
      goto LABEL_69;
    case VideoRepaintDesktop:
      if ( (int)IsxxxUserResetDisplayDeviceSupported_0() >= 0 )
      {
        EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v26);
        xxxUserResetDisplayDevice_0();
        UserLeaveUserCritSec();
      }
LABEL_68:
      v1->Status = 0;
      goto LABEL_69;
  }
LABEL_8:
  v1->Status = -1073741823;
LABEL_69:
  if ( v1->CalloutType == VideoPnpNotifyCallout )
    gbInVideoPnpCallout = 0;
  UserLeaveUserCritSec();
  return KeSetEvent(a1[1], 1, 0);
}
