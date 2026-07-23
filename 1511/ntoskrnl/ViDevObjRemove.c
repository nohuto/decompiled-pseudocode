/*
 * XREFs of ViDevObjRemove @ 0x1406C1A28
 * Callers:
 *     VfIoDeleteDevice @ 0x1406C17A8 (VfIoDeleteDevice.c)
 * Callees:
 *     VfAvlFreeNodeNoLock @ 0x140002108 (VfAvlFreeNodeNoLock.c)
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140002274 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViDevObjRemove(unsigned __int64 a1)
{
  _SLIST_ENTRY *v2; // rbx
  _DWORD *v3; // rax
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( ViDevObjInitialized )
  {
    v2 = 0LL;
    VfAvlInitializeLockContext((__int64)v4, 0);
    v3 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v4, a1, 0LL);
    if ( v3 )
    {
      if ( (v3[4] & 1) != 0 && (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xDBuLL, a1, 0LL, 0LL);
      v2 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(ViDevObjAvl, (__int64)v4, a1, 0LL);
    }
    VfAvlCleanupLockContext((__int64)v4);
    if ( v2 )
      VfAvlFreeNodeNoLock((__int64)ViDevObjAvl, v2);
  }
}
