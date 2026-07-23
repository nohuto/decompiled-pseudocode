/*
 * XREFs of SdbReleaseDatabase @ 0x1404CEA90
 * Callers:
 *     KsepShimDbUnmapFromMemory @ 0x1404CEA10 (KsepShimDbUnmapFromMemory.c)
 *     PiLookupInDDB @ 0x1405158D4 (PiLookupInDDB.c)
 *     KseShimDatabaseBootRelease @ 0x14056EC10 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x14056ECF4 (PpReleaseBootDDB.c)
 * Callees:
 *     SdbCloseDatabaseRead @ 0x1404CEB70 (SdbCloseDatabaseRead.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1406C42C8 (SdbpCloseLocalDatabaseEx.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReleaseDatabase(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  _QWORD **v4; // rdx
  unsigned int i; // edi

  if ( (*(_DWORD *)(a1 + 28) & 0xFFF8) != 0 )
  {
    for ( i = 3; i < 0x10; ++i )
    {
      if ( ((1 << i) & *(_DWORD *)(a1 + 28)) != 0 )
        SdbpCloseLocalDatabaseEx(a1, a2, i);
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
    SdbpCloseLocalDatabaseEx(a1, a2, 1LL);
  if ( (*(_DWORD *)(a1 + 120) & 2) != 0 )
    SdbCloseDatabaseRead(*(_QWORD *)(a1 + 112));
  v3 = *(_QWORD **)(a1 + 8);
  if ( v3 )
    SdbCloseDatabaseRead(v3);
  while ( 1 )
  {
    v4 = *(_QWORD ***)(a1 + 560);
    if ( !v4 )
      break;
    if ( v4[1] == v4 )
    {
      *(_QWORD *)(a1 + 560) = 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 560) = *v4;
      *v4[1] = *v4;
      v3 = v4[1];
      (*v4)[1] = v3;
    }
    AslFree(v3, v4);
  }
  return AslFree(v3, a1);
}
