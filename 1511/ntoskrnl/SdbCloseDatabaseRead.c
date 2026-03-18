/*
 * XREFs of SdbCloseDatabaseRead @ 0x1403B615C
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1403B5E60 (SdbInitDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x1403B607C (SdbReleaseDatabase.c)
 *     SdbpCloseLocalDatabaseEx @ 0x14067F1F4 (SdbpCloseLocalDatabaseEx.c)
 * Callees:
 *     AslFileMappingDelete @ 0x1403B7DE0 (AslFileMappingDelete.c)
 *     AslFree @ 0x1403B7E1C (AslFree.c)
 *     AslHashFree @ 0x140680D34 (AslHashFree.c)
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
