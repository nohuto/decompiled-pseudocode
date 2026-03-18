/*
 * XREFs of PostShellHookMessagesEx @ 0x1C00992D4
 * Callers:
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C00539B8 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     xxxSetTrayWindow @ 0x1C00991F4 (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C00A0C90 (xxxRedrawTitle.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00DAF30 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetInformationThread @ 0x1C00DCC90 (xxxSetInformationThread.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01480A8 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0148218 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0148DA4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0150DF0 (xxxRedrawFrameAndHook.c)
 *     PTPEnableHotkeyCallback @ 0x1C01C9490 (PTPEnableHotkeyCallback.c)
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01C9B00 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01C9B60 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxRestoreSlateAutorotationPreferences @ 0x1C01CA400 (xxxRestoreSlateAutorotationPreferences.c)
 *     ?WinlogonWinSpaceCallback@@YAX_K_J@Z @ 0x1C01D1480 (-WinlogonWinSpaceCallback@@YAX_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PostShellHookMessagesEx(unsigned int a1, __int64 a2, struct tagINPUT_MESSAGE_SOURCE *a3)
{
  unsigned __int64 v3; // rbx

  v3 = a1;
  if ( a1 == 12 )
    SetLastInputWoken(0LL, 0LL);
  _PostShellHookMsgWorker(*(_DWORD *)(gpsi + 912LL), v3, a2, a3);
}
