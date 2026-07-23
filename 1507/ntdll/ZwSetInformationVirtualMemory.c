/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x180095120
 * Callers:
 *     RtlpGuardGrantSuppressedCallAccess @ 0x1800E5758 (RtlpGuardGrantSuppressedCallAccess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  NTSTATUS result; // eax

  result = 386;
  __asm { syscall; Low latency system call }
  return result;
}
