/*
 * XREFs of PsIsSystemThread @ 0x1400A2714
 * Callers:
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 *     VerifierObReferenceObjectByHandle @ 0x14071CCF0 (VerifierObReferenceObjectByHandle.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
