/*
 * XREFs of VslIsTrustletRunning @ 0x1401B3CBC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS __fastcall VslIsTrustletRunning(__int64 a1, _BYTE *a2)
{
  NTSTATUS result; // eax
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 104);
  v4[1] = a1;
  result = HvlpEnterIumSecureMode(1u, 16, 0, (unsigned __int8 *)v4);
  *a2 = v4[2];
  return result;
}
