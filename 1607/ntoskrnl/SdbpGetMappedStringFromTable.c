/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x140573D88
 * Callers:
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x140484DE0 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(__int64 a1, int a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  int FirstTag; // eax
  int v7; // r8d

  v3 = a1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v3 = *(_QWORD *)(a1 + 1344);
    if ( !v3 )
    {
      v7 = 732;
      goto LABEL_10;
    }
    v4 = a2 + 6;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 1328) )
    {
      FirstTag = SdbFindFirstTag(a1, 0, 30721);
      *(_DWORD *)(v3 + 1328) = FirstTag;
      if ( !FirstTag )
      {
        v7 = 747;
LABEL_10:
        AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedStringFromTable", v7, (unsigned int)"No stringtable in DB");
        return 0LL;
      }
    }
    v4 = *(_DWORD *)(v3 + 1328) + a2;
  }
  if ( (unsigned __int16)SdbGetTagFromTagID(v3, v4) == 0x8801 )
    return SdbpGetMappedTagData(v3, v4);
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpGetMappedStringFromTable",
    762,
    (unsigned int)"Pulled out a non-stringtable item");
  return 0LL;
}
