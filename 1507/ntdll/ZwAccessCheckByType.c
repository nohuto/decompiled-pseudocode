/*
 * XREFs of ZwAccessCheckByType @ 0x180093F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheckByType()
{
  __int64 result; // rax

  result = 99LL;
  __asm { syscall; Low latency system call }
  return result;
}
