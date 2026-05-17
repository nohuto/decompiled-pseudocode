/*
 * XREFs of ZwAccessCheckByType @ 0x1800A7070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheckByType()
{
  __int64 result; // rax

  result = 99LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
