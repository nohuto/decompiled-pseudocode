/*
 * XREFs of ZwMapUserPhysicalPagesScatter @ 0x180093930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  NTSTATUS result; // eax

  result = 3;
  __asm { syscall; Low latency system call }
  return result;
}
