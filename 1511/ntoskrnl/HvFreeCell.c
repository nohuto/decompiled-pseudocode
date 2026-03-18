/*
 * XREFs of HvFreeCell @ 0x1403D9010
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpRemoveValueFromList @ 0x1403D7848 (CmpRemoveValueFromList.c)
 *     CmpRemoveSubKey @ 0x1403D7AB8 (CmpRemoveSubKey.c)
 *     CmpFreeKeyBody @ 0x1403D7D40 (CmpFreeKeyBody.c)
 *     CmpAddSubKeyEx @ 0x1403D7E1C (CmpAddSubKeyEx.c)
 *     CmpFreeKeyByCell @ 0x1403D84C4 (CmpFreeKeyByCell.c)
 *     HvReallocateCell @ 0x1403D87A8 (HvReallocateCell.c)
 *     CmpFreeValue @ 0x1403D8900 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1403D96C0 (CmpFreeValueData.c)
 *     CmpAddToLeaf @ 0x1403D97A4 (CmpAddToLeaf.c)
 *     CmpSetValueKeyExisting @ 0x1403DA0F4 (CmpSetValueKeyExisting.c)
 *     CmpFreeSecurityDescriptor @ 0x1403DA6FC (CmpFreeSecurityDescriptor.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmpAssignSecurityDescriptor @ 0x1403DFF74 (CmpAssignSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403E09B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpAddValueKeyNew @ 0x1403F448C (CmpAddValueKeyNew.c)
 *     CmpSetValueDataNew @ 0x1404AFE2C (CmpSetValueDataNew.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpSetValueDataExisting @ 0x1404B8C18 (CmpSetValueDataExisting.c)
 *     CmpSyncKeyValues @ 0x14050F5B0 (CmpSyncKeyValues.c)
 *     CmpCopyValue @ 0x14050F7B0 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x14050F9C8 (CmpFreeKeyValues.c)
 *     CmpCommitSetSecurityUoW @ 0x14051A854 (CmpCommitSetSecurityUoW.c)
 *     CmMoveKey @ 0x1405DEE58 (CmMoveKey.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x1405E1F44 (CmpCreateEmptyKey.c)
 *     CmpDuplicateIndex @ 0x1405E3E4C (CmpDuplicateIndex.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1405E4090 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x1405E4300 (CmpSplitLeaf.c)
 *     CmpCommitRenameKeyUoW @ 0x1405EBE70 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x1403D91AC (HvpIsFreeNeighbor.c)
 *     HvpEnlistFreeCell @ 0x1403D9258 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 *     HvpRemoveFreeCellHint @ 0x140479A30 (HvpRemoveFreeCellHint.c)
 */

void __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rsi
  __int64 v4; // rbp
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v6; // rcx
  struct _EX_RUNDOWN_REF *v7; // r15
  unsigned __int64 BinAddress; // rax
  unsigned __int64 v9; // r14
  int *v10; // rbx
  unsigned int v11; // esi
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // edx
  __int64 v15; // r14
  int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // r10d
  __int64 v19; // rax
  int v20; // r8d
  int *v21; // [rsp+30h] [rbp-48h]
  BOOLEAN v22; // [rsp+80h] [rbp+8h] BYREF
  _DWORD v23[2]; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+98h] [rbp+20h]

  v3 = (unsigned int)BugCheckParameter3;
  v4 = 0LL;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v3);
  v7 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x725uLL);
  BinAddress = HvpMapEntryGetBinAddress(v6, CellMap, &v22, v23);
  v9 = BinAddress;
  if ( (v7[1].Count & 4) != 0 )
  {
    v17 = *(_DWORD *)(BinAddress + 4);
    v18 = v17 + *(_DWORD *)(BinAddress + 8);
    while ( v17 < v18 )
    {
      v19 = HvpGetCellMap(BugCheckParameter2, v17);
      *(_QWORD *)(v19 + 8) &= ~4uLL;
      v17 = v20 + 4096;
    }
  }
  v10 = (int *)(v9 + v7->Count + (v3 & 0xFFF));
  *v10 = -*v10;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v3 >> 31) != 1 )
      break;
    v13 = *v10;
    if ( v21 > v10 )
    {
      v16 = *v21;
      *((_DWORD *)&BugCheckParameter3a + v4) = v13 + v3;
      v23[v4] = v16;
      v4 = (unsigned int)(v4 + 1);
      *v10 = v13 + v16;
    }
    else
    {
      v14 = *v21;
      v23[v4] = *v21;
      *((_DWORD *)&BugCheckParameter3a + v4) = v3 - v14;
      v10 = v21;
      v4 = (unsigned int)(v4 + 1);
      *v21 = v14 + v13;
    }
  }
  while ( (unsigned int)v4 < 2 );
  v11 = (_DWORD)v10 + ((unsigned int)v3 >> 31 << 31) + *(_DWORD *)(v9 + 4) - v9;
  if ( (_DWORD)v4 )
  {
    v15 = 0LL;
    do
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, *(unsigned int *)((char *)&BugCheckParameter3a + v15));
      v15 += 4LL;
      --v4;
    }
    while ( v4 );
  }
  HvpEnlistFreeCell(BugCheckParameter2, v11, 1);
  if ( v22 )
    HvpMapEntryReleaseBlockAddress(v12, v7);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
}
