/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x1800F4058
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x180049FD4 (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800D1444 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
