/*
 * XREFs of ObOpenObjectByPointerWithTag @ 0x140665DF4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401B7964 (DbgkCaptureLiveKernelDump.c)
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
