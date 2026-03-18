/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C008C240
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0006F50 (xxxSetModernAppWindow.c)
 *     xxxDesktopsRecalc @ 0x1C00396B0 (xxxDesktopsRecalc.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxCancelTracking @ 0x1C0044D18 (xxxCancelTracking.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C0046914 (xxxSendFocusMessages.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C004E0FC (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageBSM @ 0x1C004E260 (xxxSendMessageBSM.c)
 *     xxxCreateDefaultImeWindow @ 0x1C0052518 (xxxCreateDefaultImeWindow.c)
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxTrackMouseMove @ 0x1C007AAC8 (xxxTrackMouseMove.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     xxxRemoveFullScreen @ 0x1C008B664 (xxxRemoveFullScreen.c)
 *     zzzSetDesktop @ 0x1C008BDA0 (zzzSetDesktop.c)
 *     xxxDoPaint @ 0x1C008FE9C (xxxDoPaint.c)
 *     xxxCloseClipboard @ 0x1C00D61F0 (xxxCloseClipboard.c)
 *     xxxWaitForInputIdle @ 0x1C00E00DC (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00E02A8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     CleanupW32ThreadLocks @ 0x1C00F0590 (CleanupW32ThreadLocks.c)
 *     xxxSendMinRectMessages @ 0x1C00F95D8 (xxxSendMinRectMessages.c)
 *     xxxAddFullScreen @ 0x1C00FCEA4 (xxxAddFullScreen.c)
 *     NtUserSwitchDesktop @ 0x1C00FF360 (NtUserSwitchDesktop.c)
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 *     NtUserGetClipboardData @ 0x1C0121150 (NtUserGetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C0123880 (xxxSetClipboardViewer.c)
 *     xxxChangeClipboardChain @ 0x1C0123C68 (xxxChangeClipboardChain.c)
 *     xxxEmptyClipboard @ 0x1C0128CAC (xxxEmptyClipboard.c)
 *     xxxQueryInformationThread @ 0x1C012B334 (xxxQueryInformationThread.c)
 *     RemoteDisableScreen @ 0x1C012DEBC (RemoteDisableScreen.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C012EC2C (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C012ED14 (RemoteRedrawScreen.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0130508 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C013AF40 (xxxImmUnloadThreadsLayout.c)
 *     xxxSetShellWindow @ 0x1C014992C (xxxSetShellWindow.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D10E0 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01E0760 (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E1B7C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E2248 (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2C04 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E3250 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3630 (xxxImmActivateThreadsLayout.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E67A4 (xxxForceUpdateProcessDpiAwareness.c)
 *     xxxDeferredDesktopRotation @ 0x1C01EFB80 (xxxDeferredDesktopRotation.c)
 *     xxxDisownClipboard @ 0x1C01F0BAC (xxxDisownClipboard.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     xxxHardErrorControl @ 0x1C0226550 (xxxHardErrorControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
