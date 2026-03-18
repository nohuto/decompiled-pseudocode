/*
 * XREFs of VslGetSecurePebAddress @ 0x14062092C
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     DbgkpPostModuleMessages @ 0x140618B20 (DbgkpPostModuleMessages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslGetSecurePebAddress(__int64 a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  __int64 v6; // [rsp+30h] [rbp-78h]

  v5 = *(_QWORD *)(a1 + 720);
  result = VslpEnterIumSecureMode(1, 192LL, 0LL, (__int64)v4);
  if ( result >= 0 )
    *a2 = v6;
  return result;
}
