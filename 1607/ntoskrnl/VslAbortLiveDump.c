/*
 * XREFs of VslAbortLiveDump @ 0x1401C24D4
 * Callers:
 *     IopLiveDumpFreeDumpBuffers @ 0x14062708C (IopLiveDumpFreeDumpBuffers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS VslAbortLiveDump()
{
  _BYTE v1[112]; // [rsp+20h] [rbp-88h] BYREF

  memset(v1, 0, 0x68uLL);
  return VslpEnterIumSecureMode(1, 40LL, 0LL, (__int64)v1);
}
