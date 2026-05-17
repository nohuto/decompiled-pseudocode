/*
 * XREFs of NtQuerySystemInformationEx @ 0x1800A8DD0
 * Callers:
 *     RtlWow64GetProcessMachines @ 0x18006E1D0 (RtlWow64GetProcessMachines.c)
 *     TppPoolUpdateNodeRelation @ 0x180073458 (TppPoolUpdateNodeRelation.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180083E00 (RtlWow64IsWowGuestMachineSupported.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 334LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
