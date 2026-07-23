/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1405742C8
 * Callers:
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbpGetMappedTagData @ 0x140514168 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(__int64 a1, int a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  int FirstTag; // eax
  int v7; // r8d
  const char *v8; // r9

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
        v8 = "No stringtable in DB";
        goto LABEL_12;
      }
    }
    v4 = *(_DWORD *)(v3 + 1328) + a2;
  }
  if ( (unsigned __int16)SdbGetTagFromTagID(v3, v4) == 0x8801 )
    return SdbpGetMappedTagData(v3, v4);
  v8 = "Pulled out a non-stringtable item";
  v7 = 762;
LABEL_12:
  AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedStringFromTable", v7, (_DWORD)v8);
  return 0LL;
}
