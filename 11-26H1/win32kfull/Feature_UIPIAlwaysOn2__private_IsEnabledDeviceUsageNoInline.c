/*
 * XREFs of Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x14029D1AC
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1400441AC (xxxProcessNotifyWinEvent.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     zzzSetDesktop @ 0x140059C20 (zzzSetDesktop.c)
 *     ?FCallerOk@@YAHPEAUtagWND@@@Z @ 0x140086128 (-FCallerOk@@YAHPEAUtagWND@@@Z.c)
 *     _ChangeWindowMessageFilterEx @ 0x14012BF48 (_ChangeWindowMessageFilterEx.c)
 *     ?xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z @ 0x1401338B8 (-xxxSendMousePromotion@@YAXAEBUtagMOUSE_PROMOTION_ENTRY@@W4MouseInputDataProcessingOptions@@@Z.c)
 *     _PostThreadMessageEx @ 0x1401D3210 (_PostThreadMessageEx.c)
 *     NtUserPostThreadMessage @ 0x1401D3B50 (NtUserPostThreadMessage.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1401E6C74 (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     _ChangeWindowMessageFilter @ 0x14020C51C (_ChangeWindowMessageFilter.c)
 *     ?ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z @ 0x14027C710 (-ValidatePropWindow@@YAPEAUtagWND@@PEAUHWND__@@W4ValidatePropWindowKind@@@Z.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14029B9AC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x1402A3124 (-zzzSetWindowsHookEx_New@@YAPEAUHHOOK__@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH.c)
 *     ?GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z @ 0x1402AD928 (-GetWindowProcessHandleUnsafe@@YAPEAXPEAUtagWND@@PEBUtagTHREADINFO@@K@Z.c)
 *     NtUserGetSendMessageReceiver @ 0x1402B4BB0 (NtUserGetSendMessageReceiver.c)
 *     NtUserGetWindowProcessHandle @ 0x1402B58B0 (NtUserGetWindowProcessHandle.c)
 *     NtUserMagSetContextInformation @ 0x1402B7E60 (NtUserMagSetContextInformation.c)
 *     NtUserRegisterPointerInputTarget @ 0x1402BA390 (NtUserRegisterPointerInputTarget.c)
 * Callees:
 *     Feature_UIPIAlwaysOn2__private_IsEnabledFallback @ 0x14029D1E8 (Feature_UIPIAlwaysOn2__private_IsEnabledFallback.c)
 */

__int64 Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UIPIAlwaysOn2__private_featureState & 0x10) != 0 )
    return Feature_UIPIAlwaysOn2__private_featureState & 1;
  else
    return Feature_UIPIAlwaysOn2__private_IsEnabledFallback(
             (unsigned int)Feature_UIPIAlwaysOn2__private_featureState,
             3LL);
}
