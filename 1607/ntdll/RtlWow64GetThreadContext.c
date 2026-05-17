/*
 * XREFs of RtlWow64GetThreadContext @ 0x1800D8000
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 */

__int64 RtlWow64GetThreadContext()
{
  return ZwQueryInformationThread();
}
