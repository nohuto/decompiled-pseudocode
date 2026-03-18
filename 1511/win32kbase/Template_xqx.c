/*
 * XREFs of Template_xqx @ 0x1C00AF860
 * Callers:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00032D4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0004F60 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     W32CalloutDispatch @ 0x1C000C060 (W32CalloutDispatch.c)
 *     UserProcessFreezeCallout @ 0x1C000CAB4 (UserProcessFreezeCallout.c)
 *     UserPowerInfoCallout @ 0x1C000CEC8 (UserPowerInfoCallout.c)
 *     UserProcessThawCallout @ 0x1C000EA64 (UserProcessThawCallout.c)
 *     EtwTraceReleaseUserCrit @ 0x1C001F2D0 (EtwTraceReleaseUserCrit.c)
 *     NtUserGetProcessDpiAwareness @ 0x1C0021610 (NtUserGetProcessDpiAwareness.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0021860 (UserSessionSwitchEnterCrit.c)
 *     xxxUserProcessCallout @ 0x1C0021AA0 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0021F20 (UserThreadCallout.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0022594 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     GreGetDCPoint @ 0x1C00422D0 (GreGetDCPoint.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     UserReleaseDC @ 0x1C0042CF0 (UserReleaseDC.c)
 *     NtUserGetDC @ 0x1C0042DC0 (NtUserGetDC.c)
 *     EnterSharedCrit @ 0x1C0043160 (EnterSharedCrit.c)
 *     UserEnterUserCritSecShared @ 0x1C0044820 (UserEnterUserCritSecShared.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045CF0 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1C0046F34 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C0047150 (NtUserGetDpiForMonitor.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004C340 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C004FE44 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C0053400 (NtUserChangeDisplaySettings.c)
 *     EnterCrit @ 0x1C005E0E0 (EnterCrit.c)
 *     NtUserEnumDisplayMonitors @ 0x1C005E310 (NtUserEnumDisplayMonitors.c)
 *     NtUserSystemParametersInfo @ 0x1C005EBE0 (NtUserSystemParametersInfo.c)
 *     NtGdiDdDDISetDisplayMode @ 0x1C005FF70 (NtGdiDdDDISetDisplayMode.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00632A8 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C0063FE0 (xxxCreateSystemThreads.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0067FB0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     W32kEtwEnableCallback @ 0x1C0068E54 (W32kEtwEnableCallback.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     ReferenceDwmApiPort @ 0x1C0069FA0 (ReferenceDwmApiPort.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C006EB58 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserSetProcessDpiAwareness @ 0x1C006F150 (NtUserSetProcessDpiAwareness.c)
 *     ChangeAcquireResourceType @ 0x1C0076DD0 (ChangeAcquireResourceType.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00786E0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserCheckProcessSession @ 0x1C0078D40 (NtUserCheckProcessSession.c)
 *     NtUserSetSysColors @ 0x1C007A510 (NtUserSetSysColors.c)
 *     UserEnterUserCritSec @ 0x1C007B610 (UserEnterUserCritSec.c)
 *     ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007BBC0 (-DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     InitSystemThread @ 0x1C007C320 (InitSystemThread.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E0BC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E4F8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007F9E4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C007FD00 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007FFC0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 *     PowerResumeSuspendEvent @ 0x1C0084E00 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0084F80 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C0085264 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00855A0 (xxxSendWinlogonPowerMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00857D4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvWaitForMonitorProcessing @ 0x1C0087720 (DrvWaitForMonitorProcessing.c)
 *     VideoPortCallout @ 0x1C00881E0 (VideoPortCallout.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXE@Z @ 0x1C00A99A4 (-xxxWaitForVideoPortCalloutReady@@YAXE@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 *     ?xxxDisplayDiagBlackScreenDetected@@YAXI@Z @ 0x1C00AA460 (-xxxDisplayDiagBlackScreenDetected@@YAXI@Z.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00AB0A0 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AFDD0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00B01A0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjection @ 0x1C00B0550 (NtUserInitializePointerDeviceInjection.c)
 *     NtUserInjectDeviceInput @ 0x1C00B0820 (NtUserInjectDeviceInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00B0AC0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00B0D90 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00B1050 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00B12F0 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetDisplayConfig @ 0x1C00B14D0 (NtUserSetDisplayConfig.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00B1CA0 (NtUserSetFeatureReportResponse.c)
 *     NtUserUnregisterSessionPort @ 0x1C00B2190 (NtUserUnregisterSessionPort.c)
 *     W32pLkmdDataCollectionCallback @ 0x1C00B2C80 (W32pLkmdDataCollectionCallback.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00B8FB0 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00B9380 (NtHWCursorUpdatePointer.c)
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 *     Win32UserInitialize @ 0x1C013B9C4 (Win32UserInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
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
