/*
 * XREFs of AslFileMappingDelete @ 0x140485350
 * Callers:
 *     SdbCloseDatabaseRead @ 0x140499CD8 (SdbCloseDatabaseRead.c)
 *     SdbGetDatabaseMatch @ 0x14049D418 (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x14049D54C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x1405712F8 (AslFileMappingCreateFromImageView.c)
 *     SdbpCheckKObject @ 0x140572FBC (SdbpCheckKObject.c)
 *     SdbOpenDatabaseEx @ 0x1406C1624 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingFiles @ 0x1406C21AC (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2AE8 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     RtlFileMapFree @ 0x140084CFC (RtlFileMapFree.c)
 *     AslFree @ 0x14048538C (AslFree.c)
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
