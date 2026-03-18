/*
 * XREFs of EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8
 * Callers:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00032D4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0004F60 (--1DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     W32CalloutDispatch @ 0x1C000C060 (W32CalloutDispatch.c)
 *     UserProcessFreezeCallout @ 0x1C000CAB4 (UserProcessFreezeCallout.c)
 *     UserPowerInfoCallout @ 0x1C000CEC8 (UserPowerInfoCallout.c)
 *     UserProcessThawCallout @ 0x1C000EA64 (UserProcessThawCallout.c)
 *     NtUserGetProcessDpiAwareness @ 0x1C0021610 (NtUserGetProcessDpiAwareness.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0021860 (UserSessionSwitchEnterCrit.c)
 *     xxxUserProcessCallout @ 0x1C0021AA0 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0021F20 (UserThreadCallout.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0022594 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C0047150 (NtUserGetDpiForMonitor.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004C340 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C004FE44 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C0053400 (NtUserChangeDisplaySettings.c)
 *     NtUserEnumDisplayMonitors @ 0x1C005E310 (NtUserEnumDisplayMonitors.c)
 *     NtGdiDdDDISetDisplayMode @ 0x1C005FF70 (NtGdiDdDDISetDisplayMode.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00632A8 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     xxxCreateSystemThreads @ 0x1C0063FE0 (xxxCreateSystemThreads.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0067FB0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     W32kEtwEnableCallback @ 0x1C0068E54 (W32kEtwEnableCallback.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C006EB58 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserSetProcessDpiAwareness @ 0x1C006F150 (NtUserSetProcessDpiAwareness.c)
 *     ChangeAcquireResourceType @ 0x1C0076DD0 (ChangeAcquireResourceType.c)
 *     ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00786E0 (-DxgkEngEnterUserCrit@@YAXH@Z.c)
 *     NtUserCheckProcessSession @ 0x1C0078D40 (NtUserCheckProcessSession.c)
 *     NtUserSetSysColors @ 0x1C007A510 (NtUserSetSysColors.c)
 *     UserEnterUserCritSec @ 0x1C007B610 (UserEnterUserCritSec.c)
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
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 *     Win32UserInitialize @ 0x1C013B9C4 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall EnterCritAvoidingDitHitTestHazard(int a1, int a2)
{
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PRKSEMAPHORE v11; // rcx

  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterPriorityRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( a1 || (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && a2 && v4 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v4 == gptiRit )
        return v4;
      ++gcRITBlockedOnDITWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v11 = (PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v4 == gptiRit )
        return v4;
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeavePriorityRegion(gpresUser);
      v11 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v11, UserRequest, 0, 0, 0LL);
  }
  return v4;
}
