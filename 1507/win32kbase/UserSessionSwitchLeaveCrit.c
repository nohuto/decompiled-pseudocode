/*
 * XREFs of UserSessionSwitchLeaveCrit @ 0x1C0044B20
 * Callers:
 *     ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C00039A0 (--0DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     UserProcessFreezeCallout @ 0x1C0004F40 (UserProcessFreezeCallout.c)
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 *     UserProcessThawCallout @ 0x1C00075B4 (UserProcessThawCallout.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0007B9C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0007DB4 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C000A210 (PowerOnMonitor.c)
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     ReferenceDwmApiPort @ 0x1C000ADB0 (ReferenceDwmApiPort.c)
 *     NtUserSetProcessDpiAwareness @ 0x1C000CD20 (NtUserSetProcessDpiAwareness.c)
 *     DrvGetCurrentDpiInfo @ 0x1C000D8DC (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C000DAD0 (NtUserGetDpiForMonitor.c)
 *     UserDeleteW32Process @ 0x1C0010590 (UserDeleteW32Process.c)
 *     UserReleaseDC @ 0x1C00118A0 (UserReleaseDC.c)
 *     UserLeaveUserCritSec @ 0x1C0013090 (UserLeaveUserCritSec.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C00136B4 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     NtUserCheckProcessSession @ 0x1C00157C0 (NtUserCheckProcessSession.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0016CE0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     NtUserSetSysColors @ 0x1C0017420 (NtUserSetSysColors.c)
 *     NtUserReleaseDwmHitTestWaiters @ 0x1C0019540 (NtUserReleaseDwmHitTestWaiters.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001EA00 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00208B4 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     UserGetDesktopDC @ 0x1C0044A2C (UserGetDesktopDC.c)
 *     NtUserGetProcessDpiAwareness @ 0x1C0044F50 (NtUserGetProcessDpiAwareness.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045288 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     UserThreadCallout @ 0x1C004F0C0 (UserThreadCallout.c)
 *     UserDeleteW32Thread @ 0x1C0050C30 (UserDeleteW32Thread.c)
 *     xxxUserProcessCallout @ 0x1C0051410 (xxxUserProcessCallout.c)
 *     hdcOpenDCW @ 0x1C0053650 (hdcOpenDCW.c)
 *     GreGetDCPoint @ 0x1C0054BF0 (GreGetDCPoint.c)
 *     NtUserEnumDisplayMonitors @ 0x1C00557F0 (NtUserEnumDisplayMonitors.c)
 *     NtUserChangeDisplaySettings @ 0x1C0059F90 (NtUserChangeDisplaySettings.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00673D0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0067420 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificateSize @ 0x1C00674A0 (NtGdiGetCertificateSize.c)
 *     NtGdiGetCertificate @ 0x1C0067550 (NtGdiGetCertificate.c)
 *     NtGdiGetOPMRandomNumber @ 0x1C0067670 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0067730 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C00677C0 (NtGdiDestroyOPMProtectedOutput.c)
 *     NtGdiGetOPMInformation @ 0x1C0067B40 (NtGdiGetOPMInformation.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0068860 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00688C0 (AcquireCriticalSectionAndCheckState.c)
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
 *     NtGdiDdDDISetDisplayMode @ 0x1C0082220 (NtGdiDdDDISetDisplayMode.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00824D0 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
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
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C0330 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C0470 (NtGdiGetCOPPCompatibleOPMInformation.c)
 * Callees:
 *     Template_xqx @ 0x1C00AB340 (Template_xqx.c)
 */

__int64 UserSessionSwitchLeaveCrit()
{
  struct tagTHREADINFO *v0; // rbx
  struct tagTHREADINFO **ThreadWin32Thread; // rax
  __int64 v2; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v5; // r8d

  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  v0 = 0LL;
  ThreadWin32Thread = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v0 = *ThreadWin32Thread;
  if ( v0 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C00FEA58 - 1) > 2u
    && (qword_1C00FEA40 & 0x200000010000000LL) != 0
    && (qword_1C00FEA48 & 0x200000010000000LL) == qword_1C00FEA48 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v2);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v5,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
  return ExReleaseResourceAndLeavePriorityRegion(gpresUser);
}
