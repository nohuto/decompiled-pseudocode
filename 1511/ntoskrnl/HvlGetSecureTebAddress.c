/*
 * XREFs of HvlGetSecureTebAddress @ 0x1405F6BE4
 * Callers:
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlGetSecureTebAddress(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  NTSTATUS result; // eax
  unsigned __int8 v5[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v6; // [rsp+28h] [rbp-80h]
  __int64 v7; // [rsp+30h] [rbp-78h]

  v2 = *(unsigned int *)(a1 + 796);
  v7 = a1;
  v6 = v2;
  result = HvlpEnterIumSecureMode(1u, 12, 0, v5);
  if ( result >= 0 )
    *a2 = v7;
  return result;
}
