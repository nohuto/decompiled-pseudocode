/*
 * XREFs of KsepDbReadKData @ 0x140652BEC
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14053551C (KsepDbCacheReadDevice.c)
 * Callees:
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 *     SdbGetTagDataSize @ 0x1404E6D04 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbpGetMappedTagData @ 0x140514168 (SdbpGetMappedTagData.c)
 *     SdbReadQWORDTag @ 0x140574150 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 */

__int64 __fastcall KsepDbReadKData(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // r14
  unsigned int v9; // eax
  int DWORDTag; // eax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int TagDataSize; // eax
  unsigned int v15; // eax
  __int64 v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // ebp
  __int64 MappedTagData; // r15

  v6 = -1073741823;
  if ( !a2 )
    return v6;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
    return v6;
  StringTagPtr = SdbGetStringTagPtr(a1, FirstTag);
  if ( !StringTagPtr )
    return v6;
  v9 = SdbFindFirstTag(a1, a2, 16408);
  if ( !v9 )
    return v6;
  DWORDTag = SdbReadDWORDTag(a1, v9, 0);
  switch ( DWORDTag )
  {
    case 1:
      v11 = SdbFindFirstTag(a1, a2, 24606);
      v12 = SdbGetStringTagPtr(a1, v11);
      if ( v12 )
      {
        *(_QWORD *)a3 = StringTagPtr;
        v13 = -1LL;
        *(_DWORD *)(a3 + 8) = 1;
        do
          ++v13;
        while ( *(_WORD *)(v12 + 2 * v13) );
        TagDataSize = 2 * v13 + 2;
        *(_QWORD *)(a3 + 16) = v12;
        goto LABEL_18;
      }
      return v6;
    case 4:
      v15 = SdbFindFirstTag(a1, a2, 16409);
      *(_QWORD *)a3 = StringTagPtr;
      *(_DWORD *)(a3 + 8) = 4;
      *(_DWORD *)(a3 + 12) = 4;
      v16 = a3 + 24;
      *(_DWORD *)(a3 + 24) = SdbReadDWORDTag(a1, v15, 0);
LABEL_14:
      *(_QWORD *)(a3 + 16) = v16;
      return 0;
    case 11:
      v17 = SdbFindFirstTag(a1, a2, 20487);
      *(_QWORD *)a3 = StringTagPtr;
      *(_DWORD *)(a3 + 8) = 11;
      *(_DWORD *)(a3 + 12) = 8;
      v16 = a3 + 32;
      *(_QWORD *)(a3 + 32) = SdbReadQWORDTag(a1, v17, 0LL);
      goto LABEL_14;
  }
  if ( DWORDTag != 3 )
    return (unsigned int)-1073741811;
  v18 = SdbFindFirstTag(a1, a2, 36869);
  MappedTagData = SdbpGetMappedTagData(a1, v18);
  if ( MappedTagData )
  {
    *(_QWORD *)a3 = StringTagPtr;
    *(_DWORD *)(a3 + 8) = 3;
    TagDataSize = SdbGetTagDataSize(a1, v18);
    *(_QWORD *)(a3 + 16) = MappedTagData;
LABEL_18:
    *(_DWORD *)(a3 + 12) = TagDataSize;
    return 0;
  }
  return v6;
}
