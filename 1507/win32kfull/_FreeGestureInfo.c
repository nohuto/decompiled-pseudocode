/*
 * XREFs of _FreeGestureInfo @ 0x1C0204130
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C006CF90 (fnHkINLPMSG.c)
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C007B368 (UnlinkSendListSms.c)
 *     CleanInputMessage @ 0x1C00FB5B0 (CleanInputMessage.c)
 *     SendGestureMessage @ 0x1C0203DD0 (SendGestureMessage.c)
 *     NtUserGetGestureExtArgs @ 0x1C021A740 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C021A880 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C021CDA0 (NtUserInjectGesture.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeGestureInfo(unsigned __int64 a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)HMValidateHandleNoSecure(a1, 21);
  if ( !v1 || *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v1 + gSharedInfo[1] + 16LL) != 21 )
    return 0LL;
  HMDestroyObject(v1);
  return 1LL;
}
