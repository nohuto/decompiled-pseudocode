/*
 * XREFs of AslFileMappingDelete @ 0x1403B7DE0
 * Callers:
 *     SdbCloseDatabaseRead @ 0x1403B615C (SdbCloseDatabaseRead.c)
 *     SdbGetDatabaseMatch @ 0x1403B6D2C (SdbGetDatabaseMatch.c)
 *     AslFileMappingCreate @ 0x1403B6E64 (AslFileMappingCreate.c)
 *     SdbpCheckKObject @ 0x14053511C (SdbpCheckKObject.c)
 *     SdbpCheckMatchingFiles @ 0x140535580 (SdbpCheckMatchingFiles.c)
 *     AslFileMappingCreateFromImageView @ 0x14053FBC4 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x14067CED8 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x14067DFA8 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     RtlFileMapFree @ 0x140002870 (RtlFileMapFree.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
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
