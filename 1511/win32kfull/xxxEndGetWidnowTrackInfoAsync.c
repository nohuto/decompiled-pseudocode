/*
 * XREFs of xxxEndGetWidnowTrackInfoAsync @ 0x1C0092890
 * Callers:
 *     xxxProcessAsyncSendMessage @ 0x1C008FCE8 (xxxProcessAsyncSendMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C00928D8 (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxEndGetWidnowTrackInfoAsync(__int64 a1)
{
  _BYTE v3[40]; // [rsp+20h] [rbp-38h] BYREF

  xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v3, 0LL, 0);
  return xxxNotifyShellTrackedWindowTrackingInfo(a1, v3);
}
