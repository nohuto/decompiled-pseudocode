/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x1401C14DC
 * Callers:
 *     KeFlushProcessTb @ 0x140075E7C (KeFlushProcessTb.c)
 *     KiFlushAddressSpaceTb @ 0x1401D61D4 (KiFlushAddressSpaceTb.c)
 * Callees:
 *     <none>
 */

__int64 HvlFlushAddressSpaceTb()
{
  if ( (HvlEnlightenments & 0x80u) != 0 )
    return HvlpFastFlushAddressSpaceTb();
  else
    return HvlpSlowFlushAddressSpaceTb();
}
