/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x1401C13C0
 * Callers:
 *     KeFlushProcessTb @ 0x140075EFC (KeFlushProcessTb.c)
 *     KiFlushAddressSpaceTb @ 0x1401D6000 (KiFlushAddressSpaceTb.c)
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
