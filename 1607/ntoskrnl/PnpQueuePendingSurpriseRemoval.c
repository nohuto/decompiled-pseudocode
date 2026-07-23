/*
 * XREFs of PnpQueuePendingSurpriseRemoval @ 0x14048545C
 * Callers:
 *     PiEventRemovalPostSurpriseRemove @ 0x140483B1C (PiEventRemovalPostSurpriseRemove.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1403F3058 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F3088 (PnpReleaseDependencyRelationsLock.c)
 *     IopEnumerateRelations @ 0x140485C7C (IopEnumerateRelations.c)
 *     IopAllocateRelationList @ 0x140485D8C (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x140485DE0 (IopFreeRelationList.c)
 *     PnpAllocateCriticalMemory @ 0x140485EEC (PnpAllocateCriticalMemory.c)
 *     IopIsDescendantNode @ 0x140485F38 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x14064B9B4 (IopCheckIfMergeRequired.c)
 *     IopMergeRelationLists @ 0x14064BAAC (IopMergeRelationLists.c)
 */

__int64 __fastcall PnpQueuePendingSurpriseRemoval(PVOID a1, void **a2, int a3, int a4)
{
  PVOID v4; // rbp
  __int64 CriticalMemory; // rbx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v10; // rsi
  PVOID *v11; // r14
  __int64 *v12; // rax
  char v13; // r9
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID *v20; // rdi
  __int64 v21; // r8
  __int64 RelationList; // rax
  PVOID *v23; // rcx
  PVOID **v24; // rax
  __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+78h] [rbp+10h] BYREF
  int v27; // [rsp+7Ch] [rbp+14h]

  v4 = *a2;
  CriticalMemory = 0LL;
  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v10 = v4;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopSurpriseRemoveListLock, 1u);
  PnpAcquireDependencyRelationsLock(1);
  v11 = (PVOID *)IopPendingSurpriseRemovals;
  while ( v11 != &IopPendingSurpriseRemovals )
  {
    v20 = v11;
    v11 = (PVOID *)*v11;
    if ( v20[7] == a1 )
    {
      v10 = v20[8];
      CriticalMemory = (__int64)v20;
      break;
    }
    if ( (unsigned __int8)IopCheckIfMergeRequired(v20[8], v10) )
    {
      if ( v10 == v4 )
      {
        CriticalMemory = (__int64)v20;
        RelationList = IopAllocateRelationList(3LL);
        v10 = (PVOID)RelationList;
        if ( !RelationList )
        {
          v10 = v4;
          break;
        }
        IopMergeRelationLists(RelationList, v4, 0LL);
      }
      LOBYTE(v21) = 1;
      IopMergeRelationLists(v10, v20[8], v21);
      IopFreeRelationList(v20[8]);
      if ( (PVOID *)CriticalMemory == v20 )
      {
        *(_QWORD *)(CriticalMemory + 64) = 0LL;
      }
      else
      {
        v23 = (PVOID *)*v20;
        v24 = (PVOID **)v20[1];
        if ( *((PVOID **)*v20 + 1) != v20 || *v24 != v20 )
          __fastfail(3u);
        *v24 = v23;
        v23[1] = v24;
        ExFreePoolWithTag(v20, 0);
      }
    }
  }
  PnpReleaseDependencyRelationsLock();
  if ( v4 == v10 )
  {
    CriticalMemory = PnpAllocateCriticalMemory(3LL, 512LL, 112LL, 1416654416LL);
    v12 = (__int64 *)qword_14031F978;
    if ( *(PVOID **)qword_14031F978 != &IopPendingSurpriseRemovals )
      __fastfail(3u);
    *(_QWORD *)CriticalMemory = &IopPendingSurpriseRemovals;
    *(_QWORD *)(CriticalMemory + 8) = v12;
    *v12 = CriticalMemory;
    qword_14031F978 = CriticalMemory;
  }
  else
  {
    IopFreeRelationList(v4);
  }
  v26 = 0;
  v27 = 0;
  while ( (unsigned __int8)IopEnumerateRelations((_DWORD)v10, (unsigned int)&v26, (unsigned int)&v25, 0, 0LL) )
  {
    if ( v25 )
      v14 = *(_QWORD *)(*(_QWORD *)(v25 + 312) + 40LL);
    else
      v14 = 0LL;
    if ( (*(_BYTE *)(v14 + 648) & 1) != 0 )
    {
      if ( (unsigned __int8)IopIsDescendantNode(v10) )
      {
        *(_QWORD *)(v15 + 648) &= ~1uLL;
        --*(_DWORD *)(*(_QWORD *)(v15 + 648) + 656LL);
      }
    }
  }
  *(_QWORD *)(CriticalMemory + 56) = a1;
  *(_DWORD *)(CriticalMemory + 84) = a3;
  *(_BYTE *)(CriticalMemory + 88) = v13;
  *(_QWORD *)(CriticalMemory + 64) = v10;
  *(_DWORD *)(CriticalMemory + 108) = a4;
  *(_BYTE *)(CriticalMemory + 104) = v13;
  ExReleaseResourceLite(&IopSurpriseRemoveListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
}
