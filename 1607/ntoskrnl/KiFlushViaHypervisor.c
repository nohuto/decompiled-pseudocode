/*
 * XREFs of KiFlushViaHypervisor @ 0x1400E1020
 * Callers:
 *     KeFlushTb @ 0x14001DDEC (KeFlushTb.c)
 *     KeFlushProcessTb @ 0x140075E7C (KeFlushProcessTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400B5D3C (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     KeFlushSingleTb @ 0x14010A628 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012F798 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x14013CFC0 (KeFlushEntireTb.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D4030 (KeQueryActiveProcessorCountEx.c)
 */

_BOOL8 KiFlushViaHypervisor()
{
  return (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || KeQueryActiveProcessorCountEx(0xFFFFu) > 1);
}
