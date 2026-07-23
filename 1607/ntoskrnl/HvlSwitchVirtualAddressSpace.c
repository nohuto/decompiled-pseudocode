/*
 * XREFs of HvlSwitchVirtualAddressSpace @ 0x1401C146C
 * Callers:
 *     KiLoadDirectoryTableBase @ 0x1400979E0 (KiLoadDirectoryTableBase.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     KiDetachProcess @ 0x1400CC300 (KiDetachProcess.c)
 *     KiSwapProcess @ 0x1400CC870 (KiSwapProcess.c)
 *     SwapContext @ 0x140166570 (SwapContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlSwitchVirtualAddressSpace(__int64 a1)
{
  return HvcallCodeVa(65537LL, a1, 0LL);
}
