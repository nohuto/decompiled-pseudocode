/*
 * XREFs of _PostMessage @ 0x1C00A4CB0
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SetMouseTrails @ 0x1C0094A28 (SetMouseTrails.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0099324 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     PostDeviceNotification @ 0x1C00E24AC (PostDeviceNotification.c)
 *     PostPointerEventMessage @ 0x1C00E4A50 (PostPointerEventMessage.c)
 *     _SetMagnificationInputTransform @ 0x1C00EFCE8 (_SetMagnificationInputTransform.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00FBA30 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     TrackMouseEvent @ 0x1C010A7AC (TrackMouseEvent.c)
 *     xxxImmProcessKey @ 0x1C010B600 (xxxImmProcessKey.c)
 *     xxxCancelMouseMoveTracking @ 0x1C011F634 (xxxCancelMouseMoveTracking.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0125804 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     NtUserEndMenu @ 0x1C01352D0 (NtUserEndMenu.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0141790 (xxxHandleMenuMessages.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0151C14 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C01523EC (xxxDWP_ProcessVirtKey.c)
 *     PowerOffGdi @ 0x1C0155010 (PowerOffGdi.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01CDFC8 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01CF5E8 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01D82EC (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01D8950 (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01D8C8C (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01DB124 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     DestroyTask @ 0x1C01E0830 (DestroyTask.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01E14DC (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01E3110 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01E3234 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01E33AC (xxxFreeDdeConv.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C0202E30 (xxxCancelTrackingForThread.c)
 *     _PostUIActions @ 0x1C021DB80 (_PostUIActions.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C0220444 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     zzzPostInertiaMessage @ 0x1C022A498 (zzzPostInertiaMessage.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v4 = 0;
  v5 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, 1);
  if ( v5 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0;
  return v4;
}
