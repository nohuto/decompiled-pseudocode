/*
 * XREFs of Template_xqx @ 0x1C00AB340
 * Callers:
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0003790 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0004120 (EnterCrit.c)
 *     W32CalloutDispatch @ 0x1C00045B0 (W32CalloutDispatch.c)
 *     UserProcessFreezeCallout @ 0x1C0004F40 (UserProcessFreezeCallout.c)
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 *     UserProcessThawCallout @ 0x1C00075B4 (UserProcessThawCallout.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0007B9C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0007DB4 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     NtUserSystemParametersInfo @ 0x1C0008450 (NtUserSystemParametersInfo.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     ReferenceDwmApiPort @ 0x1C000ADB0 (ReferenceDwmApiPort.c)
 *     NtUserSetProcessDpiAwareness @ 0x1C000CD20 (NtUserSetProcessDpiAwareness.c)
 *     DrvGetCurrentDpiInfo @ 0x1C000D8DC (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C000DAD0 (NtUserGetDpiForMonitor.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0010820 (UserSessionSwitchEnterCrit.c)
 *     UserEnterUserCritSecShared @ 0x1C0011230 (UserEnterUserCritSecShared.c)
 *     UserReleaseDC @ 0x1C00118A0 (UserReleaseDC.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C00136B4 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00152F0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserCheckProcessSession @ 0x1C00157C0 (NtUserCheckProcessSession.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0016CE0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     NtUserSetSysColors @ 0x1C0017420 (NtUserSetSysColors.c)
 *     UserEnterUserCritSec @ 0x1C0018D50 (UserEnterUserCritSec.c)
 *     NtUserReleaseDwmHitTestWaiters @ 0x1C0019540 (NtUserReleaseDwmHitTestWaiters.c)
 *     ChangeAcquireResourceType @ 0x1C001D7A0 (ChangeAcquireResourceType.c)
 *     LeaveCrit @ 0x1C001E020 (LeaveCrit.c)
 *     NtUserQueryDisplayConfig @ 0x1C001E110 (NtUserQueryDisplayConfig.c)
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C001E670 (NtUserGetDisplayConfigBufferSizes.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001EA00 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserEnumDisplaySettings @ 0x1C001FF60 (NtUserEnumDisplaySettings.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00208B4 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     NtUserEnumDisplayDevices @ 0x1C0020A80 (NtUserEnumDisplayDevices.c)
 *     EnterSharedCrit @ 0x1C0033BD0 (EnterSharedCrit.c)
 *     NtUserGetDC @ 0x1C0033CE0 (NtUserGetDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0044B20 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0044C44 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0044E4C (EtwTraceAcquiredExclusiveUserCrit.c)
 *     NtUserGetProcessDpiAwareness @ 0x1C0044F50 (NtUserGetProcessDpiAwareness.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045288 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     UserThreadCallout @ 0x1C004F0C0 (UserThreadCallout.c)
 *     xxxUserProcessCallout @ 0x1C0051410 (xxxUserProcessCallout.c)
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     GreGetDCPoint @ 0x1C0054BF0 (GreGetDCPoint.c)
 *     NtUserEnumDisplayMonitors @ 0x1C00557F0 (NtUserEnumDisplayMonitors.c)
 *     NtUserChangeDisplaySettings @ 0x1C0059F90 (NtUserChangeDisplaySettings.c)
 *     PowerOffMonitor @ 0x1C006A170 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C006A508 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C006A900 (xxxSendWinlogonPowerMessage.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006BA54 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C006E920 (PowerResumeSuspendEvent.c)
 *     DrvWaitForMonitorProcessing @ 0x1C006FAD0 (DrvWaitForMonitorProcessing.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0070294 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     W32kEtwEnableCallback @ 0x1C007BF14 (W32kEtwEnableCallback.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C007C5BC (-UserInitialize@@YAJXZ.c)
 *     NtUserRegisterSessionPort @ 0x1C007F6A0 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007F924 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     xxxCreateSystemThreads @ 0x1C0081520 (xxxCreateSystemThreads.c)
 *     InitSystemThread @ 0x1C00818B0 (InitSystemThread.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0081BD0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     NtGdiDdDDISetDisplayMode @ 0x1C0082220 (NtGdiDdDDISetDisplayMode.c)
 *     VideoPortCallout @ 0x1C0084FF0 (VideoPortCallout.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXE@Z @ 0x1C00A5018 (-xxxWaitForVideoPortCalloutReady@@YAXE@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXXZ @ 0x1C00A5B80 (-xxxDisplayDiagBlackScreenDetected@@YAXXZ.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00A6A80 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AB8D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00ABD50 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjection @ 0x1C00AC1B0 (NtUserInitializePointerDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00AC530 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00AC890 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00ACC30 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00ACFB0 (NtUserInjectPointerInput.c)
 *     NtUserSetDisplayConfig @ 0x1C00AD300 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00ADB60 (NtUserSetFeatureReportResponse.c)
 *     NtUserUnregisterSessionPort @ 0x1C00AE000 (NtUserUnregisterSessionPort.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00AEBF0 (W32pLkmdDataCollectionCallback.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00B6890 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00B6D10 (NtHWCursorUpdatePointer.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00B92E0 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     Win32UserInitialize @ 0x1C0138B1C (Win32UserInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
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
