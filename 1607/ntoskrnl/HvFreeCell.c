/*
 * XREFs of HvFreeCell @ 0x1404005AC
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpDereferenceSecurityNode @ 0x1401B63F8 (CmpDereferenceSecurityNode.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpSetValueDataNew @ 0x1403FE7F4 (CmpSetValueDataNew.c)
 *     HvReallocateCell @ 0x1403FECAC (HvReallocateCell.c)
 *     CmpSetValueKeyExisting @ 0x1403FEE24 (CmpSetValueKeyExisting.c)
 *     CmpFreeKeyByCell @ 0x1403FF488 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140400540 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1404008CC (CmpFreeValueData.c)
 *     CmpAddValueKeyNew @ 0x140400A88 (CmpAddValueKeyNew.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpAddSubKeyEx @ 0x14049AE00 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x14049B1D0 (CmpAddToLeaf.c)
 *     CmpRemoveSubKeyFromList @ 0x1404B82D8 (CmpRemoveSubKeyFromList.c)
 *     CmpFreeSecurityDescriptor @ 0x1404BCD30 (CmpFreeSecurityDescriptor.c)
 *     CmpRemoveValueFromList @ 0x1404BFE84 (CmpRemoveValueFromList.c)
 *     CmpFreeKeyBody @ 0x1404C1630 (CmpFreeKeyBody.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404C4624 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpSetValueDataExisting @ 0x1404CEBA0 (CmpSetValueDataExisting.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14053B590 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053BA28 (CmpLightWeightCreateSetValueData.c)
 *     CmMoveKey @ 0x1405FD05C (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14060277C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x140608CBC (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x14060990C (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x140609E24 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x14060A00C (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14060AB08 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x14060B068 (CmpSplitLeaf.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E88C (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14060EA24 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x14040078C (HvpIsFreeNeighbor.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 *     HvpRemoveFreeCellHint @ 0x1404F7A60 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x1404F823C (HvpEnlistFreeCell.c)
 */

void __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rsi
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v7; // rcx
  struct _EX_RUNDOWN_REF *v8; // r13
  unsigned __int64 BinAddress; // rax
  unsigned __int64 v10; // r14
  int *v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // r10d
  __int64 v19; // rax
  int v20; // r8d
  int *v21; // [rsp+30h] [rbp-48h]
  __int16 v22; // [rsp+80h] [rbp+8h] BYREF
  _DWORD v23[2]; // [rsp+90h] [rbp+18h]
  ULONG_PTR BugCheckParameter3a; // [rsp+98h] [rbp+20h]

  v3 = (unsigned int)BugCheckParameter3;
  v4 = 0LL;
  v5 = 0LL;
  HvpGetBinContextInitialize(&v22);
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v3);
  v8 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v3, 0x71AuLL);
  BinAddress = HvpMapEntryGetBinAddress(v7, CellMap, &v22);
  v10 = BinAddress;
  if ( (v8[1].Count & 4) != 0 )
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
  v11 = (int *)(v10 + v8->Count + (v3 & 0xFFF));
  *v11 = -*v11;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v3 >> 31) != 1 )
      break;
    v14 = *v11;
    if ( v21 <= v11 )
    {
      v16 = *v21;
      v23[v5] = *v21;
      *((_DWORD *)&BugCheckParameter3a + v5) = v3 - v16;
      v11 = v21;
      v5 = (unsigned int)(v5 + 1);
      *v21 = v16 + v14;
    }
    else
    {
      v15 = *v21;
      *((_DWORD *)&BugCheckParameter3a + v5) = v14 + v3;
      v23[v5] = v15;
      v5 = (unsigned int)(v5 + 1);
      *v11 = v14 + v15;
    }
  }
  while ( (unsigned int)v5 < 2 );
  v12 = (_DWORD)v11 + ((unsigned int)v3 >> 31 << 31) + *(_DWORD *)(v10 + 4) - v10;
  if ( (_DWORD)v5 )
  {
    do
    {
      HvpRemoveFreeCellHint(BugCheckParameter2, *(unsigned int *)((char *)&BugCheckParameter3a + v4));
      v4 += 4LL;
      --v5;
    }
    while ( v5 );
  }
  HvpEnlistFreeCell(BugCheckParameter2, v12, 1);
  HvpMapEntryReleaseBinAddress(v13, v8, &v22);
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
}
