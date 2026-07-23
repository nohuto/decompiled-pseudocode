/*
 * XREFs of VerifierIoInitializeRemoveLockEx @ 0x14070DC0C
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlReserveNode @ 0x140082438 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400825FC (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEDC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x14070DF78 (ViRemLockFindSurrogate.c)
 */

unsigned __int64 __fastcall VerifierIoInitializeRemoveLockEx(
        ULONG_PTR a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 Surrogate; // rax
  int v10; // r14d
  char *v11; // rax
  char *v12; // rbp
  void *v13; // rcx
  unsigned __int64 result; // rax
  _BYTE v15[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( !ViRemLockInitialized )
    return pXdvIoInitializeRemoveLockEx(a1, a2, a3, a4, a5);
  Surrogate = ViRemLockFindSurrogate();
  if ( Surrogate )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0xD7uLL, Surrogate + 16, a1, 0LL);
    _InterlockedAdd(&ViRemLockReusedCount, 1u);
    ViRemLockDeleteFirstTreeNode(a1, a5);
  }
  v10 = 0;
  if ( (MmVerifierData & 0x10) == 0 )
    return pXdvIoInitializeRemoveLockEx(a1, a2, a3, a4, a5);
  v11 = VfAvlReserveNode(&ViRemLockAvl, a1, a5);
  v12 = v11;
  if ( !v11 )
  {
    _InterlockedExchange(&ViRemLockAllocationFailures, 1);
    return pXdvIoInitializeRemoveLockEx(a1, a2, a3, a4, a5);
  }
  v13 = v11 + 16;
  if ( a5 == 120 )
  {
    memset(v13, 0, 0x78uLL);
  }
  else
  {
    pXdvIoInitializeRemoveLockEx(v13, a2, a3, a4, 120);
    v10 = 1;
  }
  VfAvlInitializeLockContext((__int64)v15, 0);
  VfAvlInsertReservedTreeNode((__int64)&ViRemLockAvl, (__int64)v15, v12);
  result = VfAvlCleanupLockContext((__int64)v15);
  if ( !v10 )
    return pXdvIoInitializeRemoveLockEx(a1, a2, a3, a4, a5);
  return result;
}
