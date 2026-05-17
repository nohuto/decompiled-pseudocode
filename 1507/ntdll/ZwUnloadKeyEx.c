/*
 * XREFs of ZwUnloadKeyEx @ 0x1800953C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwUnloadKeyEx()
{
  __int64 result; // rax

  result = 428LL;
  __asm { syscall; Low latency system call }
  return result;
}
