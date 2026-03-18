/*
 * XREFs of _FreeTouchInputInfo @ 0x1C01DCFC0
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxRealInternalGetMessage @ 0x1C0059620 (xxxRealInternalGetMessage.c)
 *     fnHkINLPMSG @ 0x1C005CBA0 (fnHkINLPMSG.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C0065234 (UnlinkSendListSms.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     CleanInputMessage @ 0x1C01039F0 (CleanInputMessage.c)
 *     ForwardTouchMessage @ 0x1C01DCDB8 (ForwardTouchMessage.c)
 *     NtUserGetTouchInputInfo @ 0x1C021BED0 (NtUserGetTouchInputInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
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
