/*
 * XREFs of UserSessionSwitchLeaveCrit @ 0x1C0022470
 * Callers:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00032D4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C00050D0 (--0DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     PowerOnMonitor @ 0x1C000A870 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     W32CalloutDispatch @ 0x1C000C060 (W32CalloutDispatch.c)
 *     UserProcessFreezeCallout @ 0x1C000CAB4 (UserProcessFreezeCallout.c)
 *     UserPowerInfoCallout @ 0x1C000CEC8 (UserPowerInfoCallout.c)
 *     UserProcessThawCallout @ 0x1C000EA64 (UserProcessThawCallout.c)
 *     NtUserGetProcessDpiAwareness @ 0x1C0021610 (NtUserGetProcessDpiAwareness.c)
 *     xxxUserProcessCallout @ 0x1C0021AA0 (xxxUserProcessCallout.c)
 *     UserThreadCallout @ 0x1C0021F20 (UserThreadCallout.c)
 *     UserGetDesktopDC @ 0x1C0022378 (UserGetDesktopDC.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039070 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     GreGetDCPoint @ 0x1C00422D0 (GreGetDCPoint.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     UserReleaseDC @ 0x1C0042CF0 (UserReleaseDC.c)
 *     UserDeleteW32Thread @ 0x1C0044720 (UserDeleteW32Thread.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0045CF0 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1C0046F34 (DrvGetCurrentDpiInfo.c)
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
 *     ReferenceDwmApiPort @ 0x1C0069FA0 (ReferenceDwmApiPort.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006A144 (-UserInitialize@@YAJXZ.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C006EB58 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     NtUserSetProcessDpiAwareness @ 0x1C006F150 (NtUserSetProcessDpiAwareness.c)
 *     UserDeleteW32Process @ 0x1C0072930 (UserDeleteW32Process.c)
 *     UserLeaveUserCritSec @ 0x1C00763E0 (UserLeaveUserCritSec.c)
 *     NtUserCheckProcessSession @ 0x1C0078D40 (NtUserCheckProcessSession.c)
 *     NtUserSetSysColors @ 0x1C007A510 (NtUserSetSysColors.c)
 *     InitSystemThread @ 0x1C007C320 (InitSystemThread.c)
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C007C590 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C007E0BC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C007E4F8 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C007F9E4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     NtUserRegisterSessionPort @ 0x1C007FD00 (NtUserRegisterSessionPort.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C007FFC0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00820B0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0082100 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C0082180 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateByHandle @ 0x1C0082230 (NtGdiGetCertificateByHandle.c)
 *     NtGdiGetOPMRandomNumber @ 0x1C0082330 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00823F0 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C0082480 (NtGdiDestroyOPMProtectedOutput.c)
 *     NtGdiGetOPMInformation @ 0x1C0082800 (NtGdiGetOPMInformation.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0083730 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C0083790 (AcquireCriticalSectionAndCheckState.c)
 *     xxxUserPowerStateCalloutWorker @ 0x1C00846A4 (xxxUserPowerStateCalloutWorker.c)
 *     PowerResumeSuspendEvent @ 0x1C0084E00 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0084F80 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z @ 0x1C0085264 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@H@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00855A0 (xxxSendWinlogonPowerMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00857D4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvWaitForMonitorProcessing @ 0x1C0087720 (DrvWaitForMonitorProcessing.c)
 *     VideoPortCallout @ 0x1C00881E0 (VideoPortCallout.c)
 *     ?ResetW32ThreadAndLeaveCrit@ReEnterLeaveCrit@@QEAAXPEAU_ETHREAD@@PEAU_W32THREADNONPAGED@@@Z @ 0x1C00A93DC (-ResetW32ThreadAndLeaveCrit@ReEnterLeaveCrit@@QEAAXPEAU_ETHREAD@@PEAU_W32THREADNONPAGED@@@Z.c)
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
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C0D70 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C0EB0 (NtGdiGetCOPPCompatibleOPMInformation.c)
 *     NtGdiGetCertificate @ 0x1C00C0F30 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00C1060 (NtGdiGetCertificateSize.c)
 *     DriverEntry @ 0x1C013B110 (DriverEntry.c)
 *     Win32UserInitialize @ 0x1C013B9C4 (Win32UserInitialize.c)
 * Callees:
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 */

__int64 __fastcall UserSessionSwitchLeaveCrit(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 CurrentThreadWin32Thread; // rbx
  DWORD LowPart; // eax
  int v8; // r8d

  v2 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  v3 = 0LL;
  ThreadWin32Thread = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, v2);
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  if ( v3 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
    gcRITBlockedOnDITWaiters = 0;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x200000010000000LL) != 0
    && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8 )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v5);
    if ( CurrentThreadWin32Thread )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
        Template_xqx(
          *(_QWORD *)(CurrentThreadWin32Thread + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v8,
          LowPart - *(_DWORD *)(CurrentThreadWin32Thread + 8),
          0,
          *(_QWORD *)(CurrentThreadWin32Thread + 16));
    }
  }
  return ExReleaseResourceAndLeavePriorityRegion(gpresUser);
}
