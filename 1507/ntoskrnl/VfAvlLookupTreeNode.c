/*
 * XREFs of VfAvlLookupTreeNode @ 0x140025810
 * Callers:
 *     VfTargetDriversRemove @ 0x140025684 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x14025B1DC (VfTargetDriversGetNode.c)
 *     VfDevObjIsDeviceRemoved @ 0x140742E88 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140742EEC (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjRemove @ 0x140743254 (ViDevObjRemove.c)
 *     VfRemLockDeleteMemoryRange @ 0x1407435AC (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407436A4 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140743758 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x140745688 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140745840 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140745928 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140745B48 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140745C64 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140745EF8 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140746034 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1407460CC (ViTargetWMIRegister.c)
 *     VfCheckForLookaside @ 0x14074B77C (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x14074B81C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14074B940 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14074BFA0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14074C228 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14074C420 (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x140754A20 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     RtlLookupElementGenericTableFullAvl @ 0x140018038 (RtlLookupElementGenericTableFullAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400259C0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400259F8 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlTableIndex @ 0x140025AB4 (ViAvlTableIndex.c)
 */

PVOID __fastcall VfAvlLookupTreeNode(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  PVOID v4; // r12
  __int64 v5; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbp
  unsigned __int64 i; // rsi
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int8 v16; // cl
  __int64 v17; // rdi
  __int64 v19; // rax
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int8 CurrentIrql; // al
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
  v20 = ViAvlTableIndex(a1, a3, a3, 2LL, Buffer, v19);
  if ( (*(_BYTE *)(a2 + 9) & 1) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v21);
    *(_BYTE *)(a2 + 9) |= 1u;
    *(_BYTE *)(a2 + 8) = CurrentIrql;
  }
  v23 = 192 * v20;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v20 + a1[2], a2);
  v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v23 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
  if ( !v4 )
  {
    ViAvlReleaseTableLockFromDpcLevel(v23 + a1[2], a2);
    --v10;
    v9 += 4096LL;
LABEL_4:
    v11 = a3 + v5;
    for ( i = 0LL; i < v10; v9 = v13 )
    {
      v13 = v9 + 4096;
      Buffer = v9;
      if ( v9 + 4096 <= v11 )
        v25 = 4096LL;
      else
        v25 = v11 - v9;
      v14 = ViAvlTableIndex(a1, v9, a3, 2LL, Buffer, v25);
      if ( (*(_BYTE *)(a2 + 9) & 1) == 0 )
      {
        v16 = KeGetCurrentIrql();
        __writecr8(v15);
        *(_BYTE *)(a2 + 9) |= 1u;
        *(_BYTE *)(a2 + 8) = v16;
      }
      v17 = 192 * v14;
      ViAvlAcquireTableLockAtDpcLevelSafe(192 * v14 + a1[2], a2);
      v4 = RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(v17 + a1[2]), &Buffer, &NodeOrParent, &SearchResult);
      if ( v4 )
        break;
      ViAvlReleaseTableLockFromDpcLevel(v17 + a1[2], a2);
      ++i;
    }
  }
  return v4;
}
