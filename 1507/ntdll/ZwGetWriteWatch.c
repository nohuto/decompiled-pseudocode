/*
 * XREFs of ZwGetWriteWatch @ 0x1800947C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  NTSTATUS result; // eax

  result = 236;
  __asm { syscall; Low latency system call }
  return result;
}
