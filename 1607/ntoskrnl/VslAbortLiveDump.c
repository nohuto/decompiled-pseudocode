/*
 * XREFs of VslAbortLiveDump @ 0x1401C25F0
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x140626FD8 (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

NTSTATUS VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(1, 40LL, 0LL, (__int64)v1);
}
