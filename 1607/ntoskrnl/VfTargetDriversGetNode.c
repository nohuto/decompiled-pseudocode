/*
 * XREFs of VfTargetDriversGetNode @ 0x1402236BC
 * Callers:
 *     ViThunkApplyThunksCurrentSession @ 0x14070F7B4 (ViThunkApplyThunksCurrentSession.c)
 *     VfTargetDriversGetVerifierData @ 0x14070FF4C (VfTargetDriversGetVerifierData.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
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
