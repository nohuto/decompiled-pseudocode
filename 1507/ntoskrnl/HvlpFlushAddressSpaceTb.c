/*
 * XREFs of HvlpFlushAddressSpaceTb @ 0x140270BBC
 * Callers:
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  if ( (HvlEnlightenments & 0x80u) != 0 )
    return HvlpFastFlushAddressSpaceTb(a1, a2, a3);
  else
    return HvlpSlowFlushAddressSpaceTb();
}
