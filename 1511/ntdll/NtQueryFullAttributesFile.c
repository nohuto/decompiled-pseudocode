/*
 * XREFs of NtQueryFullAttributesFile @ 0x1800A76D0
 * Callers:
 *     _ResGetFileAttributesEx @ 0x1800F9F9C (_ResGetFileAttributesEx.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryFullAttributesFile()
{
  __int64 result; // rax

  result = 305LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
