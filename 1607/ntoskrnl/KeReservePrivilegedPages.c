/*
 * XREFs of KeReservePrivilegedPages @ 0x1401D1EDC
 * Callers:
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KeReservePrivilegedPages(__int64 a1, unsigned int a2, unsigned int a3)
{
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]
  __int64 v7; // [rsp+38h] [rbp-70h]

  v6 = a2;
  v5 = a1;
  v7 = a3;
  return VslpEnterIumSecureMode(1, 210LL, 0LL, (__int64)v4);
}
