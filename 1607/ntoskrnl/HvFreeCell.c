/*
 * XREFs of HvFreeCell @ 0x1404016EC
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B376C (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpDereferenceSecurityNode @ 0x1401B6514 (CmpDereferenceSecurityNode.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FCD98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpSetValueDataNew @ 0x1403FF934 (CmpSetValueDataNew.c)
 *     HvReallocateCell @ 0x1403FFDEC (HvReallocateCell.c)
 *     CmpSetValueKeyExisting @ 0x1403FFF64 (CmpSetValueKeyExisting.c)
 *     CmpFreeKeyByCell @ 0x1404005C8 (CmpFreeKeyByCell.c)
 *     CmpFreeValue @ 0x140401680 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x140401A0C (CmpFreeValueData.c)
 *     CmpAddValueKeyNew @ 0x140401BC8 (CmpAddValueKeyNew.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmpAddSubKeyEx @ 0x1404B0A20 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1404B0DF0 (CmpAddToLeaf.c)
 *     CmpRemoveSubKeyFromList @ 0x1404D4CD4 (CmpRemoveSubKeyFromList.c)
 *     CmpFreeSecurityDescriptor @ 0x1404D972C (CmpFreeSecurityDescriptor.c)
 *     CmpRemoveValueFromList @ 0x1404DC880 (CmpRemoveValueFromList.c)
 *     CmpFreeKeyBody @ 0x1404DE02C (CmpFreeKeyBody.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404E1020 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCopyKeyPartial @ 0x1404EBDEC (CmpCopyKeyPartial.c)
 *     CmpSetValueDataExisting @ 0x1404ECA34 (CmpSetValueDataExisting.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14053B050 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053B4E8 (CmpLightWeightCreateSetValueData.c)
 *     CmMoveKey @ 0x1405FCFA8 (CmMoveKey.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1406026C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCopyValue @ 0x140608960 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x140608C08 (CmpFreeKeyValues.c)
 *     CmpSyncKeyValues @ 0x140609858 (CmpSyncKeyValues.c)
 *     CmpDuplicateIndex @ 0x140609D70 (CmpDuplicateIndex.c)
 *     CmpFreeIndexByCell @ 0x140609F58 (CmpFreeIndexByCell.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14060AA54 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSplitLeaf @ 0x14060AFB4 (CmpSplitLeaf.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DD60 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14060E7D8 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14060E970 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x14002D400 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D660 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x14002D780 (HvpGetBinContextInitialize.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     HvpIsFreeNeighbor @ 0x1404018CC (HvpIsFreeNeighbor.c)
 *     HvpGetCellMap @ 0x140513BC0 (HvpGetCellMap.c)
 *     HvpRemoveFreeCellHint @ 0x140514670 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140514E4C (HvpEnlistFreeCell.c)
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
