/*
 * XREFs of ViDevObjAdd @ 0x1406C19B4
 * Callers:
 *     VerifierIoCreateDevice @ 0x1406C1594 (VerifierIoCreateDevice.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140002484 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VfAvlReserveNode @ 0x1400025E4 (VfAvlReserveNode.c)
 */

char __fastcall ViDevObjAdd(__int64 a1)
{
  char v1; // bl
  _QWORD *v2; // rax
  _QWORD *v3; // r8
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 1;
  if ( ViDevObjInitialized )
  {
    v2 = VfAvlReserveNode(ViDevObjAvl, a1, 336LL);
    if ( v2 )
    {
      *((_DWORD *)v2 + 4) = 0;
      VfAvlInitializeLockContext((__int64)v5, 0);
      VfAvlInsertReservedTreeNode((__int64)ViDevObjAvl, (__int64)v5, v3);
      VfAvlCleanupLockContext((__int64)v5);
      return v1;
    }
    _InterlockedExchange(&ViDevObjAllocationFailures, 1);
  }
  return 0;
}
