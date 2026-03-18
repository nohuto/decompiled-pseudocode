/*
 * XREFs of VfTargetDriversAdd @ 0x140002384
 * Callers:
 *     VfDriverLoadImage @ 0x1406B20A4 (VfDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1406C7770 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x140002484 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VfAvlReserveNode @ 0x1400025E4 (VfAvlReserveNode.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     VfThunkAddTargetNotify @ 0x1406B2128 (VfThunkAddTargetNotify.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1406C4324 (ViTargetDriversAllocateVerifiedData.c)
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
      VfAvlInitializeLockContext(v10, 0LL);
      VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, v10, v8);
      if ( VerifiedData )
        ++dword_1402DB780;
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
