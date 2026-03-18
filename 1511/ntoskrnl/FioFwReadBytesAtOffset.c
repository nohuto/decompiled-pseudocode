/*
 * XREFs of FioFwReadBytesAtOffset @ 0x14011DD6C
 * Callers:
 *     RaspLoadBearings @ 0x14011D744 (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x14011D938 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x14011D968 (RaspInitializeGlyphData.c)
 *     FioFwReadUlongAtOffset @ 0x14013C974 (FioFwReadUlongAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x14021F338 (RaspInitializeCompositeGlyphData.c)
 *     BgpRasInitializeRasterizer @ 0x1407882CC (BgpRasInitializeRasterizer.c)
 *     FopReadMappingTable @ 0x140788498 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x140788664 (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x1407887B4 (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x14078891C (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x140788A34 (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x140788AA0 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
