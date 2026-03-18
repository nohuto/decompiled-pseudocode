/*
 * XREFs of VfTargetDriversEnableVerifier @ 0x140745688
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x14074A174 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140745BD8 (ViTargetDriversAllocateVerifiedData.c)
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
          ++dword_14032BAE0;
        }
        VfAvlCleanupLockContext((__int64)v7);
        if ( !v2 )
          ExFreePoolWithTag(VerifiedData, 0x44566656u);
      }
    }
  }
  return v2;
}
