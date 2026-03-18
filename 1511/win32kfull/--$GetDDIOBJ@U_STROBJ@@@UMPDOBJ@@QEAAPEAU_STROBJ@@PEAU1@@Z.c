/*
 * XREFs of ??$GetDDIOBJ@U_STROBJ@@@UMPDOBJ@@QEAAPEAU_STROBJ@@PEAU1@@Z @ 0x1C02A9184
 * Callers:
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02A9654 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiEngTextOut @ 0x1C02AD4E0 (NtGdiEngTextOut.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02AEBF0 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02AED20 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02AED90 (NtGdiSTROBJ_vEnumStart.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_STROBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 200) )
    v3 = *(_QWORD *)(a1 + 192);
  else
    v3 = 0LL;
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n", 765);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint("windows\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n", 770);
    return 0LL;
  }
  return v3;
}
