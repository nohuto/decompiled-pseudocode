/*
 * XREFs of NtCreateSemaphore @ 0x180094410
 * Callers:
 *     RtlInitializeResource @ 0x1800076C0 (RtlInitializeResource.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateSemaphore(
        PHANDLE SemaphoreHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LONG InitialCount,
        LONG MaximumCount)
{
  NTSTATUS result; // eax

  result = 177;
  __asm { syscall; Low latency system call }
  return result;
}
