/*
 * XREFs of HvlpSetupLiveDumpBuffer @ 0x1401B3B68
 * Callers:
 *     HvlSetupLiveDumpBufferInSk @ 0x1401B349C (HvlSetupLiveDumpBufferInSk.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS __fastcall HvlpSetupLiveDumpBuffer(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  _QWORD v7[14]; // [rsp+20h] [rbp-98h] BYREF

  memset(v7, 0, 104);
  result = HvlpEnterIumSecureMode(1u, 36, 0, (unsigned __int8 *)v7);
  if ( result >= 0 )
  {
    *a1 = v7[2];
    *a2 = v7[3];
    *a3 = v7[4];
  }
  return result;
}
