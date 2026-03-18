/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x14004B8D0
 * Callers:
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140004B14 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxSendMessageBSM @ 0x140004CE0 (xxxSendMessageBSM.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x140006DC8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x1400365BC (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagWINDOWSTATION@@$1?UserDereferenceObject@@YAXPEAX@Z$00$00$00@@AEAAX_N0@Z @ 0x14004AEE8 (-UnlockWorker@-$Win32RawLockedItemBase@UtagWINDOWSTATION@@$1-UserDereferenceObject@@YAXPEAX@Z$00.c)
 *     xxxDoPaint @ 0x14004F698 (xxxDoPaint.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1400869B0 (-xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4Win.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1400CC45C (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     xxxQueryInformationThread @ 0x1401535CC (xxxQueryInformationThread.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxDeferredDesktopRotation@@YA_KXZ @ 0x14015B4C0 (-xxxDeferredDesktopRotation@@YA_KXZ.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     xxxSetClipboardViewer @ 0x1401AF468 (xxxSetClipboardViewer.c)
 *     xxxCloseClipboard @ 0x1401B02A0 (xxxCloseClipboard.c)
 *     xxxEmptyClipboard @ 0x1401B2154 (xxxEmptyClipboard.c)
 *     RemoteDisableScreen @ 0x1401B25E8 (RemoteDisableScreen.c)
 *     xxxSwitchDesktopWithFade @ 0x1401B2760 (xxxSwitchDesktopWithFade.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     EditionFreeIMEKeyboardLayouts @ 0x1401C7430 (EditionFreeIMEKeyboardLayouts.c)
 *     ??1CDwmNotifyBatch@@IEAA@XZ @ 0x1401DEB84 (--1CDwmNotifyBatch@@IEAA@XZ.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1401FAD80 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1401FB45C (xxxPSMGetTextExtent.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x140208030 (-UnlockWorker@-$Win32RawLockedItemBase@UtagQMSG@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1402157B8 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x140218948 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?UnlockWorker@?$Win32RawLockedItemBase@X$0A@$00$00$00@@AEAAX_N0@Z @ 0x140219988 (-UnlockWorker@-$Win32RawLockedItemBase@X$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     xxxSendMinRectMessages @ 0x14021D3B4 (xxxSendMinRectMessages.c)
 *     ?xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z @ 0x140234B0C (-xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z.c)
 *     xxxHardErrorControl @ 0x140244D3C (xxxHardErrorControl.c)
 *     NtUserSwitchDesktop @ 0x14025C610 (NtUserSwitchDesktop.c)
 *     RemoteRedrawScreen @ 0x14026EB0C (RemoteRedrawScreen.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x14026ED64 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x14027AA50 (EditionHandleAndPostKeyEvent.c)
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14029419C (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1402A023C (xxxGetDeviceChangeInfo.c)
 *     xxxDDETrackWindowDying @ 0x1402CDDE4 (xxxDDETrackWindowDying.c)
 *     xxxChangeClipboardChain @ 0x1402CF520 (xxxChangeClipboardChain.c)
 *     ?xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z @ 0x1402E510C (-xxxApplyActionOld@WindowActions@@YAKPEAUtagWND@@_NPEAU_WINDOW_ACTION@@@Z.c)
 *     xxxMessageEvent @ 0x1402EFAA8 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1402F2554 (xxxDragObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v3; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v3 = *CurrentThreadWin32Thread;
  else
    v3 = 0LL;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v3 + 376) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
