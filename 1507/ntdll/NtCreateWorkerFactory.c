/*
 * XREFs of NtCreateWorkerFactory @ 0x1800944E0
 * Callers:
 *     TpAllocPoolInternal @ 0x18007B968 (TpAllocPoolInternal.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateWorkerFactory()
{
  __int64 result; // rax

  result = 190LL;
  __asm { syscall; Low latency system call }
  return result;
}
