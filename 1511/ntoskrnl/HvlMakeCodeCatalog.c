/*
 * XREFs of HvlMakeCodeCatalog @ 0x140220EEC
 * Callers:
 *     <none>
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlMakeCodeCatalog(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  unsigned __int8 v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  v2 = *a1;
  v7 = a2;
  v6 = v2;
  result = HvlpEnterIumSecureMode(1u, 19, 0, v5);
  if ( result >= 0 )
    *a1 = v7;
  return result;
}
