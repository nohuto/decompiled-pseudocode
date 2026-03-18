/*
 * XREFs of SdbInitDatabaseInMemory @ 0x1405743D0
 * Callers:
 *     KsepShimDbMapToMemory @ 0x140572334 (KsepShimDbMapToMemory.c)
 *     PiLookupInDDB @ 0x1405AA490 (PiLookupInDDB.c)
 *     PpInitializeBootDDB @ 0x1407C03F8 (PpInitializeBootDDB.c)
 *     KseShimDatabaseBootInitialize @ 0x1407E77F0 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     SdbpInitializeMatchers @ 0x140574450 (SdbpInitializeMatchers.c)
 *     SdbpOpenDatabaseInMemory @ 0x140574548 (SdbpOpenDatabaseInMemory.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     SdbCloseDatabaseRead @ 0x140578BAC (SdbCloseDatabaseRead.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
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
