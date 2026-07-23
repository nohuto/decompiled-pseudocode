/*
 * XREFs of ZwIsSystemResumeAutomatic @ 0x180094820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN ZwIsSystemResumeAutomatic(void)
{
  BOOLEAN result; // al

  result = -14;
  __asm { syscall; Low latency system call }
  return result;
}
