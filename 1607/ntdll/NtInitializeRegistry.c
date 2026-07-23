/*
 * XREFs of NtInitializeRegistry @ 0x1800A8290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtInitializeRegistry(USHORT BootCondition)
{
  NTSTATUS result; // eax

  result = 244;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
