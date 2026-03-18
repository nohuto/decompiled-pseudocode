/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01D48A0
 * Callers:
 *     UnlinkSendListSms @ 0x1C0058070 (UnlinkSendListSms.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxRealInternalGetMessage @ 0x1C0080E80 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C0084D00 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     CleanInputMessage @ 0x1C0123990 (CleanInputMessage.c)
 *     ForwardTouchMessage @ 0x1C01D46BC (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C0214FF0 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeTouchInputInfo(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rax

  LOBYTE(a2) = 20;
  v4 = (_DWORD *)HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( !v4 || *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v4 + gSharedInfo[1] + 16LL) != 20 )
    return 0LL;
  HMDestroyObject(v4);
  return 1LL;
}
