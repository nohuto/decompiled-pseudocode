/*
 * XREFs of UsbhEtwLogHubInformation @ 0x1C000BE7C
 * Callers:
 *     UsbhEtwRundown @ 0x1C00092A8 (UsbhEtwRundown.c)
 *     UsbhSetFdoPnpState @ 0x1C000A3F0 (UsbhSetFdoPnpState.c)
 * Callees:
 *     UsbhEtwGetHubInfo @ 0x1C000BDE0 (UsbhEtwGetHubInfo.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhEtwLogHubInformation(__int64 a1)
{
  PCEVENT_DESCRIPTOR v1; // r10
  __int64 result; // rax
  _BYTE v3[40]; // [rsp+78h] [rbp-40h] BYREF

  if ( dword_1C0067650 )
  {
    UsbhEtwGetHubInfo(a1, (__int64)v3);
    return UsbhEtwWrite(v1, 0LL);
  }
  return result;
}
