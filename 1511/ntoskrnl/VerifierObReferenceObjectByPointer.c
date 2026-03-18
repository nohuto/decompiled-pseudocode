/*
 * XREFs of VerifierObReferenceObjectByPointer @ 0x1406D0C20
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

NTSTATUS __fastcall VerifierObReferenceObjectByPointer(
        _QWORD *a1,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  VfUtilCheckKernelAddress((unsigned __int64)a1, 8LL);
  if ( !*(a1 - 6) )
    VerifierBugCheckIfAppropriate(0xC4u, 0x3FuLL, (ULONG_PTR)a1, 1uLL, 0LL);
  return pXdvObReferenceObjectByPointer(a1, DesiredAccess, ObjectType, AccessMode);
}
