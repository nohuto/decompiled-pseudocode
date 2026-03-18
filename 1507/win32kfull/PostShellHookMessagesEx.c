/*
 * XREFs of PostShellHookMessagesEx @ 0x1C0085F90
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0040454 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxSetTrayWindow @ 0x1C0047654 (xxxSetTrayWindow.c)
 *     xxxRedrawTitle @ 0x1C0047C70 (xxxRedrawTitle.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0059308 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     CalcWindowFullScreen @ 0x1C006601C (CalcWindowFullScreen.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     xxxSetInformationThread @ 0x1C007D080 (xxxSetInformationThread.c)
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0117594 (xxxDestroyCorrespondingGhostWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C011776C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0118004 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0122250 (xxxRedrawFrameAndHook.c)
 *     PTPEnableHotkeyCallback @ 0x1C01CFB60 (PTPEnableHotkeyCallback.c)
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D06B0 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     ?WinlogonWinSpaceCallback@@YAX_K_J@Z @ 0x1C01D8F90 (-WinlogonWinSpaceCallback@@YAX_K_J@Z.c)
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
