/*
 * XREFs of ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C02841D4
 * Callers:
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C028457C (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     NtGdiEngTextOut @ 0x1C02AF9F0 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02B0050 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B0150 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B0380 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02B04C0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02B0610 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02B0750 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02B08D0 (NtGdiFONTOBJ_vGetInfo.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_FONTOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 184) )
    v3 = *(_QWORD *)(a1 + 176);
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
