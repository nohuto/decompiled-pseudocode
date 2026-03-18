/*
 * XREFs of HvlAbortLiveDump @ 0x1401B2FB8
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x1405FD364 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

NTSTATUS HvlAbortLiveDump()
{
  _QWORD v1[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 104);
  return HvlpEnterIumSecureMode(1u, 38, 0, (unsigned __int8 *)v1);
}
