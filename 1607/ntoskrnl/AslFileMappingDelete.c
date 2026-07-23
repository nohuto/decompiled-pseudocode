/*
 * XREFs of AslFileMappingDelete @ 0x1405146D8
 * Callers:
 *     SdbCloseDatabaseRead @ 0x1404CEB70 (SdbCloseDatabaseRead.c)
 *     AslFileMappingCreate @ 0x1405153C4 (AslFileMappingCreate.c)
 *     SdbGetDatabaseMatch @ 0x140515544 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreateFromImageView @ 0x140571838 (AslFileMappingCreateFromImageView.c)
 *     SdbpCheckKObject @ 0x1405734FC (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x1406C175C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x1406C22E4 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2C20 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     RtlFileMapFree @ 0x14010B304 (RtlFileMapFree.c)
 *     AslFree @ 0x140514714 (AslFree.c)
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
