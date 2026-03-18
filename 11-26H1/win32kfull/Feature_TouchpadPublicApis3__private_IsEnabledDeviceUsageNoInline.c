/*
 * XREFs of Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x1402A08EC
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z @ 0x1401DAF58 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIH@Z.c)
 *     PostPointerEventMessage @ 0x1401F1830 (PostPointerEventMessage.c)
 *     ?ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z @ 0x1402089BC (-ShouldReceiveTouchpadMessages@@YA_NPEBUtagTHREADINFO@@PEAUHWND__@@@Z.c)
 *     NtUserGetCurrentInputMessageSource @ 0x14021E140 (NtUserGetCurrentInputMessageSource.c)
 *     EditionQueryInertiaWorker @ 0x14023C6E0 (EditionQueryInertiaWorker.c)
 *     NtUserInjectTouchpadAction @ 0x1402B7030 (NtUserInjectTouchpadAction.c)
 *     NtUserRegisterTouchpadCapableWindow @ 0x1402BA7A0 (NtUserRegisterTouchpadCapableWindow.c)
 * Callees:
 *     Feature_TouchpadPublicApis3__private_IsEnabledFallback @ 0x1402A0928 (Feature_TouchpadPublicApis3__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadPublicApis3__private_featureState & 0x10) != 0 )
    return Feature_TouchpadPublicApis3__private_featureState & 1;
  else
    return Feature_TouchpadPublicApis3__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadPublicApis3__private_featureState,
             3LL);
}
