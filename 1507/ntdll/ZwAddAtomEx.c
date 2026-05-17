/*
 * XREFs of ZwAddAtomEx @ 0x180093F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAddAtomEx()
{
  __int64 result; // rax

  result = 103LL;
  __asm { syscall; Low latency system call }
  return result;
}
