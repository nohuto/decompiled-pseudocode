/*
 * XREFs of KeReservePrivilegedPages @ 0x1401FF280
 * Callers:
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KeReservePrivilegedPages(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  unsigned __int8 v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+38h] [rbp-70h]

  v6 = a2;
  v5 = a1;
  v7 = a3;
  return HvlpEnterIumSecureMode(1u, 210, 0, v4);
}
