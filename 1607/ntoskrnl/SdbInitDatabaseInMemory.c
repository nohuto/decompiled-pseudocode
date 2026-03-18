/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1404951FC
 * Callers:
 *     KsepShimDbMapToMemory @ 0x140495074 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x14049CFB8 (PiLookupInDDB.c)
 *     PpInitializeBootDDB @ 0x14079DA0C (PpInitializeBootDDB.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     AslFree @ 0x14048538C (AslFree.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     SdbpInitializeMatchers @ 0x14049527C (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x140495374 (SdbpOpenDatabaseInMemory.c)
 *     SdbCloseDatabaseRead @ 0x140499CD8 (SdbCloseDatabaseRead.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

_QWORD *__fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rcx

  v4 = AslAlloc(a1, 0x3D8uLL);
  if ( v4 )
  {
    v5 = SdbpOpenDatabaseInMemory(a1, a2);
    v4[1] = v5;
    if ( v5 )
    {
      *((_DWORD *)v4 + 6) = 1;
      *((_DWORD *)v4 + 7) = 1;
      *((_DWORD *)v4 + 14) = 2;
      v4[6] = v5;
      *((_OWORD *)v4 + 2) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 658, (unsigned int)"Unable to open main database");
    v7 = v4[1];
    if ( v7 )
      SdbCloseDatabaseRead();
    AslFree(v7, v4);
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 649, (unsigned int)"Failed to allocate sdbcontext");
  }
  return 0LL;
}
