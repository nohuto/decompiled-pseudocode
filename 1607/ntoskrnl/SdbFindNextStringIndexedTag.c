/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x1406C50B0
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140513EC0 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1405142C4 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x1405741BC (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140574398 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
