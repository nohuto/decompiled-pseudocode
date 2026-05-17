/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800C8470
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
