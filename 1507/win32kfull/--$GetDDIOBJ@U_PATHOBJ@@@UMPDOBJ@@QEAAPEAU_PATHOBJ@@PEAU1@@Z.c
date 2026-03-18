/*
 * XREFs of ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02A98D4
 * Callers:
 *     NtGdiEngFillPath @ 0x1C02AC3A0 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ADB60 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02ADEC0 (NtGdiEngStrokePath.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02AF330 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02AF4A0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02AF660 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AF700 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02AF880 (NtGdiPATHOBJ_vGetBounds.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall UMPDOBJ::GetDDIOBJ<_PATHOBJ>(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx

  if ( a2 == *(_QWORD *)(a1 + 232) )
  {
    v3 = *(_QWORD *)(a1 + 224);
  }
  else if ( a2 == *(_QWORD *)(a1 + 248) )
  {
    v3 = *(_QWORD *)(a1 + 240);
  }
  else if ( a2 == *(_QWORD *)(a1 + 264) )
  {
    v3 = *(_QWORD *)(a1 + 256);
  }
  else
  {
    v3 = 0LL;
  }
  if ( a2 )
  {
    if ( !v3 )
    {
      ++gdwUMPDUnmatchedUMPointers;
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unmatched usermode pointer.\n", 760);
    }
  }
  if ( (*(_DWORD *)(a1 + 412) & 0x100) != 0 && v3 && v3 < (unsigned __int64)MmSystemRangeStart )
  {
    if ( gfUMPDDebug )
      DbgPrint("windows\\core\\ntgdi\\gre\\umpd.hxx:%d:UMPDOBJ::GetDDIOBJ:Unexpected usermode pointer.\n", 765);
    return 0LL;
  }
  return v3;
}
