/*
 * XREFs of FioFwReadBytesAtOffset @ 0x140128F34
 * Callers:
 *     RaspLoadBearings @ 0x140128914 (RaspLoadBearings.c)
 *     FioFwReadUshortAtOffset @ 0x140128B08 (FioFwReadUshortAtOffset.c)
 *     RaspInitializeGlyphData @ 0x140128B38 (RaspInitializeGlyphData.c)
 *     FioFwReadUlongAtOffset @ 0x140145E88 (FioFwReadUlongAtOffset.c)
 *     RaspInitializeCompositeGlyphData @ 0x14023ADF4 (RaspInitializeCompositeGlyphData.c)
 *     BgpRasInitializeRasterizer @ 0x1407D44FC (BgpRasInitializeRasterizer.c)
 *     FopReadMappingTable @ 0x1407D46C8 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x1407D4894 (FopReadCmapTable.c)
 *     FopValidateFontNameTable @ 0x1407D49E4 (FopValidateFontNameTable.c)
 *     FopReadNamingTable @ 0x1407D4B64 (FopReadNamingTable.c)
 *     FopReadNameRecord @ 0x1407D4C7C (FopReadNameRecord.c)
 *     FopGetTableOffsetAndSize @ 0x1407D4CE8 (FopGetTableOffsetAndSize.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 */

__int64 __fastcall FioFwReadBytesAtOffset(__int64 a1, unsigned int a2, unsigned int a3, void *a4)
{
  if ( a2 + a3 > *(_DWORD *)(a1 + 8) )
    return 3221225485LL;
  memmove(a4, (const void *)(*(_QWORD *)a1 + a2), a3);
  return 0LL;
}
