/*
 * XREFs of KiFlushViaHypervisor @ 0x1400DEEC0
 * Callers:
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     KeFlushProcessTb @ 0x140075EFC (KeFlushProcessTb.c)
 *     KeFlushMultipleRangeTb @ 0x1400B3B64 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14012FD08 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x14013D530 (KeFlushEntireTb.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 */

_BOOL8 KiFlushViaHypervisor()
{
  return (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || KeQueryActiveProcessorCountEx(0xFFFFu) > 1);
}
