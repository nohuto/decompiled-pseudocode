/*
 * XREFs of VslLiveDumpQuerySecondaryDataSize @ 0x1401C2CF4
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x1401C0298 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

NTSTATUS __fastcall VslLiveDumpQuerySecondaryDataSize(_QWORD *a1)
{
  NTSTATUS result; // eax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(1, 35LL, 0LL, (__int64)v3);
  if ( result >= 0 )
    *a1 = v3[2];
  return result;
}
