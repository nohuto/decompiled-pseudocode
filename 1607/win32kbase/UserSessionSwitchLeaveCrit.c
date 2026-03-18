/*
 * XREFs of UserSessionSwitchLeaveCrit @ 0x1C001CCF0
 * Callers:
 *     ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0004940 (--0DwmHitTestLeaveEnterCrit@@QEAA@XZ.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DE98 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     UserDeleteW32Thread @ 0x1C0015F20 (UserDeleteW32Thread.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0017058 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     UserGetDesktopDC @ 0x1C001CBFC (UserGetDesktopDC.c)
 *     W32CalloutDispatch @ 0x1C001CE70 (W32CalloutDispatch.c)
 *     UserGlobalAtomTableCallout @ 0x1C001D2D8 (UserGlobalAtomTableCallout.c)
 *     ReferenceDwmApiPort @ 0x1C001D7D0 (ReferenceDwmApiPort.c)
 *     UserThreadCallout @ 0x1C001F2C0 (UserThreadCallout.c)
 *     xxxUserProcessCallout @ 0x1C001F620 (xxxUserProcessCallout.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C001FAD0 (NtUserGetProcessDpiAwarenessContext.c)
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     UserReleaseDC @ 0x1C00206D0 (UserReleaseDC.c)
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
 *     ?DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00699B0 (-DxgkEngReleaseWin32kAndPDEVLocks@@YAXQEBXI@Z.c)
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
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C00742C0 (NtUserSetProcessDpiAwarenessContext.c)
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C00747D8 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 *     GreGetDCPoint @ 0x1C0075BA0 (GreGetDCPoint.c)
 *     UserDeleteW32Process @ 0x1C0077130 (UserDeleteW32Process.c)
 *     UserLeaveUserCritSec @ 0x1C007A490 (UserLeaveUserCritSec.c)
 *     UserProcessFreezeCallout @ 0x1C007A498 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C007A818 (UserProcessThawCallout.c)
 *     NtUserCheckProcessSession @ 0x1C007CCE0 (NtUserCheckProcessSession.c)
 *     InitSystemThread @ 0x1C0080020 (InitSystemThread.c)
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C0083AF0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0083B40 (NtGdiCreateOPMProtectedOutputs.c)
 *     NtGdiGetCertificateSizeByHandle @ 0x1C0083BC0 (NtGdiGetCertificateSizeByHandle.c)
 *     NtGdiGetCertificateByHandle @ 0x1C0083C70 (NtGdiGetCertificateByHandle.c)
 *     NtGdiGetOPMRandomNumber @ 0x1C0083D70 (NtGdiGetOPMRandomNumber.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0083E30 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C0083EC0 (NtGdiDestroyOPMProtectedOutput.c)
 *     NtGdiGetOPMInformation @ 0x1C0084210 (NtGdiGetOPMInformation.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C0085090 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     AcquireCriticalSectionAndCheckState @ 0x1C00850F0 (AcquireCriticalSectionAndCheckState.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0085BC8 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     PowerResumeSuspendEvent @ 0x1C0086240 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0086340 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0086628 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0086970 (xxxSendWinlogonPowerMessage.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00871CC (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvWaitForMonitorProcessing @ 0x1C0088840 (DrvWaitForMonitorProcessing.c)
 *     VideoPortCallout @ 0x1C0089670 (VideoPortCallout.c)
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
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C1530 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C00C1660 (NtGdiCreateOPMProtectedOutput.c)
 *     NtGdiGetCOPPCompatibleOPMInformation @ 0x1C00C1760 (NtGdiGetCOPPCompatibleOPMInformation.c)
 *     NtGdiGetCertificate @ 0x1C00C17E0 (NtGdiGetCertificate.c)
 *     NtGdiGetCertificateSize @ 0x1C00C1910 (NtGdiGetCertificateSize.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00C4390 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     NtHWCursorUpdatePointer @ 0x1C00C4890 (NtHWCursorUpdatePointer.c)
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 *     Win32UserInitialize @ 0x1C01556F4 (Win32UserInitialize.c)
 * Callees:
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 */

void UserSessionSwitchLeaveCrit()
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
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x200000010000000LL) != 0
    && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18 )
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
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
}
