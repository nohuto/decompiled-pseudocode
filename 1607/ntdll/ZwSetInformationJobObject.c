/*
 * XREFs of ZwSetInformationJobObject @ 0x1800A9490
 * Callers:
 *     TppJobpRundownJob @ 0x180084428 (TppJobpRundownJob.c)
 *     TpAllocJobNotification @ 0x180084520 (TpAllocJobNotification.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationJobObject()
{
  __int64 result; // rax

  result = 388LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
