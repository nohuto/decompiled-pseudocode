/*
 * XREFs of NtQueryInformationJobObject @ 0x180094C10
 * Callers:
 *     TppJobpRundownJob @ 0x18007A72C (TppJobpRundownJob.c)
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

  result = 305;
  __asm { syscall; Low latency system call }
  return result;
}
