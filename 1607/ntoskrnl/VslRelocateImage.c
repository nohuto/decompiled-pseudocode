/*
 * XREFs of VslRelocateImage @ 0x14023D4FC
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslRelocateImage(__int64 a1, __int64 a2)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]
  __int64 v5; // [rsp+30h] [rbp-78h]

  v4 = a1;
  v5 = a2;
  return VslpEnterIumSecureMode(1, 26LL, 0LL, (__int64)v3);
}
