/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x1800FD808
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x18005B254 (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800D97F8 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
