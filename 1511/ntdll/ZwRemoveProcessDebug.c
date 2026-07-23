/*
 * XREFs of ZwRemoveProcessDebug @ 0x1800A7BF0
 * Callers:
 *     DbgUiStopDebugging @ 0x1800C9070 (DbgUiStopDebugging.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveProcessDebug(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  NTSTATUS result; // eax

  result = 346;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
