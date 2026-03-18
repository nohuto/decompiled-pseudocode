/*
 * XREFs of PsIsSystemThread @ 0x1401148B8
 * Callers:
 *     VerifierObReferenceObjectByHandle @ 0x140754638 (VerifierObReferenceObjectByHandle.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall PsIsSystemThread(PETHREAD Thread)
{
  return (Thread->MiscFlags & 0x400) != 0;
}
