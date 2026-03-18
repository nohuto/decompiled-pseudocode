/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140704E2C
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140577594 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1405AADAC (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x1405ABA24 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x1405ABC00 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
