/*
 * XREFs of Template_xqx @ 0x1C00B90E0
 * Callers:
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0004850 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DE98 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     EtwTraceReleaseUserCrit @ 0x1C00160F8 (EtwTraceReleaseUserCrit.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0017058 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C001CD88 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     W32CalloutDispatch @ 0x1C001CE70 (W32CalloutDispatch.c)
 *     UserGlobalAtomTableCallout @ 0x1C001D2D8 (UserGlobalAtomTableCallout.c)
 *     ReferenceDwmApiPort @ 0x1C001D7D0 (ReferenceDwmApiPort.c)
 *     UserThreadCallout @ 0x1C001F2C0 (UserThreadCallout.c)
 *     xxxUserProcessCallout @ 0x1C001F620 (xxxUserProcessCallout.c)
 *     UserSessionSwitchEnterCrit @ 0x1C001F9D0 (UserSessionSwitchEnterCrit.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C001FAD0 (NtUserGetProcessDpiAwarenessContext.c)
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     UserReleaseDC @ 0x1C00206D0 (UserReleaseDC.c)
 *     EnterSharedCrit @ 0x1C0020F90 (EnterSharedCrit.c)
 *     NtUserGetDC @ 0x1C00210B0 (NtUserGetDC.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0048A40 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0049F30 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C004E6E4 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00542E4 (-UserInitialize@@YAJXZ.c)
 *     W32kEtwEnableCallback @ 0x1C0054708 (W32kEtwEnableCallback.c)
 *     DrvGetCurrentDpiInfo @ 0x1C0057D1C (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C0057FA0 (NtUserGetDpiForMonitor.c)
 *     NtUserEnumDisplayMonitors @ 0x1C0058780 (NtUserEnumDisplayMonitors.c)
 *     NtUserSetSysColors @ 0x1C005CBB0 (NtUserSetSysColors.c)
 *     NtGdiDdDDISetDisplayMode @ 0x1C005D930 (NtGdiDdDDISetDisplayMode.c)
 *     NtUserChangeDisplaySettings @ 0x1C0061670 (NtUserChangeDisplaySettings.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006CFF4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C006DBA0 (xxxCreateSystemThreads.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C006F610 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     UserPowerInfoCallout @ 0x1C0070B38 (UserPowerInfoCallout.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00711B8 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C0071340 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007156C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0072080 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0072174 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     EnterCrit @ 0x1C00722B0 (EnterCrit.c)
 *     NtUserSystemParametersInfo @ 0x1C0072430 (NtUserSystemParametersInfo.c)
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C00742C0 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00747D8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 *     UserEnterUserCritSecShared @ 0x1C0077900 (UserEnterUserCritSecShared.c)
 *     UserProcessFreezeCallout @ 0x1C007A498 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C007A818 (UserProcessThawCallout.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C007B910 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     ChangeAcquireResourceType @ 0x1C007C7E0 (ChangeAcquireResourceType.c)
 *     NtUserCheckProcessSession @ 0x1C007CCE0 (NtUserCheckProcessSession.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007DF10 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     UserEnterUserCritSec @ 0x1C007F2D0 (UserEnterUserCritSec.c)
 *     InitSystemThread @ 0x1C0080020 (InitSystemThread.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C0086240 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0086340 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0086628 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0086970 (xxxSendWinlogonPowerMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00871CC (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvWaitForMonitorProcessing @ 0x1C0088840 (DrvWaitForMonitorProcessing.c)
 *     VideoPortCallout @ 0x1C0089670 (VideoPortCallout.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00B12FC (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00B22E8 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00B267C (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2C54 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00B3610 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00B47B0 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00B9A80 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00B9ED0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjection @ 0x1C00BA280 (NtUserInitializePointerDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00BA550 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00BA7F0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00BAAC0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00BAD80 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00BB020 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetDisplayConfig @ 0x1C00BB200 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00BBA90 (NtUserSetFeatureReportResponse.c)
 *     NtUserUnregisterSessionPort @ 0x1C00BBF90 (NtUserUnregisterSessionPort.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00BCC70 (W32pLkmdDataCollectionCallback.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00C4390 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00C4890 (NtHWCursorUpdatePointer.c)
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 *     Win32UserInitialize @ 0x1C01556F4 (Win32UserInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

NTSTATUS Template_xqx(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  va_list v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-28h]
  va_list v7; // [rsp+50h] [rbp-20h]
  __int64 v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  __int64 v11; // [rsp+A0h] [rbp+30h] BYREF
  va_list va1; // [rsp+A0h] [rbp+30h]
  va_list va2; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  v6 = 4LL;
  va_copy(v7, va2);
  v8 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 3u, &UserData);
}
