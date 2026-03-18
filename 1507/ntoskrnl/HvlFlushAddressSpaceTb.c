/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x14017EA3C
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KeFlushProcessTb @ 0x1400EF5C4 (KeFlushProcessTb.c)
 *     KeFlushEntireTb @ 0x140203DB8 (KeFlushEntireTb.c)
 * Callees:
 *     HvlpFlushSecureAddressSpace @ 0x1401EE0C0 (HvlpFlushSecureAddressSpace.c)
 *     HvlpFastFlushAddressSpaceTb @ 0x140270938 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x140270A04 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x140271660 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x1402718A0 (HvlpSlowFlushAddressSpaceTbEx.c)
 */

__int64 __fastcall HvlFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( a2 && (HvlpFlags & 0x100) != 0 && (unsigned __int16)KiActiveGroups > 1u )
  {
    if ( (((unsigned int)HvlpFlags >> 9) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      result = HvlpSlowFlushAddressSpaceTbEx();
    else
      result = HvlpFastFlushAddressSpaceTbEx();
  }
  else if ( (HvlEnlightenments & 0x80u) == 0 )
  {
    result = HvlpSlowFlushAddressSpaceTb();
  }
  else
  {
    result = HvlpFastFlushAddressSpaceTb();
  }
  if ( a4 )
    return HvlpFlushSecureAddressSpace();
  return result;
}
