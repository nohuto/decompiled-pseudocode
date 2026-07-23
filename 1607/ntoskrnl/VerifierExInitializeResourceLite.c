/*
 * XREFs of VerifierExInitializeResourceLite @ 0x140717FE8
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     VfAvlReserveNode @ 0x140082438 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400825FC (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012F474 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14012F4C4 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierExInitializeResourceLite(void *a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  char *v4; // r14
  _SLIST_ENTRY *v5; // rbp
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  VfUtilSynchronizationObjectSanityChecks(a1, 104LL);
  result = pXdvExInitializeResourceLite(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( (MmVerifierData & 0x800) != 0 )
    {
      if ( !ViResourceInitialized )
        return v3;
      v4 = VfAvlReserveNode(&ViResourceAvl, (__int64)a1, 0LL);
      if ( v4 )
      {
        v5 = 0LL;
        VfAvlInitializeLockContext((__int64)v6, 0);
        if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v6, (unsigned __int64)a1, 0LL) )
        {
          if ( !ViResourcesAlreadyLoadedDrivers )
            VerifierBugCheckIfAppropriate(0xC4u, 0xD0uLL, (ULONG_PTR)a1, 0LL, 0LL);
          _InterlockedAdd(&ViResourceStaleNodes, 1u);
          v5 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)v6, (unsigned __int64)a1, 0LL);
        }
        VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)v6, v4);
        VfAvlCleanupLockContext((__int64)v6);
        if ( v5 )
        {
          if ( dword_14072C200 == 1 )
            ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v5);
          else
            VfUtilFreePoolCheckIRQL(v5);
        }
        return v3;
      }
    }
    else if ( ViResourceNotTracked )
    {
      return v3;
    }
    _InterlockedExchange(&ViResourceNotTracked, 1);
    return v3;
  }
  return result;
}
