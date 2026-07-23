/*
 * XREFs of ZwSetDebugFilterState @ 0x1800A9330
 * Callers:
 *     DbgSetDebugFilterState @ 0x1800DBB00 (DbgSetDebugFilterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  NTSTATUS result; // eax

  result = 377;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
