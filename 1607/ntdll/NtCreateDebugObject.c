/*
 * XREFs of NtCreateDebugObject @ 0x1800A7770
 * Callers:
 *     DbgUiConnectToDbg @ 0x1800D0040 (DbgUiConnectToDbg.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateDebugObject()
{
  __int64 result; // rax

  result = 155LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
