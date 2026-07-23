/*
 * XREFs of VfCheckForResource @ 0x1406C97D4
 * Callers:
 *     ExpCheckForResource @ 0x140213F80 (ExpCheckForResource.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x140002108 (VfAvlFreeNodeNoLock.c)
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140002274 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VfPoolIsInternalFree @ 0x14020BE28 (VfPoolIsInternalFree.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForResource(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR *v5; // rax
  ULONG_PTR *v6; // rbx
  _SLIST_ENTRY *v7; // rbx
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v9; // [rsp+60h] [rbp+18h] BYREF

  if ( !ViResourceInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() && qword_1406E01B0 )
  {
    v9 = 0LL;
    VfAvlInitializeLockContext((__int64)v8, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v8, a1, a2);
    v6 = v5;
    if ( v5 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers )
        VerifierBugCheckIfAppropriate(0xC4u, 0xD2uLL, *v5, a1, a2);
      v9 = *v6;
    }
    VfAvlCleanupLockContext((__int64)v8);
    if ( v9 )
    {
      _InterlockedIncrement(&ViResourceStaleNodes);
      VfAvlInitializeLockContext((__int64)v8, 0);
      v7 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViResourceAvl, (__int64)v8, (__int64)&v9, 0LL);
      VfAvlCleanupLockContext((__int64)v8);
      if ( v7 )
        VfAvlFreeNodeNoLock((__int64)&ViResourceAvl, v7);
      return 0LL;
    }
  }
  return 1LL;
}
