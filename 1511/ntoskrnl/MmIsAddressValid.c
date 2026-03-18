/*
 * XREFs of MmIsAddressValid @ 0x1401D5648
 * Callers:
 *     KiMarkBugCheckRegions @ 0x14014DBFC (KiMarkBugCheckRegions.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1403AE450 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x1405FD2D4 (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MiIsAddressValid((__int64)VirtualAddress);
}
