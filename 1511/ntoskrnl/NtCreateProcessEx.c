/*
 * XREFs of NtCreateProcessEx @ 0x1404C3B34
 * Callers:
 *     NtCreateProcess @ 0x14063E67C (NtCreateProcess.c)
 * Callees:
 *     PspCreateProcess @ 0x1404C3BAC (PspCreateProcess.c)
 */

NTSTATUS __stdcall NtCreateProcessEx(
        PHANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ParentProcess,
        ULONG Flags,
        HANDLE SectionHandle,
        HANDLE DebugPort,
        HANDLE ExceptionPort,
        BOOLEAN InJob)
{
  PHANDLE v9; // r10

  v9 = ProcessHandle;
  if ( !ParentProcess )
    return -1073741811;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( (unsigned __int64)ProcessHandle >= MmUserProbeAddress )
      ProcessHandle = (PHANDLE)MmUserProbeAddress;
    *ProcessHandle = *ProcessHandle;
  }
  return PspCreateProcess(v9, DesiredAccess, ObjectAttributes);
}
