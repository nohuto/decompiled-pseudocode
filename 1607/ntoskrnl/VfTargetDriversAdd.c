/*
 * XREFs of VfTargetDriversAdd @ 0x1400824FC
 * Callers:
 *     VfDriverLoadImage @ 0x1406FDD58 (VfDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x140716114 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlReserveNode @ 0x140082438 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400825FC (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VfThunkAddTargetNotify @ 0x1406FDDDC (VfThunkAddTargetNotify.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140710410 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversAdd(__int64 a1, unsigned int a2, __int64 a3)
{
  void *VerifiedData; // rdi
  __int64 v4; // rsi
  unsigned int v6; // ebx
  char *v7; // rax
  char *v8; // rsi
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
    v7 = VfAvlReserveNode((__int64 *)&ViTargetDriversAvl, a1, v4);
    v8 = v7;
    if ( v7 )
    {
      *((_QWORD *)v7 + 7) = VerifiedData;
      memset(v7 + 24, 0, 0x20uLL);
      VfThunkAddTargetNotify(v8);
      VfAvlInitializeLockContext(v10, 0LL);
      VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, v10, v8);
      if ( VerifiedData )
        ++dword_140300AA8;
      VfAvlCleanupLockContext(v10);
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
