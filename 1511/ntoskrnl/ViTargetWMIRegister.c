/*
 * XREFs of ViTargetWMIRegister @ 0x1406C4808
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x1406D0E58 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 */

unsigned __int64 __fastcall ViTargetWMIRegister(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  VfAvlInitializeLockContext((__int64)v7, 1);
  v4 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v7, v2, v3);
  if ( v4 )
  {
    v5 = v4[6];
    if ( v5 )
      *(_QWORD *)(v5 + 8) = a1;
  }
  return VfAvlCleanupLockContext((__int64)v7);
}
