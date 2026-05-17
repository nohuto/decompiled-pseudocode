/*
 * XREFs of ZwSerializeBoot @ 0x180094FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSerializeBoot()
{
  __int64 result; // rax

  result = 363LL;
  __asm { syscall; Low latency system call }
  return result;
}
