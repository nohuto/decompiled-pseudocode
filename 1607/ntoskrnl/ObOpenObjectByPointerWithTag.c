/*
 * XREFs of ObOpenObjectByPointerWithTag @ 0x140665D10
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401B7A80 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ObOpenObjectByPointerWithTag(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           Object,
           HandleAttributes,
           PassedAccessState,
           DesiredAccess,
           ObjectType,
           AccessMode,
           Handle);
}
