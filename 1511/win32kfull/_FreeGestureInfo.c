/*
 * XREFs of _FreeGestureInfo @ 0x1C02044A0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C005CBA0 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C0065234 (UnlinkSendListSms.c)
 *     CleanInputMessage @ 0x1C01039F0 (CleanInputMessage.c)
 *     SendGestureMessage @ 0x1C0204140 (SendGestureMessage.c)
 *     NtUserGetGestureExtArgs @ 0x1C021A4B0 (NtUserGetGestureExtArgs.c)
 *     NtUserGetGestureInfo @ 0x1C021A600 (NtUserGetGestureInfo.c)
 *     NtUserInjectGesture @ 0x1C021CBB0 (NtUserInjectGesture.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
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
