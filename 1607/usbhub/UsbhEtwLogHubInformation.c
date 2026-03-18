/*
 * XREFs of UsbhEtwLogHubInformation @ 0x1C001BAA8
 * Callers:
 *     UsbhSetFdoPnpState @ 0x1C000B850 (UsbhSetFdoPnpState.c)
 *     UsbhEtwRundown @ 0x1C001E844 (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C001D860 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C001DB80 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C0029400 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhEtwLogHubInformation(__int64 a1)
{
  PCEVENT_DESCRIPTOR v1; // r10
  __int64 result; // rax
  _BYTE v3[40]; // [rsp+78h] [rbp-40h] BYREF

  if ( dword_1C0067650 )
  {
    UsbhEtwGetHubInfo(a1, v3);
    return UsbhEtwWrite(v1, 0LL);
  }
  return result;
}
