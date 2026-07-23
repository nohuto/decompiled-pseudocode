/*
 * XREFs of VslRundownSecureProcess @ 0x140620BC4
 * Callers:
 *     KeRundownSecureProcess @ 0x1401D2040 (KeRundownSecureProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslRundownSecureProcess(__int64 a1)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return VslpEnterIumSecureMode(1, 10LL, 0LL, (__int64)v2);
}
