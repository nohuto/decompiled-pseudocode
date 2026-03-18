/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1401B25C0
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401B261C (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
