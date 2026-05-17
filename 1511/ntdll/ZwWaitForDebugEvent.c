/*
 * XREFs of ZwWaitForDebugEvent @ 0x1800A8790
 * Callers:
 *     DbgUiWaitStateChange @ 0x1800C9090 (DbgUiWaitStateChange.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForDebugEvent()
{
  __int64 result; // rax

  result = 439LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
