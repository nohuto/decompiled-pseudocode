/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x14047F024
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
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
