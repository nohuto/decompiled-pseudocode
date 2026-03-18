/*
 * XREFs of VfTargetDriversAdd @ 0x140153EF4
 * Callers:
 *     VfDriverLoadImage @ 0x140732114 (VfDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x14074A174 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140153FC4 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x140154068 (VfAvlReserveNode.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     VfThunkAddTargetNotify @ 0x140732198 (VfThunkAddTargetNotify.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140745BD8 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  void *VerifiedData; // rdi
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  VerifiedData = 0LL;
  v4 = a2;
  v6 = 1;
  if ( VfSafeMode )
    return 0;
  if ( !ViTargetInitialized )
    return 0;
  if ( a3 && (VerifiedData = (void *)ViTargetDriversAllocateVerifiedData(a3)) == 0LL )
  {
    return 0;
  }
  else
  {
    v7 = VfAvlReserveNode(&ViTargetDriversAvl, a1, v4);
    v8 = v7;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 48) = VerifiedData;
      memset((void *)(v7 + 16), 0, 0x20uLL);
      VfThunkAddTargetNotify(v8);
      VfAvlInitializeLockContext((__int64)v10, 0);
      VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, v10, v8);
      if ( VerifiedData )
        ++dword_14032BAE0;
      VfAvlCleanupLockContext((__int64)v10);
    }
    else
    {
      _InterlockedExchange(&ViTargetAllocationFailures, 1);
      v6 = 0;
      if ( VerifiedData )
        ExFreePoolWithTag(VerifiedData, 0x44566656u);
    }
  }
  return v6;
}
