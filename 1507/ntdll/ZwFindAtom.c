/*
 * XREFs of ZwFindAtom @ 0x180093A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwFindAtom()
{
  __int64 result; // rax

  result = 20LL;
  __asm { syscall; Low latency system call }
  return result;
}
