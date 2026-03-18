/*
 * XREFs of HvlRundownSecureProcess @ 0x140670C34
 * Callers:
 *     KeRundownSecureProcess @ 0x1401FF814 (KeRundownSecureProcess.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlRundownSecureProcess(__int64 a1)
{
  unsigned __int8 v2[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v3; // [rsp+28h] [rbp-80h]

  v3 = a1;
  return HvlpEnterIumSecureMode(1u, 10, 0, v2);
}
