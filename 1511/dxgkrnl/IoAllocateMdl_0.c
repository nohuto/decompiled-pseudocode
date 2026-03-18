/*
 * XREFs of IoAllocateMdl_0 @ 0x1C0011720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PMDL __stdcall IoAllocateMdl_0(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  return IoAllocateMdl(VirtualAddress, Length, SecondaryBuffer, ChargeQuota, Irp);
}
