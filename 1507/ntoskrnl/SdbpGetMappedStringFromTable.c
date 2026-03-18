/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1405ABB30
 * Callers:
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x140577948 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(__int64 a1, int a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  int FirstTag; // eax

  v3 = a1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v3 = *(_QWORD *)(a1 + 1344);
    if ( !v3 )
      goto LABEL_9;
    v4 = a2 + 6;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 1328) )
    {
      FirstTag = SdbFindFirstTag(a1, 0LL, 30721);
      *(_DWORD *)(v3 + 1328) = FirstTag;
      if ( !FirstTag )
        goto LABEL_9;
    }
    v4 = *(_DWORD *)(v3 + 1328) + a2;
  }
  if ( (unsigned __int16)SdbGetTagFromTagID(v3, v4) == 0x8801 )
    return SdbpGetMappedTagData(v3, v4);
LABEL_9:
  AslLogCallPrintf(1LL);
  return 0LL;
}
