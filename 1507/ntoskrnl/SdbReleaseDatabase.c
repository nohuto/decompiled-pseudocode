/*
 * XREFs of SdbReleaseDatabase @ 0x140578BDC
 * Callers:
 *     KsepShimDbUnmapFromMemory @ 0x140578CBC (KsepShimDbUnmapFromMemory.c)
 *     PiLookupInDDB @ 0x1405AA490 (PiLookupInDDB.c)
 *     KseShimDatabaseBootRelease @ 0x1405B2648 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1405B2758 (PpReleaseBootDDB.c)
 * Callees:
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     SdbCloseDatabaseRead @ 0x140578BAC (SdbCloseDatabaseRead.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     SdbpCloseLocalDatabaseEx @ 0x140704048 (SdbpCloseLocalDatabaseEx.c)
 */

void __fastcall SdbReleaseDatabase(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
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
  v3 = *(_QWORD *)(a1 + 8);
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
      v3 = (__int64)v4[1];
      (*v4)[1] = v3;
    }
    AslFree(v3, v4);
  }
  AslFree(v3, (void *)a1);
}
