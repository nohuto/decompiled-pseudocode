/*
 * XREFs of SdbpScanIndexes @ 0x140505A0C
 * Callers:
 *     SdbGetIndex @ 0x140485058 (SdbGetIndex.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     SdbFindNextTag @ 0x1404E791C (SdbFindNextTag.c)
 *     SdbReadDWORDTag @ 0x1404EA9AC (SdbReadDWORDTag.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x14050589C (SdbGetFirstChild.c)
 *     SdbReadWORDTag @ 0x140506948 (SdbReadWORDTag.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
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
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !a1[333] || a1[4] )
  {
    memset(a1 + 12, 0, 0x500uLL);
    a1[333] = 1;
    FirstChild = SdbGetFirstChild((__int64)a1, 0);
    v4 = FirstChild;
    if ( FirstChild )
    {
      if ( (unsigned __int16)SdbGetTagFromTagID((__int64)a1, FirstChild) == 30722 )
      {
        a1[11] = 0;
        for ( result = (_UNKNOWN **)SdbFindFirstTag((__int64)a1, v4, 30723);
              ;
              result = (_UNKNOWN **)SdbFindNextTag((__int64)a1, v4, v5) )
        {
          v5 = (unsigned int)result;
          if ( !(_DWORD)result )
            break;
          if ( a1[11] == 32 )
            return (_UNKNOWN **)AslLogCallPrintf(
                                  1,
                                  (unsigned int)"SdbpScanIndexes",
                                  1015,
                                  (unsigned int)"Too many indexes in file: recompile and increase SDB_MAX_INDEXES");
          FirstTag = SdbFindFirstTag((__int64)a1, (unsigned int)result, 14338);
          if ( !FirstTag )
            return (_UNKNOWN **)AslLogCallPrintf(
                                  1,
                                  (unsigned int)"SdbpScanIndexes",
                                  1022,
                                  (unsigned int)"Index missing TAG_INDEX_TAG");
          LOWORD(a1[10 * a1[11] + 13]) = SdbReadWORDTag(a1, FirstTag, 0LL);
          v7 = SdbFindFirstTag((__int64)a1, v5, 14339);
          if ( !v7 )
            return (_UNKNOWN **)AslLogCallPrintf(
                                  1,
                                  (unsigned int)"SdbpScanIndexes",
                                  1031,
                                  (unsigned int)"Index missing TAG_INDEX_KEY");
          HIWORD(a1[10 * a1[11] + 13]) = SdbReadWORDTag(a1, v7, 0LL);
          v8 = SdbFindFirstTag((__int64)a1, v5, 16406);
          if ( v8 )
            a1[10 * a1[11] + 20] = SdbReadDWORDTag((__int64)a1, v8, 0);
          else
            a1[10 * a1[11] + 20] = 0;
          v9 = SdbFindFirstTag((__int64)a1, v5, 38913);
          if ( !v9 )
          {
            LOWORD(a1[10 * a1[11] + 13]) = 0;
            return (_UNKNOWN **)AslLogCallPrintf(
                                  1,
                                  (unsigned int)"SdbpScanIndexes",
                                  1048,
                                  (unsigned int)"Index missing TAG_INDEX_BITS");
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
                              (unsigned int)"Root child tag is not index tagid 0x%lx",
                              v4);
      }
    }
    else
    {
      return (_UNKNOWN **)AslLogCallPrintf(
                            1,
                            (unsigned int)"SdbpScanIndexes",
                            995,
                            (unsigned int)"Failed to get the child index from root");
    }
  }
  return result;
}
