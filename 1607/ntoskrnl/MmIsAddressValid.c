/*
 * XREFs of MmIsAddressValid @ 0x1401E6774
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140157534 (KiMarkBugCheckRegions.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1403DA4D0 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x140626FFC (IopLiveDumpDiscardVirtualAddressRange.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MiIsAddressValid((__int64)VirtualAddress);
}
