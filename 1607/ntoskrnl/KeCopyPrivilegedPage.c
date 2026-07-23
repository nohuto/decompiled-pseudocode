/*
 * XREFs of KeCopyPrivilegedPage @ 0x1401D1E6C
 * Callers:
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KeCopyPrivilegedPage(__int64 a1, __int128 *a2, __int64 a3, __int128 *a4, char a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int128 v10; // [rsp+30h] [rbp-78h]
  __int64 v11; // [rsp+40h] [rbp-68h]
  __int128 v12; // [rsp+48h] [rbp-60h]
  char v13; // [rsp+58h] [rbp-50h]

  v5 = *a4;
  v6 = *a2;
  v9 = a3;
  v11 = a1;
  v13 = a5 & 1;
  v10 = v5;
  v12 = v6;
  return VslpEnterIumSecureMode(1, 228LL, 0LL, (__int64)v8);
}
