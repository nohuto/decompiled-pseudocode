/*
 * XREFs of ??$GetDDIOBJ@U_BLENDOBJ@@@UMPDOBJ@@QEAAPEAU_BLENDOBJ@@PEAU1@@Z @ 0x1C02A8F90
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02AA860 (NtGdiEngAlphaBlend.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_BLENDOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 312) )
    v3 = *(_QWORD *)(a1 + 304);
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
