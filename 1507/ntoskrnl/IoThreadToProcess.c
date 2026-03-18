/*
 * XREFs of IoThreadToProcess @ 0x1400507F0
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 *     DbgkCaptureLiveDump @ 0x14066980C (DbgkCaptureLiveDump.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
