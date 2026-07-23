/*
 * XREFs of NtCreateProcess @ 0x14067CC74
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateProcessEx @ 0x1404CD99C (NtCreateProcessEx.c)
 */

NTSTATUS __stdcall NtCreateProcess(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        BOOLEAN InheritObjectTable,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE ExceptionPort)
{
  ULONG Flags; // r10d

  Flags = ((unsigned __int8)SectionHandle & 1) != 0;
  if ( ((unsigned __int8)DebugPort & 1) != 0 )
    Flags |= 2u;
  if ( InheritObjectTable )
    Flags |= 4u;
  return NtCreateProcessEx(
           ProcessHandle,
           DesiredAccess,
           ObjectAttributes,
           ParentProcess,
           Flags,
           SectionHandle,
           DebugPort,
           ExceptionPort,
           0);
}
