/*
 * XREFs of VerifierExInitializeResourceLite @ 0x1406C9608
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x140002108 (VfAvlFreeNodeNoLock.c)
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140002274 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140002484 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VfAvlReserveNode @ 0x1400025E4 (VfAvlReserveNode.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

int __fastcall VerifierExInitializeResourceLite(struct _ERESOURCE *a1)
{
  int result; // eax
  int v3; // ebx
  _QWORD *v4; // rbp
  _SLIST_ENTRY *v5; // rsi
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  VfUtilSynchronizationObjectSanityChecks(a1, 104LL);
  result = pXdvExInitializeResourceLite(a1);
  v3 = result;
  if ( result >= 0 )
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
          v5 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)v6, (__int64)a1, 0LL);
        }
        VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)v6, v4);
        VfAvlCleanupLockContext((__int64)v6);
        if ( v5 )
          VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v5);
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
