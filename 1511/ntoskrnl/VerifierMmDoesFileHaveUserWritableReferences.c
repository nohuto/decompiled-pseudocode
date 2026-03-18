/*
 * XREFs of VerifierMmDoesFileHaveUserWritableReferences @ 0x1406C0AB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall VerifierMmDoesFileHaveUserWritableReferences(PSECTION_OBJECT_POINTERS SectionPointer)
{
  return pXdvMmDoesFileHaveUserWritableReferences(SectionPointer);
}
