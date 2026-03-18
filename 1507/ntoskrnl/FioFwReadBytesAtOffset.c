/*
 * XREFs of FioFwReadBytesAtOffset @ 0x140151FEC
 * Callers:
 *     RaspLoadBearings @ 0x1401519C4 (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x140151BB8 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x140151BE8 (RaspInitializeGlyphData.c)
 *     RaspInitializeCompositeGlyphData @ 0x14026E760 (RaspInitializeCompositeGlyphData.c)
 *     FioFwReadUlongAtOffset @ 0x14026FD1C (FioFwReadUlongAtOffset.c)
 *     BgpRasInitializeRasterizer @ 0x1407FDE84 (BgpRasInitializeRasterizer.c)
 *     FopReadMappingTable @ 0x1407FE050 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x1407FE21C (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x1407FE37C (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x1407FE4F0 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x1407FE60C (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x1407FE6A4 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
