/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x140535188
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404E16A0 (PnpReleaseDependencyRelationsLock.c)
 *     IopAllocateRelationList @ 0x140535F08 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x140535FC0 (IopFreeRelationList.c)
 *     IopEnumerateRelations @ 0x140536D78 (IopEnumerateRelations.c)
 *     PnpAllocateCriticalMemory @ 0x140536EA0 (PnpAllocateCriticalMemory.c)
 *     IopIsDescendantNode @ 0x140538368 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x14069574C (IopCheckIfMergeRequired.c)
 *     IopMergeRelationLists @ 0x140695844 (IopMergeRelationLists.c)
 */

void __fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, void **a2, int a3, int a4)
{
  PVOID v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  PVOID v9; // rsi
  __int64 CriticalMemory; // rbx
  PVOID *v11; // r14
  PVOID **v12; // rax
  __int64 v13; // r11
  __int64 v14; // r11
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  PVOID *v17; // rdi
  __int64 v18; // r8
  __int64 RelationList; // rax
  PVOID *v20; // rcx
  PVOID **v21; // rax
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF

  v4 = *a2;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v9 = v4;
  CriticalMemory = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  PnpAcquireDependencyRelationsLock(1);
  v11 = (PVOID *)IopPendingSurpriseRemovals;
  while ( v11 != &IopPendingSurpriseRemovals )
  {
    v17 = v11;
    v11 = (PVOID *)*v11;
    if ( v17[7] == a1 )
    {
      v9 = v17[8];
      CriticalMemory = (__int64)v17;
      break;
    }
    if ( (unsigned __int8)IopCheckIfMergeRequired(v17[8], v9) )
    {
      if ( v9 == v4 )
      {
        CriticalMemory = (__int64)v17;
        RelationList = IopAllocateRelationList(3LL);
        v9 = (PVOID)RelationList;
        if ( !RelationList )
        {
          v9 = v4;
          break;
        }
        IopMergeRelationLists(RelationList, v4, 0LL);
      }
      LOBYTE(v18) = 1;
      IopMergeRelationLists(v9, v17[8], v18);
      IopFreeRelationList(v17[8]);
      if ( (PVOID *)CriticalMemory == v17 )
      {
        *(_QWORD *)(CriticalMemory + 64) = 0LL;
      }
      else
      {
        v20 = (PVOID *)*v17;
        v21 = (PVOID **)v17[1];
        if ( *((PVOID **)*v17 + 1) != v17 || *v21 != v17 )
          __fastfail(3u);
        *v21 = v20;
        v20[1] = v21;
        ExFreePoolWithTag(v17, 0);
      }
    }
  }
  PnpReleaseDependencyRelationsLock();
  if ( v4 == v9 )
  {
    CriticalMemory = PnpAllocateCriticalMemory(3LL, 512LL, 112LL, 1416654416LL);
    v12 = (PVOID **)qword_14034A8B8;
    *(_QWORD *)CriticalMemory = &IopPendingSurpriseRemovals;
    *(_QWORD *)(CriticalMemory + 8) = v12;
    if ( *v12 != &IopPendingSurpriseRemovals )
      __fastfail(3u);
    *v12 = (PVOID *)CriticalMemory;
    qword_14034A8B8 = CriticalMemory;
  }
  else
  {
    IopFreeRelationList(v4);
  }
  v23 = 0LL;
  while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v9, (unsigned int)&v23, (unsigned int)&v22, 0, 0LL) )
  {
    if ( v22 )
      v13 = *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL);
    else
      v13 = 0LL;
    if ( (*(_BYTE *)(v13 + 648) & 1) != 0 )
    {
      if ( (unsigned __int8)IopIsDescendantNode(v9) )
      {
        *(_QWORD *)(v14 + 648) &= ~1uLL;
        --*(_DWORD *)(*(_QWORD *)(v14 + 648) + 656LL);
      }
    }
  }
  *(_QWORD *)(CriticalMemory + 56) = a1;
  *(_DWORD *)(CriticalMemory + 84) = a3;
  *(_BYTE *)(CriticalMemory + 88) = 0;
  *(_QWORD *)(CriticalMemory + 64) = v9;
  *(_DWORD *)(CriticalMemory + 108) = a4;
  *(_BYTE *)(CriticalMemory + 104) = 0;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
