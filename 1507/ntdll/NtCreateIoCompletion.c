/*
 * XREFs of NtCreateIoCompletion @ 0x180094300
 * Callers:
 *     TpAllocPoolInternal @ 0x18007B968 (TpAllocPoolInternal.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateIoCompletion()
{
  __int64 result; // rax

  result = 160LL;
  __asm { syscall; Low latency system call }
  return result;
}
