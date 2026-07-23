/*
 * XREFs of VslGetSecureTebAddress @ 0x140620A44
 * Callers:
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslGetSecureTebAddress(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  _BYTE v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  v2 = *(unsigned int *)(a1 + 796);
  v7 = a1;
  v6 = v2;
  result = VslpEnterIumSecureMode(1, 12LL, 0LL, (__int64)v5);
  if ( result >= 0 )
    *a2 = v7;
  return result;
}
