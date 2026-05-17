/*
 * XREFs of NtCreateMutant @ 0x1800A7930
 * Callers:
 *     _ResCreateMutex @ 0x180103EBC (_ResCreateMutex.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateMutant()
{
  __int64 result; // rax

  result = 169LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
