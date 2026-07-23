/*
 * XREFs of KeUnsecureProcess @ 0x1401D2234
 * Callers:
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 v1; // rax
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  v1 = *(_QWORD *)(a1 + 720);
  *(_QWORD *)(a1 + 720) = 0LL;
  v4 = v1;
  return VslpEnterIumSecureMode(1, 27LL, 0LL, (__int64)v3);
}
