/*
 * XREFs of ZwAccessCheckByTypeResultList @ 0x180093F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheckByTypeResultList()
{
  __int64 result; // rax

  result = 100LL;
  __asm { syscall; Low latency system call }
  return result;
}
