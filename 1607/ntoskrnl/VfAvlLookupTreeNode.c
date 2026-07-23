/*
 * XREFs of VfAvlLookupTreeNode @ 0x14012F574
 * Callers:
 *     VfTargetDriversRemove @ 0x14012F358 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x1402236BC (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x14070D6F4 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x14070D758 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x14070DAC0 (ViDevObjRemove.c)
 *     VfRemLockDeleteMemoryRange @ 0x14070DE00 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEDC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x14070DF78 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x14070FEB0 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x14071005C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140710144 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140710380 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x14071049C (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140710710 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140710834 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1407108CC (ViTargetWMIRegister.c)
 *     VfCheckForLookaside @ 0x140717598 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140717D6C (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x14071D000 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlNodeInitializeSessionId @ 0x1400824BC (ViAvlNodeInitializeSessionId.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140082690 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400826C0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x140082718 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x140082734 (ViAvlTableIndex.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1400C1D30 (RtlLookupElementGenericTableFullAvl.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // r13
  __int64 v5; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 i; // rsi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r13
  __int64 v19; // rcx
  PVOID NodeOrParent; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 Buffer; // [rsp+28h] [rbp-18h] BYREF
  __int64 v22; // [rsp+30h] [rbp-10h]
  TABLE_SEARCH_RESULT SearchResult; // [rsp+90h] [rbp+50h] BYREF
  __int64 v24; // [rsp+98h] [rbp+58h]

  v4 = 0LL;
  v5 = a4;
  if ( !a4 )
    v5 = *a1;
  v9 = a3 & 0xFFFFFFFFFFFFF000uLL;
  v10 = (v5 + (a3 & 0xFFF) + 4095) >> 12;
  if ( (a3 & 0xFFFFFFFFFFFFF000uLL) == a3 )
    goto LABEL_4;
  Buffer = a3;
  v16 = v5;
  if ( v10 > 1 )
    v16 = 4096LL;
  v22 = v16;
  ViAvlNodeInitializeSessionId((__int64)a1, (__int64)&Buffer);
  ViAvlTableIndex((__int64)a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v18 = 192 * v17;
  v19 = 192 * v17 + a1[2];
  v24 = 192 * v17;
  ViAvlAcquireTableLockAtDpcLevelSafe(v19, a2);
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v18 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v24 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_4:
    v11 = v5 + a3;
    for ( i = 0LL; i < v10; ++i )
    {
      Buffer = v9;
      v24 = v9 + 4096;
      if ( v9 + 4096 <= v11 )
        v22 = 4096LL;
      else
        v22 = v11 - v9;
      ViAvlNodeInitializeSessionId((__int64)a1, (__int64)&Buffer);
      ViAvlTableIndex((__int64)a1, Buffer);
      ViAvlRaiseIrqlSafe(a2);
      v14 = 192 * v13;
      ViAvlAcquireTableLockAtDpcLevelSafe(192 * v13 + a1[2], a2);
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v14 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      ViAvlReleaseTableLockFromDpcLevel(v14 + a1[2], a2);
      v9 = v24;
    }
  }
  return v4;
}
