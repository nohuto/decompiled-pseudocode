/*
 * XREFs of VslEndSecurePageIteration @ 0x1401C2678
 * Callers:
 *     HvlpEndSecurePageListIteration @ 0x1401C1D30 (HvlpEndSecurePageListIteration.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall VslEndSecurePageIteration(unsigned __int8 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  _BYTE v4[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+28h] [rbp-80h]
  int v6; // [rsp+30h] [rbp-78h]

  v5 = a1;
  result = VslpEnterIumSecureMode(1, 2049LL, 0LL, (__int64)v4);
  if ( result >= 0 )
    *a2 = v6;
  return result;
}
