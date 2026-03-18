/*
 * XREFs of NtAllocateVirtualMemory @ 0x140419AD0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 */

NTSTATUS __stdcall NtAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  char PreviousMode; // [rsp+30h] [rbp-28h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return MiAllocateVirtualMemory(
           ProcessHandle,
           BaseAddress,
           ZeroBits,
           RegionSize,
           AllocationType,
           Protect,
           PreviousMode,
           0,
           0LL);
}
