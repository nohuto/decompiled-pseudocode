/*
 * XREFs of HvpTruncateBins @ 0x140480798
 * Callers:
 *     HvStoreModifiedData @ 0x14047FC40 (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x140606410 (HvSyncHive.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140092020 (ExIsResourceAcquiredExclusiveLite.c)
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  int *v2; // r14
  int i; // ebx
  int v4; // edi
  int v5; // r8d
  __int64 CellMap; // rax
  __int64 FreeBin; // rax

  v2 = (int *)(BugCheckParameter2 + 1400);
  for ( i = 0; i < 2; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = i << 31;
      do
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)(v5 + v4 - 4096));
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)((i << 31) + v4 - 4096), 0x1519uLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        if ( !FreeBin )
          break;
        v4 = *(_DWORD *)(FreeBin + 20);
      }
      while ( v4 );
    }
    if ( i
      || (unsigned int)(v4 + 0x10000) <= *(_DWORD *)(BugCheckParameter2 + 2964)
      && ExIsResourceAcquiredExclusiveLite(&CmpRegistryLock) )
    {
      HvFreeHivePartial(BugCheckParameter2);
    }
    v2 += 158;
  }
  return 0;
}
