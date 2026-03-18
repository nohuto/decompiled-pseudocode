/*
 * XREFs of VerifierMmDoesFileHaveUserWritableReferences @ 0x1407422F8
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
