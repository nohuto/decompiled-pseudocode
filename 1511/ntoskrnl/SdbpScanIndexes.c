/*
 * XREFs of SdbpScanIndexes @ 0x1403B6308
 * Callers:
 *     SdbGetIndex @ 0x1403B7860 (SdbGetIndex.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     SdbReadDWORDTag @ 0x1403B62A0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1403B6498 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x1403B6508 (SdbGetFirstChild.c)
 *     SdbReadWORDTag @ 0x1403B6560 (SdbReadWORDTag.c)
 *     SdbFindNextTag @ 0x1403B6644 (SdbFindNextTag.c)
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

_UNKNOWN **__fastcall SdbpScanIndexes(_DWORD *a1)
{
  _UNKNOWN **result; // rax
  unsigned int FirstChild; // eax
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned int FirstTag; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  const char *v10; // r9
  int v11; // r8d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a1[333] || a1[4] )
  {
    memset(a1 + 12, 0, 0x500uLL);
    a1[333] = 1;
    FirstChild = SdbGetFirstChild(a1, 0LL);
    v4 = FirstChild;
    if ( FirstChild )
    {
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, FirstChild) == 30722 )
      {
        a1[11] = 0;
        for ( result = (_UNKNOWN **)SdbFindFirstTag(a1, v4, 30723LL); ; result = (_UNKNOWN **)SdbFindNextTag(a1, v4, v5) )
        {
          v5 = (unsigned int)result;
          if ( !(_DWORD)result )
            break;
          if ( a1[11] == 32 )
          {
            v10 = "Too many indexes in file: recompile and increase SDB_MAX_INDEXES";
            v11 = 1015;
            return (_UNKNOWN **)AslLogCallPrintf(1, (unsigned int)"SdbpScanIndexes", v11, (_DWORD)v10);
          }
          FirstTag = SdbFindFirstTag(a1, (unsigned int)result, 14338LL);
          if ( !FirstTag )
          {
            v10 = "Index missing TAG_INDEX_TAG";
            v11 = 1022;
            return (_UNKNOWN **)AslLogCallPrintf(1, (unsigned int)"SdbpScanIndexes", v11, (_DWORD)v10);
          }
          LOWORD(a1[10 * a1[11] + 13]) = SdbReadWORDTag(a1, FirstTag, 0LL);
          v7 = SdbFindFirstTag(a1, v5, 14339LL);
          if ( !v7 )
          {
            v10 = "Index missing TAG_INDEX_KEY";
            v11 = 1031;
            return (_UNKNOWN **)AslLogCallPrintf(1, (unsigned int)"SdbpScanIndexes", v11, (_DWORD)v10);
          }
          HIWORD(a1[10 * a1[11] + 13]) = SdbReadWORDTag(a1, v7, 0LL);
          v8 = SdbFindFirstTag(a1, v5, 16406LL);
          if ( v8 )
            a1[10 * a1[11] + 20] = SdbReadDWORDTag((__int64)a1, v8, 0);
          else
            a1[10 * a1[11] + 20] = 0;
          v9 = SdbFindFirstTag(a1, v5, 38913LL);
          if ( !v9 )
          {
            v10 = "Index missing TAG_INDEX_BITS";
            v11 = 1048;
            LOWORD(a1[10 * a1[11] + 13]) = 0;
            return (_UNKNOWN **)AslLogCallPrintf(1, (unsigned int)"SdbpScanIndexes", v11, (_DWORD)v10);
          }
          a1[10 * a1[11]++ + 12] = v9;
        }
      }
      else
      {
        return (_UNKNOWN **)AslLogCallPrintf(
                              1,
                              (unsigned int)"SdbpScanIndexes",
                              1000,
                              (unsigned int)"Root child tag is not index tagid 0x%lx");
      }
    }
    else
    {
      v10 = "Failed to get the child index from root";
      v11 = 995;
      return (_UNKNOWN **)AslLogCallPrintf(1, (unsigned int)"SdbpScanIndexes", v11, (_DWORD)v10);
    }
  }
  return result;
}
