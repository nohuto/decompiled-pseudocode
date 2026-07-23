/*
 * XREFs of ZwSetLdtEntries @ 0x180095170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetLdtEntries(
        ULONG Selector0,
        ULONG Entry0Low,
        ULONG Entry0Hi,
        ULONG Selector1,
        ULONG Entry1Low,
        ULONG Entry1Hi)
{
  NTSTATUS result; // eax

  result = 391;
  __asm { syscall; Low latency system call }
  return result;
}
