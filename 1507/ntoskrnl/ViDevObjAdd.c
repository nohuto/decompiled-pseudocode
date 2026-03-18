/*
 * XREFs of ViDevObjAdd @ 0x1407431E0
 * Callers:
 *     VerifierIoCreateDevice @ 0x140742DC0 (VerifierIoCreateDevice.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140153FC4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x140154068 (VfAvlReserveNode.c)
 */

char __fastcall ViDevObjAdd(__int64 a1)
{
  char v1; // bl
  _QWORD *v2; // rax
  unsigned __int64 *v3; // r8
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
