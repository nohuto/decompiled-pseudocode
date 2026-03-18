/*
 * XREFs of VfDevObjMarkDeviceRemoved @ 0x140742EEC
 * Callers:
 *     IovpCallDriver1 @ 0x14073F69C (IovpCallDriver1.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 */

unsigned __int64 VfDevObjMarkDeviceRemoved()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // r8
  volatile signed __int32 *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfAvlInitializeLockContext((__int64)v3, 1);
    v2 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v3, v1, 0LL);
    if ( v2 )
      _InterlockedOr(v2 + 4, 2u);
    return VfAvlCleanupLockContext((__int64)v3);
  }
  return result;
}
