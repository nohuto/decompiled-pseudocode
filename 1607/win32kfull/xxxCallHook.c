/*
 * XREFs of xxxCallHook @ 0x1C00A3C90
 * Callers:
 *     xxxGetInputEvent @ 0x1C005BD20 (xxxGetInputEvent.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxDesktopThreadWaiter @ 0x1C007F06C (xxxDesktopThreadWaiter.c)
 *     xxxCallCtfHook @ 0x1C007F1EC (xxxCallCtfHook.c)
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0082AD0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     xxxSetTrayWindow @ 0x1C00991F4 (xxxSetTrayWindow.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxRedrawTitle @ 0x1C00A0C90 (xxxRedrawTitle.c)
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00DAF30 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00E7090 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C00E84C0 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     xxxNotifyIMEStatus @ 0x1C0114C08 (xxxNotifyIMEStatus.c)
 *     xxxSendMinRectMessages @ 0x1C0120D8C (xxxSendMinRectMessages.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1C0148DA4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C0150DF0 (xxxRedrawFrameAndHook.c)
 *     xxxIsDragging @ 0x1C0150E5C (xxxIsDragging.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01DD958 (xxxCallJournalPlaybackHook.c)
 *     xxxCallMsgFilter @ 0x1C01DDE44 (xxxCallMsgFilter.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1384 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     PhkFirstValid @ 0x1C00A3CFC (PhkFirstValid.c)
 *     IsPointerInputHookCall @ 0x1C00A3D40 (IsPointerInputHookCall.c)
 */

__int64 __fastcall xxxCallHook(unsigned int a1, __int64 a2, int *a3, unsigned int a4)
{
  unsigned int v7; // r11d
  __int64 Valid; // rax

  if ( (unsigned int)IsPointerInputHookCall(a4, a3) )
    return xxxPointerCallHook(a1, a2, (__int64)a3, v7, dword_1C02EA610[v7 + 1]);
  Valid = PhkFirstValid(gptiCurrent, v7);
  return xxxCallHook2(Valid, a1, a2, a3, 0LL, 0);
}
