/*
 * XREFs of SdbReleaseDatabase @ 0x140499BF8
 * Callers:
 *     KsepShimDbUnmapFromMemory @ 0x140499B78 (KsepShimDbUnmapFromMemory.c)
 *     PiLookupInDDB @ 0x14049CFB8 (PiLookupInDDB.c)
 *     KseShimDatabaseBootRelease @ 0x14056E6D0 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x14056E7B4 (PpReleaseBootDDB.c)
 * Callees:
 *     AslFree @ 0x14048538C (AslFree.c)
 *     SdbCloseDatabaseRead @ 0x140499CD8 (SdbCloseDatabaseRead.c)
 *     SdbpCloseLocalDatabaseEx @ 0x1406C4190 (SdbpCloseLocalDatabaseEx.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
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
