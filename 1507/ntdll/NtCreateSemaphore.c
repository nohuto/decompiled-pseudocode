/*
 * XREFs of NtCreateSemaphore @ 0x180094410
 * Callers:
 *     RtlInitializeResource @ 0x1800076C0 (RtlInitializeResource.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateSemaphore()
{
  __int64 result; // rax

  result = 177LL;
  __asm { syscall; Low latency system call }
  return result;
}
