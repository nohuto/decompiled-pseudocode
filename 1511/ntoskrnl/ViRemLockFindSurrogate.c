/*
 * XREFs of ViRemLockFindSurrogate @ 0x1406C1EB8
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x1406C1ADC (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1406C1B60 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x1406C1C9C (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x1406C1CF8 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 */

PVOID ViRemLockFindSurrogate()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  PVOID v2; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  VfAvlInitializeLockContext((__int64)v4, 1);
  v2 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v4, v1, (unsigned int)(v0 + 31));
  VfAvlCleanupLockContext((__int64)v4);
  return v2;
}
