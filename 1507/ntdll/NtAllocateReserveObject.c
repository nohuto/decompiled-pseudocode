/*
 * XREFs of NtAllocateReserveObject @ 0x180094000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAllocateReserveObject(
        PHANDLE MemoryReserveHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        MEMORY_RESERVE_TYPE Type)
{
  NTSTATUS result; // eax

  result = 112;
  __asm { syscall; Low latency system call }
  return result;
}
