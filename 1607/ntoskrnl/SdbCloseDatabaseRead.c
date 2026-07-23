/*
 * XREFs of SdbCloseDatabaseRead @ 0x1404CEB70
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x140495C8C (SdbInitDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x1404CEA90 (SdbReleaseDatabase.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1406C42C8 (SdbpCloseLocalDatabaseEx.c)
 * Callees:
 *     AslFileMappingDelete @ 0x1405146D8 (AslFileMappingDelete.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslHashFree @ 0x1406C5F60 (AslHashFree.c)
 */

__int64 __fastcall SdbCloseDatabaseRead(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = a1[168];
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v5 = *(_QWORD *)(v1 + 8);
    if ( v5 )
      AslFree(a1, v5);
    AslFree(a1, a1[168]);
    v6 = a1[169];
    a1[168] = 0LL;
    if ( v6 )
    {
      AslHashFree();
      a1[169] = 0LL;
    }
  }
  AslFileMappingDelete(*a1);
  return AslFree(v3, a1);
}
