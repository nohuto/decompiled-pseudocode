/*
 * XREFs of ZwCreateProcess @ 0x140151BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        BOOLEAN InheritObjectTable,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE ExceptionPort)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
