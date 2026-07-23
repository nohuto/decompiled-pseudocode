/*
 * XREFs of NtQueryInformationJobObject @ 0x1800A7730
 * Callers:
 *     RtlGetCurrentServiceSessionId @ 0x1800801B0 (RtlGetCurrentServiceSessionId.c)
 *     TppJobpRundownJob @ 0x18008156C (TppJobpRundownJob.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 308;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
