/*
 * XREFs of HvCheckAndUpdateHiveBackupTimeStamp @ 0x1403D169C
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 */

__int64 __fastcall HvCheckAndUpdateHiveBackupTimeStamp(ULONG_PTR BugCheckParameter2)
{
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v3; // rcx
  struct _EX_RUNDOWN_REF *v4; // rdi
  unsigned __int64 BinAddress; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebx
  BOOLEAN v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF

  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, 0LL);
  v4 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, 0LL, 0x158BuLL);
  BinAddress = HvpMapEntryGetBinAddress(v3, CellMap, &v10, &v11);
  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  v7 = BinAddress;
  if ( *(_QWORD *)(BinAddress + 20) == *(_QWORD *)(v6 + 12) )
    goto LABEL_3;
  if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 12LL);
    *(_QWORD *)(v7 + 20) = v6;
LABEL_3:
    v8 = 0;
    goto LABEL_4;
  }
  v8 = -1073741443;
LABEL_4:
  if ( v10 )
    HvpMapEntryReleaseBlockAddress(v6, v4);
  return v8;
}
