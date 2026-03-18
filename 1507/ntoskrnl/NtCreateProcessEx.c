/*
 * XREFs of NtCreateProcessEx @ 0x14055AE00
 * Callers:
 *     NtCreateProcess @ 0x1406BF098 (NtCreateProcess.c)
 * Callees:
 *     PspCreateProcess @ 0x14055AE78 (PspCreateProcess.c)
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
