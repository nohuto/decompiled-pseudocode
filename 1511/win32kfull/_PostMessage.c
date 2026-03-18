/*
 * XREFs of _PostMessage @ 0x1C0078490
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0081C70 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxImmProcessKey @ 0x1C0081D4C (xxxImmProcessKey.c)
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 *     PostDeviceNotification @ 0x1C0089D90 (PostDeviceNotification.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     SetMouseTrails @ 0x1C0096C64 (SetMouseTrails.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00C7394 (xxxCancelMouseMoveTracking.c)
 *     TrackMouseEvent @ 0x1C00C7FCC (TrackMouseEvent.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     _SetMagnificationInputTransform @ 0x1C00D3DDC (_SetMagnificationInputTransform.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DD040 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C00FC6FC (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     PostPointerEventMessage @ 0x1C0110BB0 (PostPointerEventMessage.c)
 *     NtUserEndMenu @ 0x1C0113C70 (NtUserEndMenu.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0137D0C (xxxHandleMenuMessages.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014C8A4 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C014CE1C (xxxDWP_ProcessVirtKey.c)
 *     PowerOffGdi @ 0x1C014F490 (PowerOffGdi.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01D7144 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D855C (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E218C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E276C (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01E2A4C (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E4858 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 *     DestroyTask @ 0x1C01E9FB0 (DestroyTask.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01EA95C (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01EC584 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01EC6A8 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01EC7F8 (xxxFreeDdeConv.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C0201B8C (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C020BCE0 (xxxCancelTrackingForThread.c)
 *     _PostUIActions @ 0x1C0223710 (_PostUIActions.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C022A1E8 (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     PostInertiaMessage @ 0x1C0239A9C (PostInertiaMessage.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostMessage(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
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
