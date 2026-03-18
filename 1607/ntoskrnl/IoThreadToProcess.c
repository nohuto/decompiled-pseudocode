/*
 * XREFs of IoThreadToProcess @ 0x14005F6F0
 * Callers:
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     AlpcpCaptureAttributes @ 0x14044C7D0 (AlpcpCaptureAttributes.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1404D23D8 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspGetSetContextInternal @ 0x140518130 (PspGetSetContextInternal.c)
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 *     DbgkCaptureLiveDump @ 0x14061ADEC (DbgkCaptureLiveDump.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14065571C (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoThreadToProcess(PETHREAD Thread)
{
  return Thread->Process;
}
