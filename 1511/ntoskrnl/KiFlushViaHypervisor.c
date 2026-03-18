/*
 * XREFs of KiFlushViaHypervisor @ 0x1400079D0
 * Callers:
 *     KeFlushProcessTb @ 0x140005994 (KeFlushProcessTb.c)
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14011F758 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x1401C7064 (KeFlushEntireTb.c)
 *     KeFlushMultipleRangeTb @ 0x1401C70D4 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 */

_BOOL8 KiFlushViaHypervisor()
{
  return (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || KeQueryActiveProcessorCountEx(0xFFFFu) > 1);
}
