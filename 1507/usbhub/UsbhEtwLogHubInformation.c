/*
 * XREFs of UsbhEtwLogHubInformation @ 0x1C0019A0C
 * Callers:
 *     UsbhEtwRundown @ 0x1C001DE28 (UsbhEtwRundown.c)
 *     UsbhSetFdoPnpState @ 0x1C0021CB0 (UsbhSetFdoPnpState.c)
 * Callees:
 *     UsbhEtwGetHubInfo @ 0x1C0019020 (UsbhEtwGetHubInfo.c)
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhEtwLogHubInformation(__int64 a1)
{
  PCEVENT_DESCRIPTOR v1; // r10
  __int64 result; // rax
  _BYTE v3[40]; // [rsp+78h] [rbp-40h] BYREF

  if ( dword_1C0066650 )
  {
    UsbhEtwGetHubInfo(a1, (__int64)v3);
    return UsbhEtwWrite(v1, 0LL);
  }
  return result;
}
