/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800BB750
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
