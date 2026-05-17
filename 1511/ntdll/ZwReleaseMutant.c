/*
 * XREFs of ZwReleaseMutant @ 0x1800A54C0
 * Callers:
 *     TppCallbackEpilog @ 0x18002C870 (TppCallbackEpilog.c)
 *     ResCReleaseInitMutex @ 0x1800F8988 (ResCReleaseInitMutex.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseMutant()
{
  __int64 result; // rax

  result = 32LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
