/*
 * XREFs of ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C
 * Callers:
 *     NtUserGetRawInputData @ 0x1C00079C0 (NtUserGetRawInputData.c)
 *     xxxSetModernAppWindow @ 0x1C000A1E0 (xxxSetModernAppWindow.c)
 *     NtUserSetActivationFilter @ 0x1C000CF30 (NtUserSetActivationFilter.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000D0AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C000D650 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     DCESpeedHitTest @ 0x1C0058D3C (DCESpeedHitTest.c)
 *     SpeedHitTest @ 0x1C00591A0 (SpeedHitTest.c)
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0060E84 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C0061960 (NtUserSetLayeredWindowAttributes.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     xxxInsertMenuItem @ 0x1C006B448 (xxxInsertMenuItem.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     _UnregisterClass @ 0x1C0071F88 (_UnregisterClass.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     NtUserDestroyCursor @ 0x1C008FE20 (NtUserDestroyCursor.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1C0093E04 (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     ComposeWindow @ 0x1C0096658 (ComposeWindow.c)
 *     NtUserUnregisterHotKey @ 0x1C0097B80 (NtUserUnregisterHotKey.c)
 *     NtUserRegisterHotKey @ 0x1C0097D10 (NtUserRegisterHotKey.c)
 *     UserJobCallout @ 0x1C00995A0 (UserJobCallout.c)
 *     xxxConsoleControl @ 0x1C009A9BC (xxxConsoleControl.c)
 *     _GetClassInfoEx @ 0x1C009F0A0 (_GetClassInfoEx.c)
 *     NtUserSetCursorIconData @ 0x1C009FC70 (NtUserSetCursorIconData.c)
 *     _SetCursorIconData @ 0x1C009FF18 (_SetCursorIconData.c)
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00A420C (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     NtUserDeferWindowPosAndBand @ 0x1C00A5A00 (NtUserDeferWindowPosAndBand.c)
 *     NtUserUnhookWinEvent @ 0x1C00A9550 (NtUserUnhookWinEvent.c)
 *     ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00A9ED8 (-xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     SendDwmIconChange @ 0x1C00AAFF0 (SendDwmIconChange.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     NtUserDrawIconEx @ 0x1C00B0AD0 (NtUserDrawIconEx.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00DBE68 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     NtUserRegisterRawInputDevices @ 0x1C00E1FC0 (NtUserRegisterRawInputDevices.c)
 *     NtUserGetPointerDeviceRects @ 0x1C00E3A60 (NtUserGetPointerDeviceRects.c)
 *     _GetPointerDeviceRects @ 0x1C00E3B58 (_GetPointerDeviceRects.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00E3D00 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDevices @ 0x1C00E3F80 (NtUserGetPointerDevices.c)
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 *     NtUserSetBrokeredForeground @ 0x1C00ED700 (NtUserSetBrokeredForeground.c)
 *     xxxDwmStopRedirection @ 0x1C00EFE10 (xxxDwmStopRedirection.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00F96D4 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F994C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     NtUserCopyAcceleratorTable @ 0x1C01011D0 (NtUserCopyAcceleratorTable.c)
 *     NtUserRegisterUserApiHook @ 0x1C0110FA0 (NtUserRegisterUserApiHook.c)
 *     NtUserRegisterDManipHook @ 0x1C0111220 (NtUserRegisterDManipHook.c)
 *     SuspendThreadQueue @ 0x1C01142D0 (SuspendThreadQueue.c)
 *     NtUserUpdateInputContext @ 0x1C0117B60 (NtUserUpdateInputContext.c)
 *     NtUserSetMenuDefaultItem @ 0x1C0118BB0 (NtUserSetMenuDefaultItem.c)
 *     zzzLockWindowUpdate2 @ 0x1C0121EF4 (zzzLockWindowUpdate2.c)
 *     NtUserAssociateInputContext @ 0x1C0122470 (NtUserAssociateInputContext.c)
 *     NtUserBuildHimcList @ 0x1C0122630 (NtUserBuildHimcList.c)
 *     NtUserGetRawInputDeviceInfo @ 0x1C0124FC0 (NtUserGetRawInputDeviceInfo.c)
 *     NtUserDestroyMenu @ 0x1C01253A0 (NtUserDestroyMenu.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C0129F00 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserSetGestureConfig @ 0x1C012A220 (NtUserSetGestureConfig.c)
 *     xxxCsDdeInitialize @ 0x1C012B4E8 (xxxCsDdeInitialize.c)
 *     NtUserSetWindowStationUser @ 0x1C012DCF0 (NtUserSetWindowStationUser.c)
 *     NtUserCallHwndOpt @ 0x1C01339D0 (NtUserCallHwndOpt.c)
 *     NtUserRegisterTouchPadCapable @ 0x1C0135140 (NtUserRegisterTouchPadCapable.c)
 *     zzzAnimateFade @ 0x1C013FA4C (zzzAnimateFade.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C014ADF0 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C014C620 (NtUserGetPointerDevice.c)
 *     NtUserGetOwnerTransformedMonitorRect @ 0x1C0150A50 (NtUserGetOwnerTransformedMonitorRect.c)
 *     NtUserCheckMenuItem @ 0x1C0152450 (NtUserCheckMenuItem.c)
 *     ProcessHidRawInput @ 0x1C01CC720 (ProcessHidRawInput.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01DE0B0 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     zzzStartSonar @ 0x1C01DE9E8 (zzzStartSonar.c)
 *     DestroyTask @ 0x1C01E0830 (DestroyTask.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01EEB80 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 *     NtUserBlockInput @ 0x1C0210D60 (NtUserBlockInput.c)
 *     NtUserDelegateCapturePointers @ 0x1C02115F0 (NtUserDelegateCapturePointers.c)
 *     NtUserDestroyInputContext @ 0x1C02117F0 (NtUserDestroyInputContext.c)
 *     NtUserEnableTouchPad @ 0x1C0212250 (NtUserEnableTouchPad.c)
 *     NtUserGetGestureConfig @ 0x1C0212FD0 (NtUserGetGestureConfig.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C0213560 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     NtUserGetLayeredWindowAttributes @ 0x1C0213D80 (NtUserGetLayeredWindowAttributes.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C0214140 (NtUserGetPhysicalDeviceRect.c)
 *     NtUserGetRawInputBuffer @ 0x1C0214720 (NtUserGetRawInputBuffer.c)
 *     NtUserGetRawInputDeviceList @ 0x1C0214A70 (NtUserGetRawInputDeviceList.c)
 *     NtUserGetRegisteredRawInputDevices @ 0x1C0214F10 (NtUserGetRegisteredRawInputDevices.c)
 *     NtUserImpersonateDdeClientWindow @ 0x1C0216460 (NtUserImpersonateDdeClientWindow.c)
 *     NtUserInjectGesture @ 0x1C0216690 (NtUserInjectGesture.c)
 *     NtUserSetCalibrationData @ 0x1C0219310 (NtUserSetCalibrationData.c)
 *     NtUserSetDisplayMapping @ 0x1C0219950 (NtUserSetDisplayMapping.c)
 *     NtUserSetFallbackForeground @ 0x1C0219A90 (NtUserSetFallbackForeground.c)
 *     NtUserSetMenuContextHelpId @ 0x1C0219FF0 (NtUserSetMenuContextHelpId.c)
 *     NtUserSetMenuFlagRtoL @ 0x1C021A060 (NtUserSetMenuFlagRtoL.c)
 *     NtUserSetObjectInformation @ 0x1C021A180 (NtUserSetObjectInformation.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C021A2F0 (NtUserSetPrecisionTouchPadConfiguration.c)
 *     NtUserUnregisterUserApiHook @ 0x1C021B8C0 (NtUserUnregisterUserApiHook.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     xxxSetWindowShowState @ 0x1C0224CB4 (xxxSetWindowShowState.c)
 *     xxxCompositedPaint @ 0x1C0225130 (xxxCompositedPaint.c)
 *     xxxHardErrorControl @ 0x1C0226628 (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
UserAtomicCheck *__fastcall UserAtomicCheck::UserAtomicCheck(UserAtomicCheck *this)
{
  unsigned int v2; // ecx
  unsigned __int64 v3; // rbx

  *(_BYTE *)this = 0;
  ++gdwInAtomicOperation;
  if ( gpAtomickCheckStacks )
  {
    *((_DWORD *)this + 1) = ++gdwAtomicCheckSerial;
    v2 = 0;
    if ( gdwAtomicCheckLogSize )
    {
      while ( *(_DWORD *)(((unsigned __int64)v2 << 6) + gpAtomickCheckStacks) )
      {
        if ( ++v2 >= gdwAtomicCheckLogSize )
          return this;
      }
      v3 = (unsigned __int64)v2 << 6;
      *(_DWORD *)(v3 + gpAtomickCheckStacks) = gdwAtomicCheckSerial;
      *(_DWORD *)(gpAtomickCheckStacks + v3 + 4) = (unsigned int)PsGetCurrentThreadId();
      *(_DWORD *)(gpAtomickCheckStacks + v3 + 8) = (MEMORY[0xFFFFF78000000320]
                                                  * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      RtlWalkFrameChain((PVOID *)(v3 + gpAtomickCheckStacks + 16LL), 6u, 0x200u);
    }
  }
  return this;
}
