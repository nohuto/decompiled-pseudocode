/*
 * XREFs of HvlLiveDumpQuerySecondaryDataSize @ 0x1401B312C
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x1401B4524 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS __fastcall HvlLiveDumpQuerySecondaryDataSize(_QWORD *a1)
{
  NTSTATUS result; // eax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 104);
  result = HvlpEnterIumSecureMode(1u, 33, 0, (unsigned __int8 *)v3);
  if ( result >= 0 )
    *a1 = v3[2];
  return result;
}
