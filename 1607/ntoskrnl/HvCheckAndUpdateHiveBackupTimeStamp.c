/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404802D0
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x14047FBA4 (HvInitializeHive.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002D400 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D660 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D780 (HvpGetBinContextInitialize.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x1405137E0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x140513BC0 (HvpGetCellMap.c)
 */

__int64 __fastcall HvCheckAndUpdateHiveBackupTimeStamp(ULONG_PTR BugCheckParameter2)
{
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  struct _EX_RUNDOWN_REF *v5; // rsi
  unsigned __int64 BinAddress; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int16 v10; // [rsp+48h] [rbp+10h] BYREF

  HvpGetBinContextInitialize(&v10);
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, 0LL);
  v4 = 0;
  v5 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x155EuLL);
  BinAddress = HvpMapEntryGetBinAddress(v3, CellMap, &v10);
  v7 = *(_QWORD *)(BugCheckParameter2 + 64);
  v8 = BinAddress;
  if ( *(_QWORD *)(BinAddress + 20) != *(_QWORD *)(v7 + 12) )
  {
    if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 64);
      *(_QWORD *)(v8 + 20) = *(_QWORD *)(v7 + 12);
    }
    else
    {
      v4 = -1073741443;
    }
  }
  HvpMapEntryReleaseBinAddress(v7, v5, &v10);
  return v4;
}
