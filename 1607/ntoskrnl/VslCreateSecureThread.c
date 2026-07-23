/*
 * XREFs of VslCreateSecureThread @ 0x140620784
 * Callers:
 *     KeSecureThread @ 0x1401D2CF8 (KeSecureThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslCreateSecureThread(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7)
{
  NTSTATUS result; // eax
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+28h] [rbp-80h]
  __int64 v10; // [rsp+30h] [rbp-78h]
  __int64 v11; // [rsp+38h] [rbp-70h]
  __int64 v12; // [rsp+40h] [rbp-68h]
  __int64 v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+50h] [rbp-58h]
  __int64 v15; // [rsp+58h] [rbp-50h]

  v9 = *(_QWORD *)(a1 + 720);
  v11 = *(_QWORD *)(a3 + 48);
  v14 = a5;
  v10 = a2;
  v12 = a3;
  v13 = a4;
  v15 = a6;
  result = VslpEnterIumSecureMode(1, 7LL, 0LL, (__int64)v8);
  if ( result >= 0 )
    *a7 = v10;
  return result;
}
