/*
 * XREFs of RtlQueryThreadProfiling @ 0x1800C8470
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A5560 (ZwQueryInformationThread.c)
 */

NTSTATUS __cdecl RtlQueryThreadProfiling(HANDLE ThreadHandle, PBOOLEAN Enabled)
{
  return ZwQueryInformationThread(ThreadHandle, ThreadCounterProfiling, Enabled, 1u, 0LL);
}
