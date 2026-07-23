/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x1404F6EE8
 * Callers:
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401B5848 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401B71BC (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvpMapHiveImage @ 0x1404F7004 (HvpMapHiveImage.c)
 *     HvpEnlistBinInMap @ 0x1404F73D0 (HvpEnlistBinInMap.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404F7584 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x140612454 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406125E4 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 */

void __fastcall HvpPointMapEntriesToBuffer(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6)
{
  unsigned int v9; // r10d
  __int64 CellMap; // rax
  unsigned int v11; // r10d
  unsigned int v12; // r11d

  if ( a4 )
  {
    v9 = 0;
    do
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v9 + a5);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v11 + a5, 0x204uLL);
      *(_QWORD *)(CellMap + 8) = a2;
      *(_QWORD *)(CellMap + 16) = a3;
      if ( v11 )
      {
        *(_DWORD *)(CellMap + 32) = 0;
      }
      else
      {
        *(_DWORD *)(CellMap + 32) = v12;
        *(_QWORD *)(CellMap + 8) = a2 | 1;
      }
      if ( a6 )
      {
        *(_QWORD *)(CellMap + 8) |= 2uLL;
        *(_QWORD *)CellMap = a6;
      }
      else
      {
        *(_QWORD *)CellMap = v11;
      }
      _InterlockedExchange64((volatile __int64 *)(CellMap + 24), a3 == 0);
      v9 = v11 + 4096;
    }
    while ( v9 < v12 );
  }
}
