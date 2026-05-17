/*
 * XREFs of ZwRemoveProcessDebug @ 0x1800A7BF0
 * Callers:
 *     DbgUiStopDebugging @ 0x1800C9070 (DbgUiStopDebugging.c)
 * Callees:
 *     <none>
 */

__int64 ZwRemoveProcessDebug()
{
  __int64 result; // rax

  result = 346LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
