/*
 * XREFs of xxxEndGetWidnowTrackInfoAsync @ 0x1C0227630
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C01D663C (xxxNotifyShellTrackedWindowTrackingInfo.c)
 */

__int64 __fastcall xxxEndGetWidnowTrackInfoAsync(__int64 a1)
{
  _DWORD v3[10]; // [rsp+20h] [rbp-38h] BYREF

  xxxInitSendValidateMinMaxInfoEx(a1, (__int64)v3, 0LL, 0);
  return xxxNotifyShellTrackedWindowTrackingInfo(a1, v3);
}
