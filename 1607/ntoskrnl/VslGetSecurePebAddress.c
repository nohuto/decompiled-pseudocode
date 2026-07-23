/*
 * XREFs of VslGetSecurePebAddress @ 0x1406209E0
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     DbgkpPostModuleMessages @ 0x140618BD4 (DbgkpPostModuleMessages.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
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
