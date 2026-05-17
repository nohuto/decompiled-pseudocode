/*
 * XREFs of RtlpStartThread @ 0x1800F5A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateUserThread @ 0x1800451A0 (RtlCreateUserThread.c)
 */

__int64 RtlpStartThread()
{
  return RtlCreateUserThread(-1, 0, 1, 0, 0LL, 0LL);
}
