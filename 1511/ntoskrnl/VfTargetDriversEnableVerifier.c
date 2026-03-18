/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x1406C3DE8
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1406C7770 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1406C4324 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversEnableVerifier(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *VerifiedData; // rdi
  _QWORD *v5; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  if ( !VfSafeMode )
  {
    if ( ViTargetInitialized )
    {
      VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a2);
      if ( VerifiedData )
      {
        VfAvlInitializeLockContext((__int64)v7, 0);
        v5 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v7, a1, 1LL);
        if ( v5 )
        {
          v5[6] = VerifiedData;
          v2 = 1;
          ++dword_1402DB780;
        }
        VfAvlCleanupLockContext((__int64)v7);
        if ( !v2 )
          ExFreePoolWithTag(VerifiedData, 0x44566656u);
      }
    }
  }
  return v2;
}
