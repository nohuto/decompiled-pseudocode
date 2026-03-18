/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C0064370
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0007700 (xxxSetModernAppWindow.c)
 *     xxxDoPaint @ 0x1C0055FF8 (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C005D110 (xxxReceiveMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzSetDesktop @ 0x1C00644C0 (zzzSetDesktop.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxRemoveFullScreen @ 0x1C0068C7C (xxxRemoveFullScreen.c)
 *     xxxSendFocusMessages @ 0x1C0080EB8 (xxxSendFocusMessages.c)
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C008D658 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageBSM @ 0x1C008D820 (xxxSendMessageBSM.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     xxxCreateDefaultImeWindow @ 0x1C008F8CC (xxxCreateDefaultImeWindow.c)
 *     xxxCancelTracking @ 0x1C0090B88 (xxxCancelTracking.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0098BF4 (xxxImmUnloadThreadsLayout.c)
 *     RemoteDisableScreen @ 0x1C009DB54 (RemoteDisableScreen.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 *     xxxQueryInformationThread @ 0x1C00CE3F8 (xxxQueryInformationThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D1434 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCloseClipboard @ 0x1C00DBC30 (xxxCloseClipboard.c)
 *     xxxEmptyClipboard @ 0x1C00DC248 (xxxEmptyClipboard.c)
 *     xxxWaitForInputIdle @ 0x1C00E296C (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C00E2DB4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     NtUserSwitchDesktop @ 0x1C00E3790 (NtUserSwitchDesktop.c)
 *     xxxDesktopsRecalc @ 0x1C00EF5E0 (xxxDesktopsRecalc.c)
 *     CleanupW32ThreadLocks @ 0x1C00F4750 (CleanupW32ThreadLocks.c)
 *     xxxAddFullScreen @ 0x1C01092CC (xxxAddFullScreen.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 *     NtUserGetClipboardData @ 0x1C014AE60 (NtUserGetClipboardData.c)
 *     xxxSetClipboardViewer @ 0x1C014C7F4 (xxxSetClipboardViewer.c)
 *     xxxChangeClipboardChain @ 0x1C014CC7C (xxxChangeClipboardChain.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C014E74C (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C014E7A8 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D2D84 (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01E0D70 (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E218C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E276C (TryDetachShellFrame.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E3094 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01E36E0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmActivateThreadsLayout @ 0x1C01E3AC0 (xxxImmActivateThreadsLayout.c)
 *     xxxForceUpdateProcessDpiAwareness @ 0x1C01E6C34 (xxxForceUpdateProcessDpiAwareness.c)
 *     xxxDeferredDesktopRotation @ 0x1C01EFB80 (xxxDeferredDesktopRotation.c)
 *     xxxDisownClipboard @ 0x1C01F0B0C (xxxDisownClipboard.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 *     xxxHardErrorControl @ 0x1C02268E8 (xxxHardErrorControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
