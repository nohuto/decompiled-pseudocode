/*
 * XREFs of NtCreateProcessEx @ 0x1404CD99C
 * Callers:
 *     NtCreateProcess @ 0x14067CC74 (NtCreateProcess.c)
 * Callees:
 *     PspCreateProcess @ 0x1404CDA18 (PspCreateProcess.c)
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
    if ( (unsigned __int64)ProcessHandle >= 0x7FFFFFFF0000LL )
      ProcessHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *ProcessHandle = *ProcessHandle;
  }
  return PspCreateProcess(v9, DesiredAccess, ObjectAttributes);
}
