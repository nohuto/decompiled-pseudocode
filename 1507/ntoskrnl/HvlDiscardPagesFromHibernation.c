/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1401ECA70
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401ECACC (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x1403F4080 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
