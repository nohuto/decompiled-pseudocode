/*
 * XREFs of IoThreadToProcess @ 0x1400284B0
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
