/*
 * XREFs of PsIsSystemThread @ 0x1400A3DEC
 * Callers:
 *     IopAllocRealFileObject @ 0x140442AB0 (IopAllocRealFileObject.c)
 *     VerifierObReferenceObjectByHandle @ 0x14071CCF0 (VerifierObReferenceObjectByHandle.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
