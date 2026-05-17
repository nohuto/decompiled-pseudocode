/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800D0150
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
