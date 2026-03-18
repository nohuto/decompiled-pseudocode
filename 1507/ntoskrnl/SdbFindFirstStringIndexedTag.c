/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x140577774
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140577594 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1405AADAC (SdbpSearchDB.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 * Callees:
 *     SdbpGetFirstIndexedRecord @ 0x140577814 (SdbpGetFirstIndexedRecord.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140578004 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbGetIndex @ 0x14057812C (SdbGetIndex.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbpFindMatchingName @ 0x1405ABA24 (SdbpFindMatchingName.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
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
