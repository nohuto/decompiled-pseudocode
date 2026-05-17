/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x1800F41B8
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x180010AEC (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800C8A08 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
