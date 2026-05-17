/*
 * XREFs of ZwGetNextThread @ 0x1800A6DF0
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18008B488 (PsspCaptureThreadInformation.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetNextThread()
{
  __int64 result; // rax

  result = 234LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
