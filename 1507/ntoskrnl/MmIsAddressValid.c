/*
 * XREFs of MmIsAddressValid @ 0x1402175B0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x14017BCEC (KiMarkBugCheckRegions.c)
 *     KeCapturePersistentThreadState @ 0x1401F561C (KeCapturePersistentThreadState.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1403FE84C (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140677C2C (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MiIsAddressValid((__int64)VirtualAddress);
}
