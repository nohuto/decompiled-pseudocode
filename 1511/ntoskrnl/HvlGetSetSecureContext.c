/*
 * XREFs of HvlGetSetSecureContext @ 0x1405F6C4C
 * Callers:
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlGetSetSecureContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]
  __int64 v8; // [rsp+38h] [rbp-70h]

  v6 = a2;
  v7 = a3;
  v8 = a4;
  return HvlpEnterIumSecureMode(1u, (a1 != 0) + 13, 0, v5);
}
