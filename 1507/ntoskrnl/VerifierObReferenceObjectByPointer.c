/*
 * XREFs of VerifierObReferenceObjectByPointer @ 0x140754710
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

NTSTATUS __fastcall VerifierObReferenceObjectByPointer(
        char *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  if ( a1 < MmHighestUserAddress || a1 + 8 < a1 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xE0uLL, (ULONG_PTR)a1, 8uLL, 0LL);
  if ( !*((_QWORD *)a1 - 6) )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, (ULONG_PTR)a1, 1uLL, 0LL);
  return pXdvObReferenceObjectByPointer(a1, DesiredAccess, ObjectType, AccessMode);
}
