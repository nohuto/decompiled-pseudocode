/*
 * XREFs of VfTargetDriversRemove @ 0x140025684
 * Callers:
 *     VfDriverUnloadImage @ 0x140732000 (VfDriverUnloadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x14074A174 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VfThunkRemoveTargetNotify @ 0x140732068 (VfThunkRemoveTargetNotify.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x140745DD4 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140745E48 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x14074620C (VfPoolCheckForLeaks.c)
 */

void __fastcall VfTargetDriversRemove(__int64 a1)
{
  __int64 v1; // r15
  _SLIST_ENTRY *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  _BYTE v8[16]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v9[3]; // [rsp+30h] [rbp-40h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h]

  if ( !VfSafeMode && ViTargetInitialized )
  {
    v1 = *(_QWORD *)(a1 + 48);
    v2 = 0LL;
    VfAvlInitializeLockContext(v8, 0LL);
    v3 = VfAvlLookupTreeNode(&ViTargetDriversAvl, v8, v1, 1LL);
    v4 = v3;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 48);
      if ( v5 )
      {
        ViTargetRemovingCheckEtwWmi(*(_QWORD *)(v3 + 48), v1);
        VfPoolCheckForLeaks(v5);
        ViTargetRemovingCheckContiguousMemory(v5);
      }
      v6 = *(_OWORD *)(v4 + 16);
      v9[0] = *(_OWORD *)v4;
      v7 = *(_OWORD *)(v4 + 32);
      v9[1] = v6;
      P = *(PVOID *)(v4 + 48);
      v9[2] = v7;
      if ( P )
        --dword_14032BAE0;
      v2 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViTargetDriversAvl, v8, v1, 1LL);
    }
    VfAvlCleanupLockContext(v8);
    if ( v2 )
    {
      VfThunkRemoveTargetNotify(v9);
      if ( P )
        ExFreePoolWithTag(P, 0x44566656u);
      if ( dword_14032BADC == 1 )
      {
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      }
      else
      {
        KeGetCurrentIrql();
        VfPoolDelayFreeIfPossible(v2);
      }
    }
  }
}
