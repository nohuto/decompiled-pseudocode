/*
 * XREFs of RtlpStartThread @ 0x1800F6180
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateUserThread @ 0x180076510 (RtlCreateUserThread.c)
 */

__int64 RtlpStartThread()
{
  return RtlCreateUserThread(-1, 0, 1, 0, 0LL, 0LL);
}
