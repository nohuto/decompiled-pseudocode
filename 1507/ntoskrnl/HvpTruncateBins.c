/*
 * XREFs of HvpTruncateBins @ 0x14044D444
 * Callers:
 *     HvStoreModifiedData @ 0x14044D040 (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x14065E25C (HvSyncHive.c)
 * Callees:
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     ExIsResourceAcquiredExclusiveLite @ 0x1400FED50 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     HvFreeHivePartial @ 0x14044D4F0 (HvFreeHivePartial.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  int *v2; // r14
  int i; // ebx
  int v4; // edi
  int v5; // r8d
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
        if ( !HvpGetCellMap(BugCheckParameter2, (unsigned int)(v5 + v4 - 4096)) )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, (unsigned int)((i << 31) + v4 - 4096), 0x1538uLL);
        FreeBin = HvpMapEntryGetFreeBin();
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
