/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1401BEF0C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401BEF68 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x140112E60 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
