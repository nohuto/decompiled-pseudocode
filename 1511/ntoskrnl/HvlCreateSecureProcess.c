/*
 * XREFs of HvlCreateSecureProcess @ 0x1405F6A8C
 * Callers:
 *     KeInitializeProcess @ 0x14044F998 (KeInitializeProcess.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlCreateSecureProcess(__int64 a1)
{
  NTSTATUS result; // eax
  unsigned __int8 v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]
  __int64 v5; // [rsp+30h] [rbp-78h]

  v4 = a1;
  result = HvlpEnterIumSecureMode(1u, 5, 0, v3);
  if ( result >= 0 )
    *(_QWORD *)(a1 + 720) = v5;
  return result;
}
