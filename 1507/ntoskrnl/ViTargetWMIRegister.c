/*
 * XREFs of ViTargetWMIRegister @ 0x1407460CC
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x140754A20 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
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
