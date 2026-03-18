/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x14070FE80
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14008446C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400845E8 (VfAvlInitializeLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1407103E0 (ViTargetDriversAllocateVerifiedData.c)
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
          v5[7] = VerifiedData;
          v2 = 1;
          ++dword_140300AC8;
        }
        VfAvlCleanupLockContext((__int64)v7);
        if ( !v2 )
          ExFreePoolWithTag(VerifiedData, 0x44566656u);
      }
    }
  }
  return v2;
}
