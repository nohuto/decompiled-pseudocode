/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x1405360E4
 * Callers:
 *     SdbpFindMatchingName @ 0x140535F08 (SdbpFindMatchingName.c)
 *     SdbFindNextStringIndexedTag @ 0x14067FFF8 (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     SdbpGetMappedTagData @ 0x1403B79DC (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x14043FBFC (SdbGetTagDataSize.c)
 *     SdbpGetNextTagId @ 0x14043FCA8 (SdbpGetNextTagId.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // edi
  __int64 MappedTagData; // rsi
  unsigned int TagDataSize; // eax
  __int64 v8; // rcx
  unsigned int NextTagId; // edi
  unsigned int v11; // ebp
  __int16 TagFromTagID; // si
  __int16 v13; // ax
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 && (MappedTagData = SdbpGetMappedTagData(a1, v4)) != 0 )
  {
    if ( (a3[5] & 1) != 0 )
    {
      v11 = a3[1];
      if ( !v11 )
        v11 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
      NextTagId = SdbpGetNextTagId(a1, v11);
      TagFromTagID = SdbGetTagFromTagID(a1, v11);
      v13 = SdbGetTagFromTagID(a1, NextTagId);
      if ( v13 && (v13 & 0xF000) == 0x7000 && v13 == TagFromTagID && NextTagId != a3[2] )
      {
        a3[1] = NextTagId;
        return NextTagId;
      }
    }
    else
    {
      TagDataSize = SdbGetTagDataSize(a1, v4);
      v8 = (unsigned int)a3[4];
      if ( (_DWORD)v8 != TagDataSize / 0xC - 1 )
      {
        memmove(v14, (const void *)(MappedTagData + 12 * v8), 8uLL);
        memmove(&v15, (const void *)(MappedTagData + 12LL * (unsigned int)(a3[4] + 1)), 8uLL);
        if ( v14[0] == v15 )
          return *(unsigned int *)(MappedTagData + 12LL * (unsigned int)++a3[4] + 8);
      }
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
