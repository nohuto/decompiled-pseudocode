/*
 * XREFs of HvlGetSecurePebAddress @ 0x1405F6B80
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HvlGetSecurePebAddress(__int64 a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  unsigned __int8 v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]

  v5 = *(_QWORD *)(a1 + 720);
  result = HvlpEnterIumSecureMode(1u, 192, 0, v4);
  if ( result >= 0 )
    *a2 = v6;
  return result;
}
