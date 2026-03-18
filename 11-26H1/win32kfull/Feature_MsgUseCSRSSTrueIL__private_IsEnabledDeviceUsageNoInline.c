/*
 * XREFs of Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x14028C1E4
 * Callers:
 *     _PostTransformableMessageIL @ 0x1400218F0 (_PostTransformableMessageIL.c)
 *     NtUserPostMessage @ 0x140022150 (NtUserPostMessage.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x14012EDA0 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14012F170 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     NtUserPostThreadMessage @ 0x1401D3B50 (NtUserPostThreadMessage.c)
 *     _PostMessageCheckIL @ 0x1401EE5AC (_PostMessageCheckIL.c)
 * Callees:
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback @ 0x14028C220 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback.c)
 */

__int64 Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_MsgUseCSRSSTrueIL__private_featureState & 0x10) != 0 )
    return Feature_MsgUseCSRSSTrueIL__private_featureState & 1;
  else
    return Feature_MsgUseCSRSSTrueIL__private_IsEnabledFallback(
             (unsigned int)Feature_MsgUseCSRSSTrueIL__private_featureState,
             3LL);
}
