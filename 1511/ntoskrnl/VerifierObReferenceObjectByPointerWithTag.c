/*
 * XREFs of VerifierObReferenceObjectByPointerWithTag @ 0x1406D0C94
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 */

NTSTATUS __fastcall VerifierObReferenceObjectByPointerWithTag(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG a5)
{
  VfUtilCheckKernelAddress((unsigned __int64)Object, 8LL);
  return pXdvObReferenceObjectByPointerWithTag(Object, DesiredAccess, ObjectType, AccessMode, a5);
}
