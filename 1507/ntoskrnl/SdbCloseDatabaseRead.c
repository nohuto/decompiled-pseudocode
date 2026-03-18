/*
 * XREFs of SdbCloseDatabaseRead @ 0x140578BAC
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405743D0 (SdbInitDatabaseInMemory.c)
 *     SdbReleaseDatabase @ 0x140578BDC (SdbReleaseDatabase.c)
 *     SdbpCloseLocalDatabaseEx @ 0x140704048 (SdbpCloseLocalDatabaseEx.c)
 * Callees:
 *     AslFileMappingDelete @ 0x140578388 (AslFileMappingDelete.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslHashFree @ 0x140705AF0 (AslHashFree.c)
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
