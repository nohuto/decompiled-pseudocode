/*
 * XREFs of ZwAddAtom @ 0x180093D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAddAtom()
{
  __int64 result; // rax

  result = 71LL;
  __asm { syscall; Low latency system call }
  return result;
}
