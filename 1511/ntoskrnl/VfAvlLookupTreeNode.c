/*
 * XREFs of VfAvlLookupTreeNode @ 0x140002178
 * Callers:
 *     VfTargetDriversRemove @ 0x140001FF8 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x14020BDD4 (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x1406C165C (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1406C16C0 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x1406C1A28 (ViDevObjRemove.c)
 *     VfRemLockDeleteMemoryRange @ 0x1406C1D54 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1406C1E30 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1406C1EB8 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1406C3DE8 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1406C3F8C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1406C4074 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1406C4294 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1406C43B0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1406C4634 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1406C4770 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1406C4808 (ViTargetWMIRegister.c)
 *     VfCheckForLookaside @ 0x1406C8BF0 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1406C8C74 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1406C8D68 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1406C93A0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1406C9608 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1406C97D4 (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1406D0E58 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140002518 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140002548 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400025A0 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400025BC (ViAvlTableIndex.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x14008FEB0 (RtlLookupElementGenericTableFullAvl.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // r12
  __int64 v5; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 i; // rsi
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r13
  unsigned __int64 Buffer; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+28h] [rbp-40h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+80h] [rbp+18h] BYREF
  PVOID NodeOrParent; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = a4;
  if ( !a4 )
    v5 = *a1;
  v9 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v5 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_4;
  Buffer = a3;
  v19 = v5;
  if ( v10 > 1 )
    v19 = 4096LL;
  v25 = v19;
  v20 = ViAvlTableIndex(a1, a3);
  ViAvlRaiseIrqlSafe(a2, v21, v20);
  v23 = 192 * v22;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v22 + a1[2], a2);
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v23 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v23 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_4:
    v11 = v5 + a3;
    for ( i = 0LL; i < v10; v9 = v13 )
    {
      v13 = v9 + 4096;
      Buffer = v9;
      if ( v9 + 4096 <= v11 )
        v25 = 4096LL;
      else
        v25 = v11 - v9;
      v14 = ViAvlTableIndex(a1, v9);
      ViAvlRaiseIrqlSafe(a2, v15, v14);
      v17 = 192 * v16;
      ViAvlAcquireTableLockAtDpcLevelSafe(192 * v16 + a1[2], a2);
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v17 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      ViAvlReleaseTableLockFromDpcLevel(v17 + a1[2], a2);
      ++i;
    }
  }
  return v4;
}
