/*
 * XREFs of ZwDisplayString @ 0x1800945C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwDisplayString()
{
  __int64 result; // rax

  result = 204LL;
  __asm { syscall; Low latency system call }
  return result;
}
