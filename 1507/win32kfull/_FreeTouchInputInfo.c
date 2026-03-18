/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01DC920
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C006CF90 (fnHkINLPMSG.c)
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C007B368 (UnlinkSendListSms.c)
 *     CleanInputMessage @ 0x1C00FB5B0 (CleanInputMessage.c)
 *     ForwardTouchMessage @ 0x1C01DC718 (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C021C0F0 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall FreeTouchInputInfo(unsigned __int64 a1)
{
  _DWORD *v1; // rax

  v1 = (_DWORD *)HMValidateHandleNoSecure(a1, 20);
  if ( !v1 || *(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v1 + gSharedInfo[1] + 16LL) != 20 )
    return 0LL;
  HMDestroyObject(v1);
  return 1LL;
}
