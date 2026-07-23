/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x140513FFC
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140513EC0 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1405142C4 (SdbpSearchDB.c)
 *     KsepDbGetShimInfo @ 0x1406527FC (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbpGetFirstIndexedRecord @ 0x14051409C (SdbpGetFirstIndexedRecord.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1405141A4 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbGetIndex @ 0x1405143E0 (SdbGetIndex.c)
 *     SdbpFindMatchingName @ 0x1405741BC (SdbpFindMatchingName.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4, unsigned int *a5)
{
  __int16 v6; // di
  unsigned int Index; // eax
  __int64 IndexKeyFromString; // rax
  __int64 v10; // rdx
  unsigned int FirstIndexedRecord; // eax
  unsigned int v13[6]; // [rsp+30h] [rbp-18h] BYREF

  v13[0] = 0;
  v6 = a3;
  Index = SdbGetIndex(a1, a2, a3, v13);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbFindFirstStringIndexedTag",
      226,
      (unsigned int)"Index not found 0x%lx Key 0x%lx");
    return 0LL;
  }
  a5[5] = v13[0];
  *((_WORD *)a5 + 6) = v6;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4);
  v10 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, v10, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
