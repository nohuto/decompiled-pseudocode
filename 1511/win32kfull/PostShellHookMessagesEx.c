/*
 * XREFs of PostShellHookMessagesEx @ 0x1C0081C20
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     CalcWindowFullScreen @ 0x1C0055DBC (CalcWindowFullScreen.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C006BDDC (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     xxxSetTrayWindow @ 0x1C00803EC (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C0081B30 (xxxRedrawTitle.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0103828 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C01424F8 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01426D0 (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0143000 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C014BF70 (xxxRedrawFrameAndHook.c)
 *     PTPEnableHotkeyCallback @ 0x1C01D17C0 (PTPEnableHotkeyCallback.c)
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D2260 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D22C0 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxRestoreSlateAutorotationPreferences @ 0x1C01D2924 (xxxRestoreSlateAutorotationPreferences.c)
 *     ?WinlogonWinSpaceCallback@@YAX_K_J@Z @ 0x1C01D9E20 (-WinlogonWinSpaceCallback@@YAX_K_J@Z.c)
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
