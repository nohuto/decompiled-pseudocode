/*
 * XREFs of VslIumEtwEnableCallback @ 0x140620B48
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslIumEtwEnableCallback(
        __int128 *a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v9; // [rsp+28h] [rbp-80h]
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int64 v11; // [rsp+40h] [rbp-68h]
  __int64 v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  __int64 v14; // [rsp+58h] [rbp-50h]

  v9 = *a1;
  v10 = a2;
  v11 = a3;
  v13 = a5;
  v12 = a4;
  v14 = a7;
  return VslpEnterIumSecureMode(1, 212LL, 0LL, (__int64)v8);
}
