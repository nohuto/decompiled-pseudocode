/*
 * XREFs of PsIsSystemThread @ 0x1400E1940
 * Callers:
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     VerifierObReferenceObjectByHandle @ 0x1406D0B48 (VerifierObReferenceObjectByHandle.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
