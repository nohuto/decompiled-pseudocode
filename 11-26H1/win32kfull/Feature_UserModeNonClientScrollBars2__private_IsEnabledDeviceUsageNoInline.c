/*
 * XREFs of Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1401D9058 (-GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x14025FDB4 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserGetScrollBarInfo @ 0x1402B4840 (NtUserGetScrollBarInfo.c)
 *     NtUserSBGetParms @ 0x1402BAFF0 (NtUserSBGetParms.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x140302274 (-GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z.c)
 * Callees:
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback @ 0x140297204 (Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback.c)
 */

__int64 Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UserModeNonClientScrollBars2__private_featureState & 0x10) != 0 )
    return Feature_UserModeNonClientScrollBars2__private_featureState & 1;
  else
    return Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback(
             (unsigned int)Feature_UserModeNonClientScrollBars2__private_featureState,
             3LL);
}
