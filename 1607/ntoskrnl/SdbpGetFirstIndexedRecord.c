/*
 * XREFs of SdbpGetFirstIndexedRecord @ 0x140484D14
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x140484C74 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x140484DE0 (SdbpGetMappedTagData.c)
 *     SdbpBinarySearchFirst @ 0x140485108 (SdbpBinarySearchFirst.c)
 *     SdbpBinarySearchUnique @ 0x1404E5040 (SdbpBinarySearchUnique.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x140503D74 (SdbGetTagDataSize.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetFirstIndexedRecord(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v8; // r14d
  __int64 MappedTagData; // rax
  unsigned int v10; // ebx
  __int64 v11; // rbp
  _DWORD *v12; // rsi
  _DWORD *v13; // r9
  int v14; // eax
  const char *v16; // r9
  int v17; // r8d

  if ( (unsigned __int16)SdbGetTagFromTagID() != 0x9801 )
  {
    v16 = "The tag 0x%lx is not an index tag";
    v17 = 421;
LABEL_13:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetFirstIndexedRecord", v17, (_DWORD)v16, a2);
    return 0LL;
  }
  v8 = (unsigned int)SdbGetTagDataSize(a1, a2) / 0xC;
  MappedTagData = SdbpGetMappedTagData(a1, a2);
  v10 = 0;
  v11 = MappedTagData;
  if ( !MappedTagData )
  {
    v16 = "Failed to get the pointer to index data, index tagid 0x%lx";
    v17 = 430;
    goto LABEL_13;
  }
  v12 = a4 + 4;
  v13 = a4 + 4;
  if ( (a4[5] & 1) != 0 )
  {
    v14 = SdbpBinarySearchUnique(MappedTagData, v8, a3, v13);
    if ( v14 && *v12 < v8 - 1 )
      a4[2] = *(_DWORD *)(v11 + 12LL * (unsigned int)(*v12 + 1) + 8);
    else
      a4[2] = 0;
    a4[1] = 0;
  }
  else
  {
    v14 = SdbpBinarySearchFirst(MappedTagData, v8, a3, v13);
  }
  if ( v14 )
    return *(unsigned int *)(v11 + 12LL * (unsigned int)*v12 + 8);
  return v10;
}
