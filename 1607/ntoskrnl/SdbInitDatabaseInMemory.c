/*
 * XREFs of SdbInitDatabaseInMemory @ 0x140495C8C
 * Callers:
 *     KsepShimDbMapToMemory @ 0x140495B04 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x1405158D4 (PiLookupInDDB.c)
 *     PpInitializeBootDDB @ 0x14079DA0C (PpInitializeBootDDB.c)
 *     KseShimDatabaseBootInitialize @ 0x1407BC020 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     SdbpInitializeMatchers @ 0x140495D0C (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x140495E04 (SdbpOpenDatabaseInMemory.c)
 *     SdbCloseDatabaseRead @ 0x1404CEB70 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbInitDatabaseInMemory(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rcx

  v4 = AslAlloc(a1, 984LL);
  if ( v4 )
  {
    v5 = SdbpOpenDatabaseInMemory(a1, a2);
    *(_QWORD *)(v4 + 8) = v5;
    if ( v5 )
    {
      *(_DWORD *)(v4 + 24) = 1;
      *(_DWORD *)(v4 + 28) = 1;
      *(_DWORD *)(v4 + 56) = 2;
      *(_QWORD *)(v4 + 48) = v5;
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(v5 + 28);
      SdbpInitializeMatchers(v4);
      return v4;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbInitDatabaseInMemory", 658, (unsigned int)"Unable to open main database");
    v7 = *(_QWORD *)(v4 + 8);
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
