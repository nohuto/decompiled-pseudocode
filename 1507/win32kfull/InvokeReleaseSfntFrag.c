/*
 * XREFs of InvokeReleaseSfntFrag @ 0x1C00ADC14
 * Callers:
 *     sfac_CopyFontAndPrePrograms @ 0x1C00ACBA8 (sfac_CopyFontAndPrePrograms.c)
 *     sfac_SearchForStrike @ 0x1C00ACDDC (sfac_SearchForStrike.c)
 *     sfac_ComputeMapping @ 0x1C00AD184 (sfac_ComputeMapping.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C00AD348 (sfac_ReadNumLongVertMetrics.c)
 *     sfac_CopyCVT @ 0x1C00AD660 (sfac_CopyCVT.c)
 *     sfac_DoOffsetTableMap @ 0x1C00AD708 (sfac_DoOffsetTableMap.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C00AD920 (sfac_LoadCriticalSfntMetrics.c)
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
 *     sfac_ReadGlyphBbox @ 0x1C00B6EE0 (sfac_ReadGlyphBbox.c)
 *     sfac_ShaveSbitMetrics @ 0x1C01108EC (sfac_ShaveSbitMetrics.c)
 *     sfac_ReadGlyphVertMetrics @ 0x1C0110A74 (sfac_ReadGlyphVertMetrics.c)
 *     sfac_GetSbitMetrics @ 0x1C0111354 (sfac_GetSbitMetrics.c)
 *     sfac_ReadGlyphHorMetrics @ 0x1C0111450 (sfac_ReadGlyphHorMetrics.c)
 *     sfac_SearchForBitmap @ 0x1C011153C (sfac_SearchForBitmap.c)
 *     sfac_GetWinNTGlyphIDs @ 0x1C01249C8 (sfac_GetWinNTGlyphIDs.c)
 *     sfac_GetGlyphIndex @ 0x1C02D87D0 (sfac_GetGlyphIndex.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02D8840 (sfac_GetMultiGlyphIDs.c)
 *     sfac_GetSbitBitmap @ 0x1C02D88EC (sfac_GetSbitBitmap.c)
 *     sfac_GetSbitComponentInfo @ 0x1C02D8D48 (sfac_GetSbitComponentInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall InvokeReleaseSfntFrag(int a1)
{
  if ( (unsigned int)(a1 - 1) > 1 )
    EngBugCheckEx(0x164u, 0xAuLL, 0LL, 0LL, 0LL);
}
