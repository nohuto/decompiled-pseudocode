/*
 * XREFs of SdbCloseDatabaseRead @ 0x140499CD8
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1404951FC (SdbInitDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x140499BF8 (SdbReleaseDatabase.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1406C4190 (SdbpCloseLocalDatabaseEx.c)
 * Callees:
 *     AslFileMappingDelete @ 0x140485350 (AslFileMappingDelete.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslHashFree @ 0x1406C5E28 (AslHashFree.c)
 */

void __fastcall SdbCloseDatabaseRead(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  void *v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 1344);
  if ( v1 && *(_DWORD *)(v1 + 16) == 1 )
  {
    v4 = *(void **)(v1 + 8);
    if ( v4 )
      AslFree(a1, v4);
    AslFree(a1, *(void **)(a1 + 1344));
    v5 = *(_QWORD *)(a1 + 1352);
    *(_QWORD *)(a1 + 1344) = 0LL;
    if ( v5 )
    {
      AslHashFree();
      *(_QWORD *)(a1 + 1352) = 0LL;
    }
  }
  AslFileMappingDelete(*(_QWORD *)a1);
  AslFree(v3, (void *)a1);
}
