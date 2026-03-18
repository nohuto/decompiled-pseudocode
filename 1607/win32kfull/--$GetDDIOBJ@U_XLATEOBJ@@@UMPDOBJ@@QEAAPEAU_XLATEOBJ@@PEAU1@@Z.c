/*
 * XREFs of ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C02AAF18
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02AC780 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02ACAB0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02AD0A0 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x1C02ADD60 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x1C02AE640 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AE9C0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AFDA0 (NtGdiEngTransparentBlt.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02B1A90 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02B1B90 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02B1C10 (NtGdiXLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 216) )
    v3 = *(_QWORD *)(a1 + 208);
  else
    v3 = 0LL;
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint(
          "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n",
          784);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "internal\\onecoreuapwindows\\private\\inc\\Core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n",
        789);
    return 0LL;
  }
  return v3;
}
