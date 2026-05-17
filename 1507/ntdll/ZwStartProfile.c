/*
 * XREFs of ZwStartProfile @ 0x1800952C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwStartProfile()
{
  __int64 result; // rax

  result = 412LL;
  __asm { syscall; Low latency system call }
  return result;
}
