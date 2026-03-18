/*
 * XREFs of InvokeReleaseSfntFrag @ 0x1C001EDA8
 * Callers:
 *     sfac_GetSbitBitmap @ 0x1C000BFDC (sfac_GetSbitBitmap.c)
 *     sfac_GetWinNTGlyphIDs @ 0x1C001C710 (sfac_GetWinNTGlyphIDs.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C001C98C (sfac_ReadGlyphVertMetrics.c)
 *     sfac_ShaveSbitMetrics @ 0x1C001CD04 (sfac_ShaveSbitMetrics.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C001D4D0 (sfac_ReadGlyphHorMetrics.c)
 *     sfac_CopyFontAndPrePrograms @ 0x1C001D5D0 (sfac_CopyFontAndPrePrograms.c)
 *     sfac_SearchForStrike @ 0x1C001D694 (sfac_SearchForStrike.c)
 *     sfac_ComputeMapping @ 0x1C001D8D8 (sfac_ComputeMapping.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C001DA9C (sfac_ReadNumLongVertMetrics.c)
 *     sfac_SearchForBitmap @ 0x1C001DB10 (sfac_SearchForBitmap.c)
 *     sfac_CopyCVT @ 0x1C001E6D0 (sfac_CopyCVT.c)
 *     sfac_GetSbitMetrics @ 0x1C001E778 (sfac_GetSbitMetrics.c)
 *     sfac_DoOffsetTableMap @ 0x1C001E8C4 (sfac_DoOffsetTableMap.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C001EADC (sfac_LoadCriticalSfntMetrics.c)
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 *     sfac_ReadGlyphBbox @ 0x1C00C9510 (sfac_ReadGlyphBbox.c)
 *     sfac_GetGlyphIndex @ 0x1C02DF48C (sfac_GetGlyphIndex.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02DF4FC (sfac_GetMultiGlyphIDs.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02DF5A8 (sfac_GetSbitComponentInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall InvokeReleaseSfntFrag(int a1)
{
  if ( (unsigned int)(a1 - 1) > 1 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
}
