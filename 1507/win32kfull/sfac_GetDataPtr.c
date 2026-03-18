/*
 * XREFs of sfac_GetDataPtr @ 0x1C00ADC28
 * Callers:
 *     sfac_CopyFontAndPrePrograms @ 0x1C00ACBA8 (sfac_CopyFontAndPrePrograms.c)
 *     sfac_SearchForStrike @ 0x1C00ACDDC (sfac_SearchForStrike.c)
 *     sfac_ComputeMapping @ 0x1C00AD184 (sfac_ComputeMapping.c)
 *     sfac_ReadNumLongVertMetrics @ 0x1C00AD348 (sfac_ReadNumLongVertMetrics.c)
 *     sfac_CopyCVT @ 0x1C00AD660 (sfac_CopyCVT.c)
 *     sfac_LoadCriticalSfntMetrics @ 0x1C00AD920 (sfac_LoadCriticalSfntMetrics.c)
 *     fsg_ExecuteGlyph @ 0x1C00B5A60 (fsg_ExecuteGlyph.c)
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
 *     InvokeGetSfntFragmentPtr @ 0x1C00ADC8C (InvokeGetSfntFragmentPtr.c)
 */

__int64 __fastcall sfac_GetDataPtr(__int64 a1, int a2, unsigned int a3, int a4, int a5, __int64 *a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rax

  v6 = a3;
  if ( !*(_DWORD *)(a1 + 8LL * a4 + 28) )
  {
    *a6 = 0LL;
    if ( a5 )
      return 5129LL;
    return 0LL;
  }
  if ( a3 == -1 )
    v6 = *(_DWORD *)(a1 + 8LL * a4 + 28);
  v7 = InvokeGetSfntFragmentPtr(
         *(unsigned int *)(a1 + 8),
         *(_QWORD *)a1,
         (unsigned int)(a2 + *(_DWORD *)(a1 + 8LL * a4 + 24)),
         v6);
  *a6 = v7;
  if ( v7 || !a5 )
    return 0LL;
  return 5128LL;
}
