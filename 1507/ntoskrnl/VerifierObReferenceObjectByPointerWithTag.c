/*
 * XREFs of VerifierObReferenceObjectByPointerWithTag @ 0x1407547A8
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

NTSTATUS __fastcall VerifierObReferenceObjectByPointerWithTag(
        char *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG a5)
{
  if ( a1 < MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  return pXdvObReferenceObjectByPointerWithTag(a1, DesiredAccess, ObjectType, AccessMode, a5);
}
