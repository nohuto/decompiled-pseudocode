/*
 * XREFs of HvlRelocateImage @ 0x140221014
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlRelocateImage(__int64 a1, __int64 a2)
{
  unsigned __int8 v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]
  __int64 v5; // [rsp+30h] [rbp-78h]

  v4 = a1;
  v5 = a2;
  return HvlpEnterIumSecureMode(1u, 24, 0, v3);
}
