/*
 * XREFs of NtQuerySystemInformationEx @ 0x1800A8DD0
 * Callers:
 *     RtlWow64GetProcessMachines @ 0x18006E1C0 (RtlWow64GetProcessMachines.c)
 *     TppPoolUpdateNodeRelation @ 0x180073448 (TppPoolUpdateNodeRelation.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180083DF0 (RtlWow64IsWowGuestMachineSupported.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 334;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
