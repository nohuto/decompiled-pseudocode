/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800CF850
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 */

__int64 RtlQueryThreadProfiling()
{
  return ZwQueryInformationThread();
}
