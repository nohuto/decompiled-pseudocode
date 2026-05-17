/*
 * XREFs of ZwQueryMultipleValueKey @ 0x180094CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwQueryMultipleValueKey()
{
  __int64 result; // rax

  result = 315LL;
  __asm { syscall; Low latency system call }
  return result;
}
