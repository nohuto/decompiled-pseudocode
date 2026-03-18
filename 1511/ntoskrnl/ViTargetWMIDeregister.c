/*
 * XREFs of ViTargetWMIDeregister @ 0x1406C4770
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x1406D0E58 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VfAvlEnumerateNodes @ 0x1406C7F3C (VfAvlEnumerateNodes.c)
 */

unsigned __int64 __fastcall ViTargetWMIDeregister(__int64 a1)
{
  int v2; // edx
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  VfAvlInitializeLockContext((__int64)v8, 0);
  v4 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v8, v3, (unsigned int)(v2 + 1));
  if ( v4 && (v6 = v4[6]) != 0 && *(_QWORD *)(v6 + 8) == a1 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
  }
  else
  {
    ++ViTargetWMIRegistrationMismatches;
    VfAvlEnumerateNodes(v5, v8, ViTargetWMIDeregisterCallback, a1);
  }
  return VfAvlCleanupLockContext((__int64)v8);
}
