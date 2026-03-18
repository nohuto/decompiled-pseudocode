/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1401C1588
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x1400981E0 (KiLoadDirectoryTableBase.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 *     KiDetachProcess @ 0x1400CE460 (KiDetachProcess.c)
 *     KiSwapProcess @ 0x1400CE9D0 (KiSwapProcess.c)
 *     SwapContext @ 0x140166000 (SwapContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlSwitchVirtualAddressSpace(__int64 a1)
{
  return HvcallCodeVa(65537LL, a1, 0LL);
}
