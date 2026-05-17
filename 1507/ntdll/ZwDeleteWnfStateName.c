/*
 * XREFs of ZwDeleteWnfStateName @ 0x1800945A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwDeleteWnfStateName()
{
  __int64 result; // rax

  result = 202LL;
  __asm { syscall; Low latency system call }
  return result;
}
