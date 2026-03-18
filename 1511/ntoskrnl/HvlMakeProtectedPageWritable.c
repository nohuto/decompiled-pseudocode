/*
 * XREFs of HvlMakeProtectedPageWritable @ 0x1401B319C
 * Callers:
 *     KeSetPagePrivilege @ 0x1401C3384 (KeSetPagePrivilege.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlMakeProtectedPageWritable(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm0
  unsigned __int8 v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int128 v6; // [rsp+30h] [rbp-78h]

  if ( !HvlpVsmVtlCallVa )
    return 0;
  v3 = *a2;
  v5 = a1;
  v6 = v3;
  return HvlpEnterIumSecureMode(1u, 229, 0, v4);
}
