/*
 * XREFs of VslCreateSecureProcess @ 0x140620724
 * Callers:
 *     KeInitializeProcess @ 0x14046DD48 (KeInitializeProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslCreateSecureProcess(__int64 a1)
{
  NTSTATUS result; // eax
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]
  __int64 v5; // [rsp+30h] [rbp-78h]

  v4 = a1;
  result = VslpEnterIumSecureMode(1, 5LL, 0LL, (__int64)v3);
  if ( result >= 0 )
    *(_QWORD *)(a1 + 720) = v5;
  return result;
}
