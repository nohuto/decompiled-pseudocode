/*
 * XREFs of KeUnsecureProcess @ 0x1401FFA8C
 * Callers:
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  v1 = *(_QWORD *)(a1 + 720);
  *(_QWORD *)(a1 + 720) = 0LL;
  v4 = v1;
  return HvlpEnterIumSecureMode(1u, 24, 0, v3);
}
