/*
 * XREFs of VerifierExInitializeResourceLite @ 0x14074C228
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
 *     VfAvlInsertReservedTreeNode @ 0x140153FC4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x140154068 (VfAvlReserveNode.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

int __fastcall VerifierExInitializeResourceLite(char *a1)
{
  int result; // eax
  unsigned int v3; // edi
  int v4; // esi
  unsigned __int64 *v5; // r15
  _SLIST_ENTRY *v6; // r14
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  VfUtilSynchronizationObjectSanityChecks(a1, 104LL);
  result = pXdvExInitializeResourceLite((PERESOURCE)a1);
  v3 = 0;
  v4 = result;
  if ( result >= 0 )
  {
    if ( (MmVerifierData & 0x800) != 0 )
    {
      if ( !ViResourceInitialized )
        return v4;
      v5 = VfAvlReserveNode(&ViResourceAvl, (__int64)a1, 0LL);
      if ( v5 )
      {
        v6 = 0LL;
        VfAvlInitializeLockContext((__int64)v7, 0);
        if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v7, (unsigned __int64)a1, 0LL) )
        {
          if ( !ViResourcesAlreadyLoadedDrivers )
            VerifierBugCheckIfAppropriate(0xC4u, 0xD0uLL, (ULONG_PTR)a1, 0LL, 0LL);
          _InterlockedAdd(&ViResourceStaleNodes, 1u);
          v6 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)v7, (__int64)a1, 0LL);
        }
        VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)v7, v5);
        VfAvlCleanupLockContext((__int64)v7);
        if ( v6 )
        {
          if ( dword_1407631C4 == 1 )
          {
            ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v6);
          }
          else
          {
            LOBYTE(v3) = KeGetCurrentIrql() != 2;
            VfPoolDelayFreeIfPossible(v6, v3);
          }
        }
        return v4;
      }
    }
    else if ( ViResourceNotTracked )
    {
      return v4;
    }
    _InterlockedExchange(&ViResourceNotTracked, 1);
    return v4;
  }
  return result;
}
