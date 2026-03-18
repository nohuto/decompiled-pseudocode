/*
 * XREFs of InvokeReleaseSfntFrag @ 0x1C00A631C
 * Callers:
 *     sfac_GetSbitBitmap @ 0x1C000A318 (sfac_GetSbitBitmap.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C00A16D4 (sfac_ReadGlyphHorMetrics.c)
 *     sfac_ShaveSbitMetrics @ 0x1C00A1A00 (sfac_ShaveSbitMetrics.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C00A1B88 (sfac_ReadGlyphVertMetrics.c)
 *     sfac_GetWinNTGlyphIDs @ 0x1C00A2590 (sfac_GetWinNTGlyphIDs.c)
 *     sfac_SearchForBitmap @ 0x1C00A479C (sfac_SearchForBitmap.c)
 *     sfac_SearchForStrike @ 0x1C00A4B84 (sfac_SearchForStrike.c)
 *     sfac_GetSbitMetrics @ 0x1C00A4CD4 (sfac_GetSbitMetrics.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C00A4E88 (sfac_CopyFontAndPrePrograms.c)
 *     sfac_ComputeMapping @ 0x1C00A51A4 (sfac_ComputeMapping.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C00A5368 (sfac_ReadNumLongVertMetrics.c)
 *     sfac_CopyCVT @ 0x1C00A5D90 (sfac_CopyCVT.c)
 *     sfac_DoOffsetTableMap @ 0x1C00A5E38 (sfac_DoOffsetTableMap.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C00A6050 (sfac_LoadCriticalSfntMetrics.c)
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 *     sfac_ReadGlyphBbox @ 0x1C00B0018 (sfac_ReadGlyphBbox.c)
 *     sfac_GetGlyphIndex @ 0x1C02D9B58 (sfac_GetGlyphIndex.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02D9BC8 (sfac_GetMultiGlyphIDs.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02D9C74 (sfac_GetSbitComponentInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall InvokeReleaseSfntFrag(int a1)
{
  if ( (unsigned int)(a1 - 1) > 1 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
}
