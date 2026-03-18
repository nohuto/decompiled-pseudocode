/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00579A0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000A1E0 (xxxSetModernAppWindow.c)
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxRemoveFullScreen @ 0x1C0056D5C (xxxRemoveFullScreen.c)
 *     zzzSetDesktop @ 0x1C0057510 (zzzSetDesktop.c)
 *     xxxDoPaint @ 0x1C005B83C (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserSwitchDesktop @ 0x1C0093EF0 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxQueryInformationThread @ 0x1C0096AA8 (xxxQueryInformationThread.c)
 *     xxxDeactivate @ 0x1C0098E24 (xxxDeactivate.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0099664 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxSendMessageBSM @ 0x1C009C7E0 (xxxSendMessageBSM.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009D254 (xxxCreateDefaultImeWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxTrackMouseMove @ 0x1C009DDCC (xxxTrackMouseMove.c)
 *     xxxSendFocusMessages @ 0x1C00A85CC (xxxSendFocusMessages.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C00E7380 (xxxImmUnloadThreadsLayout.c)
 *     RemoteDisableScreen @ 0x1C00EC3F0 (RemoteDisableScreen.c)
 *     xxxSetShellWindow @ 0x1C00ED41C (xxxSetShellWindow.c)
 *     xxxCloseClipboard @ 0x1C00F8DF0 (xxxCloseClipboard.c)
 *     xxxEmptyClipboard @ 0x1C00F94F0 (xxxEmptyClipboard.c)
 *     xxxWaitForInputIdle @ 0x1C01046AC (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0104BCC (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxCancelTracking @ 0x1C0109250 (xxxCancelTracking.c)
 *     xxxDesktopsRecalc @ 0x1C010DDE8 (xxxDesktopsRecalc.c)
 *     CleanupW32ThreadLocks @ 0x1C0116C20 (CleanupW32ThreadLocks.c)
 *     xxxSendMinRectMessages @ 0x1C0120D8C (xxxSendMinRectMessages.c)
 *     xxxAddFullScreen @ 0x1C0129B34 (xxxAddFullScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C012BF54 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 *     NtUserGetClipboardData @ 0x1C0150380 (NtUserGetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C0151B64 (xxxSetClipboardViewer.c)
 *     xxxChangeClipboardChain @ 0x1C015224C (xxxChangeClipboardChain.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C01541F8 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0154254 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01CA984 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01D7090 (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D82EC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01D8950 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01D9958 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01D9FA0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01DA380 (xxxImmActivateThreadsLayout.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01DD3C0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxDeferredDesktopRotation @ 0x1C01E58C0 (xxxDeferredDesktopRotation.c)
 *     xxxDisownClipboard @ 0x1C01E684C (xxxDisownClipboard.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     xxxHardErrorControl @ 0x1C0226628 (xxxHardErrorControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v5 + 16) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
