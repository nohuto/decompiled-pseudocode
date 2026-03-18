/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x1406C4F78
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140484B38 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140484F3C (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x140573C7C (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140573E58 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
