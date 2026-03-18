/*
 * XREFs of VerifierObReferenceObjectByHandleWithTag @ 0x140754708
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return pXdvObReferenceObjectByHandleWithTag(
           Handle,
           DesiredAccess,
           ObjectType,
           AccessMode,
           Tag,
           Object,
           HandleInformation);
}
