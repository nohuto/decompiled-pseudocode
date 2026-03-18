/*
 * XREFs of VfTargetDriversGetNode @ 0x14020BDD4
 * Callers:
 *     ViThunkApplyThunksCurrentSession @ 0x1406C36F4 (ViThunkApplyThunksCurrentSession.c)
 *     VfTargetDriversGetVerifierData @ 0x1406C3E84 (VfTargetDriversGetVerifierData.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 */

PVOID __fastcall VfTargetDriversGetNode(unsigned __int64 a1)
{
  PVOID v1; // rbx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( !VfSafeMode && ViTargetInitialized )
  {
    v3[0] = 0LL;
    v3[1] = 0LL;
    v1 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v3, a1, 1LL);
    VfAvlCleanupLockContext((__int64)v3);
  }
  return v1;
}
