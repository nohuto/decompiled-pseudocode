/*
 * XREFs of HvpPointMapEntriesToBuffer @ 0x1403F79BC
 * Callers:
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401AA964 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpMapHiveImageFromSystemCache @ 0x1401AB468 (HvpMapHiveImageFromSystemCache.c)
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1403D8960 (HvpRemapAndEnlistHiveBins.c)
 *     HvpEnlistBinInMap @ 0x1403D8A90 (HvpEnlistBinInMap.c)
 *     HvpMapHiveImage @ 0x1403D8C44 (HvpMapHiveImage.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
 *     HvpAddDummyBinToHive @ 0x1405EDAD4 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1405EDC64 (HvpAddLoadedBinToHive.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
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
