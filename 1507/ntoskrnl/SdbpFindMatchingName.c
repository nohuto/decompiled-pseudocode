/*
 * XREFs of SdbpFindMatchingName @ 0x1405ABA24
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x140577774 (SdbFindFirstStringIndexedTag.c)
 *     SdbFindNextStringIndexedTag @ 0x140704E2C (SdbFindNextStringIndexedTag.c)
 * Callees:
 *     _wcsicmp @ 0x1401723FC (_wcsicmp.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 *     SdbpGetNextIndexedRecord @ 0x1405ABC00 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbpFindMatchingName(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int NextIndexedRecord; // ebx
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rcx
  bool v8; // zf
  int v10; // eax

  NextIndexedRecord = a2;
  if ( !a2 )
    return NextIndexedRecord;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    if ( !FirstTag )
      break;
    StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
    if ( !StringTagPtr )
      break;
    if ( (a3[5] & 1) != 0 )
    {
      v10 = wcsicmp(*((const wchar_t **)a3 + 4), StringTagPtr);
      v8 = v10 == 0;
      if ( v10 < 0 )
        return 0LL;
    }
    else
    {
      v8 = wcsicmp(StringTagPtr, *((const wchar_t **)a3 + 4)) == 0;
    }
    if ( !v8 )
    {
      NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a3, a3);
      if ( NextIndexedRecord )
        continue;
    }
    return NextIndexedRecord;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
