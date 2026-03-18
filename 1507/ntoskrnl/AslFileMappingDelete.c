/*
 * XREFs of AslFileMappingDelete @ 0x140578388
 * Callers:
 *     SdbCloseDatabaseRead @ 0x140578BAC (SdbCloseDatabaseRead.c)
 *     SdbpCheckKObject @ 0x1405A9EE4 (SdbpCheckKObject.c)
 *     SdbGetDatabaseMatch @ 0x1405AA8F0 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x1405AAB1C (AslFileMappingCreate.c)
 *     SdbpCheckMatchingFiles @ 0x1405AB79C (SdbpCheckMatchingFiles.c)
 *     SdbOpenDatabaseEx @ 0x140701D44 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140702DFC (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     RtlFileMapFree @ 0x14016C7F8 (RtlFileMapFree.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 */

__int64 __fastcall AslFileMappingDelete(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  if ( a1 )
  {
    RtlFileMapFree((_QWORD *)(a1 + 520));
    AslFree(v2, *(_QWORD *)(a1 + 584));
    *(_QWORD *)(a1 + 584) = 0LL;
    return AslFree(v3, a1);
  }
  return result;
}
