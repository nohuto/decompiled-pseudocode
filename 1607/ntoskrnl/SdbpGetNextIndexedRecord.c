/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x140574398
 * Callers:
 *     SdbpFindMatchingName @ 0x1405741BC (SdbpFindMatchingName.c)
 *     SdbFindNextStringIndexedTag @ 0x1406C50B0 (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x1404E6D04 (SdbGetTagDataSize.c)
 *     SdbpGetNextTagId @ 0x1404E6DB0 (SdbpGetNextTagId.c)
 *     SdbpGetMappedTagData @ 0x140514168 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 MappedTagData; // rsi
  unsigned int TagDataSize; // eax
  __int64 v8; // rcx
  unsigned int NextTagId; // edi
  const char *v11; // r9
  int v12; // r8d
  unsigned int v13; // ebp
  __int16 TagFromTagID; // si
  __int16 v15; // ax
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) != 0x9801 )
  {
    v11 = "The tag 0x%lx is not an index tag";
    v12 = 490;
LABEL_11:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetNextIndexedRecord", v12, (_DWORD)v11);
    return 0LL;
  }
  MappedTagData = SdbpGetMappedTagData(a1, a2);
  if ( !MappedTagData )
  {
    v11 = "Failed to get pointer to the index data tagid x%lx";
    v12 = 497;
    goto LABEL_11;
  }
  if ( (a3[5] & 1) != 0 )
  {
    v13 = a3[1];
    if ( !v13 )
      v13 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
    NextTagId = SdbpGetNextTagId(a1, v13);
    TagFromTagID = SdbGetTagFromTagID(a1, v13);
    v15 = SdbGetTagFromTagID(a1, NextTagId);
    if ( !v15 || (v15 & 0xF000) != 0x7000 || v15 != TagFromTagID || NextTagId == a3[2] )
      return 0LL;
    a3[1] = NextTagId;
  }
  else
  {
    TagDataSize = SdbGetTagDataSize(a1, a2);
    v8 = (unsigned int)a3[4];
    if ( (_DWORD)v8 == TagDataSize / 0xC - 1 )
      return 0LL;
    memmove(v16, (const void *)(MappedTagData + 12 * v8), 8uLL);
    memmove(&v17, (const void *)(MappedTagData + 12LL * (unsigned int)(a3[4] + 1)), 8uLL);
    if ( v16[0] != v17 )
      return 0LL;
    return *(unsigned int *)(MappedTagData + 12LL * (unsigned int)++a3[4] + 8);
  }
  return NextTagId;
}
