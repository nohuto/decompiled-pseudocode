/*
 * XREFs of VfAvlLookupTreeNode @ 0x14012F004
 * Callers:
 *     VfTargetDriversRemove @ 0x14012EDE8 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x140223890 (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x14070D6C4 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x14070D728 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x14070DA90 (ViDevObjRemove.c)
 *     VfRemLockDeleteMemoryRange @ 0x14070DDD0 (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEAC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x14070DF48 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x14070FE80 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x14071002C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140710114 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140710350 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x14071046C (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140710564 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1407106E0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140710804 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x14071089C (ViTargetWMIRegister.c)
 *     VfCheckForLookaside @ 0x140717598 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14071761C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x140717728 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x140717D6C (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140717FE8 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407181D0 (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x14071D000 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     ViAvlNodeInitializeSessionId @ 0x14008435C (ViAvlNodeInitializeSessionId.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140084530 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140084560 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400845B8 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400845D4 (ViAvlTableIndex.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1400C3E90 (RtlLookupElementGenericTableFullAvl.c)
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
