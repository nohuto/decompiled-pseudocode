/*
 * XREFs of HvFreeCell @ 0x14049FC7C
 * Callers:
 *     CmpSplitLeaf @ 0x140409E3C (CmpSplitLeaf.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpSetValueKeyExisting @ 0x14042B410 (CmpSetValueKeyExisting.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     CmpFreeKeyByCell @ 0x140449FBC (CmpFreeKeyByCell.c)
 *     CmpFreeKeyBody @ 0x14044A198 (CmpFreeKeyBody.c)
 *     CmpRemoveSubKey @ 0x14044A21C (CmpRemoveSubKey.c)
 *     CmpFreeSecurityDescriptor @ 0x14044A4C8 (CmpFreeSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     CmpFreeValue @ 0x1404A08F4 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1404A0954 (CmpFreeValueData.c)
 *     CmpAddValueKeyNew @ 0x1404A0F2C (CmpAddValueKeyNew.c)
 *     HvReallocateCell @ 0x1404A1290 (HvReallocateCell.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1404AE5EC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpRemoveValueFromList @ 0x1404F0AAC (CmpRemoveValueFromList.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpAddSubKeyEx @ 0x1405335D0 (CmpAddSubKeyEx.c)
 *     CmpAddToLeaf @ 0x1405339A8 (CmpAddToLeaf.c)
 *     CmpSetValueDataNew @ 0x14054384C (CmpSetValueDataNew.c)
 *     CmpSetValueDataExisting @ 0x1405583F0 (CmpSetValueDataExisting.c)
 *     CmpSyncKeyValues @ 0x140585640 (CmpSyncKeyValues.c)
 *     CmpCopyValue @ 0x140585A20 (CmpCopyValue.c)
 *     CmpFreeKeyValues @ 0x140585C38 (CmpFreeKeyValues.c)
 *     CmpCommitSetSecurityUoW @ 0x14058E3F0 (CmpCommitSetSecurityUoW.c)
 *     CmMoveKey @ 0x140654448 (CmMoveKey.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmpCreateEmptyKey @ 0x140658120 (CmpCreateEmptyKey.c)
 *     CmpCopySaclToVirtualKey @ 0x140659314 (CmpCopySaclToVirtualKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140659810 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpDuplicateIndex @ 0x14065AFC8 (CmpDuplicateIndex.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x14065B23C (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCommitRenameKeyUoW @ 0x140664408 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     HvpMapEntryGetBinAddress @ 0x1400CAB30 (HvpMapEntryGetBinAddress.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14017DF88 (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     HvpEnlistFreeCell @ 0x14049F304 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14049F5E0 (HvpRemoveFreeCellHint.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 *     HvpIsFreeNeighbor @ 0x14049FEB0 (HvpIsFreeNeighbor.c)
 */

void __fastcall HvFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v12; // rcx
  ULONG_PTR v13; // r10
  struct _EX_RUNDOWN_REF *v14; // r13
  unsigned __int64 BinAddress; // rax
  unsigned __int64 v16; // r15
  unsigned int *v17; // rbx
  struct _EX_RUNDOWN_REF *v18; // r13
  unsigned int v19; // edi
  int v20; // r14d
  __int64 v21; // rcx
  ULONG_PTR v22; // rbx
  signed __int32 v23; // eax
  unsigned int *v24; // r8
  unsigned int v25; // ecx
  unsigned int v26; // edx
  __int64 v27; // r12
  __int64 v28; // r15
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  unsigned int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // r10d
  __int64 v35; // rax
  int v36; // r8d
  _DWORD v37[2]; // [rsp+38h] [rbp-28h]
  ULONG_PTR BugCheckParameter3a; // [rsp+40h] [rbp-20h]
  unsigned int *v39; // [rsp+48h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v40; // [rsp+50h] [rbp-10h]
  BOOLEAN v41; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp+50h]
  int v43; // [rsp+B8h] [rbp+58h] BYREF

  v4 = *(_QWORD *)(BugCheckParameter2 + 2840);
  CurrentThread = KeGetCurrentThread();
  v7 = (unsigned int)BugCheckParameter3;
  v8 = 0LL;
  v9 = KeAbPreAcquire(v4, 0LL, 0LL, a4);
  v10 = v9;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  *(_QWORD *)(v4 + 8) = CurrentThread;
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v7);
  v40 = CellMap;
  v14 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, v13, BugCheckParameter2, v7, 0x71CuLL);
  v42 = (unsigned int)v7 >> 31;
  BinAddress = HvpMapEntryGetBinAddress(v12, CellMap, &v41, &v43);
  v16 = BinAddress;
  if ( (v14[1].Count & 4) != 0 )
  {
    v33 = *(_DWORD *)(BinAddress + 4);
    v34 = v33 + *(_DWORD *)(BinAddress + 8);
    while ( v33 < v34 )
    {
      v35 = HvpGetCellMap(BugCheckParameter2, v33);
      *(_QWORD *)(v35 + 8) &= ~4uLL;
      v33 = v36 + 4096;
    }
  }
  v17 = (unsigned int *)(v16 + v14->Count + (v7 & 0xFFF));
  *v17 = -*v17;
  do
  {
    if ( (unsigned __int8)HvpIsFreeNeighbor(BugCheckParameter2, (unsigned int)v7 >> 31) != 1 )
      break;
    v24 = v39;
    v25 = *v17;
    if ( v39 > v17 )
    {
      v30 = *v39;
      *((_DWORD *)&BugCheckParameter3a + v8) = v25 + v7;
      v37[v8] = v30;
      v8 = (unsigned int)(v8 + 1);
      *v17 = v25 + v30;
    }
    else
    {
      v26 = *v39;
      v37[v8] = *v39;
      *((_DWORD *)&BugCheckParameter3a + v8) = v7 - v26;
      v17 = v24;
      v8 = (unsigned int)(v8 + 1);
      *v24 = v26 + v25;
    }
  }
  while ( (unsigned int)v8 < 2 );
  v18 = v40;
  v19 = (_DWORD)v17 + ((unsigned int)v7 >> 31 << 31) + *(_DWORD *)(v16 + 4) - v16;
  if ( (_DWORD)v8 )
  {
    v27 = (unsigned int)v8;
    v28 = 0LL;
    v20 = v42;
    do
    {
      v29 = (v37[v28] >> 3) - 1;
      if ( v29 >= 0x10 )
      {
        v31 = v29 >> 4;
        if ( v31 > 0xFF )
        {
          v29 = 23;
        }
        else
        {
          _BitScanReverse(&v32, v31);
          v29 = v32 + 16;
        }
      }
      HvpRemoveFreeCellHint(BugCheckParameter2, *(unsigned int *)((char *)&BugCheckParameter3a + v28 * 4), v29, v20);
      ++v28;
      --v27;
    }
    while ( v27 );
  }
  else
  {
    v20 = v42;
  }
  HvpEnlistFreeCell(BugCheckParameter2, v19, *v17, v20, 1);
  if ( v41 )
    HvpMapEntryReleaseBlockAddress(v21, v18);
  v22 = *(_QWORD *)(BugCheckParameter2 + 2840);
  *(_QWORD *)(v22 + 8) = 0LL;
  v23 = _InterlockedCompareExchange((volatile signed __int32 *)v22, 1, 0);
  if ( v23 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v22, v23);
  KeAbPostRelease(v22);
}
