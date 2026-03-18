/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x14067FFF8
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1403B749C (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x1403B7744 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x140535F08 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x1405360E4 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax

  result = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( (_DWORD)result )
    return SdbpFindMatchingName(a1, result, a2);
  return result;
}
