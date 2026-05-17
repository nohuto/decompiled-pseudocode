/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800C6E20
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
