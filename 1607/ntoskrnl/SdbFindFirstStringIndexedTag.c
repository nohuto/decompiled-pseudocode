/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x140484C74
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140484B38 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140484F3C (SdbpSearchDB.c)
 *     KsepDbGetShimInfo @ 0x140652718 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbpGetFirstIndexedRecord @ 0x140484D14 (SdbpGetFirstIndexedRecord.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140484E1C (SdbMakeIndexKeyFromStringEx.c)
 *     SdbGetIndex @ 0x140485058 (SdbGetIndex.c)
 *     SdbpFindMatchingName @ 0x140573C7C (SdbpFindMatchingName.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(__int64 a1, __int64 a2, __int64 a3, const WCHAR *a4, unsigned int *a5)
{
  unsigned __int16 v6; // di
  unsigned __int16 v7; // bp
  unsigned int Index; // eax
  __int64 IndexKeyFromString; // rax
  __int64 v11; // rdx
  unsigned int FirstIndexedRecord; // eax
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  unsigned int v16[6]; // [rsp+30h] [rbp-18h] BYREF

  v16[0] = 0;
  v6 = a3;
  v7 = a2;
  Index = SdbGetIndex(a1, a2, a3, v16);
  *a5 = Index;
  if ( !Index )
  {
    v15 = v6;
    v14 = v7;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbFindFirstStringIndexedTag",
      226,
      (unsigned int)"Index not found 0x%lx Key 0x%lx",
      v14,
      v15);
    return 0LL;
  }
  a5[5] = v16[0];
  *((_WORD *)a5 + 6) = v6;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4);
  v11 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, v11, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
