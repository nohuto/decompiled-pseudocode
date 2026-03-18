/*
 * XREFs of ViTargetIncrementCounter @ 0x1406C44AC
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool @ 0x1406B6244 (VerifierExAllocatePool.c)
 *     VfCheckImageCompliance @ 0x1406B7EC4 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1406B80EC (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1406B818C (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1406B822C (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x1406C08F4 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViFaultsInjectionNotification @ 0x1406C5438 (ViFaultsInjectionNotification.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1406C5AF8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x1406C5B8C (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x1406C5C58 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x1406C5D14 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x1406C5DAC (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x1406C6148 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x1406C6684 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x1406C66E8 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1406C6758 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x1406C6970 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x1406C69E0 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x1406C6A5C (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1406C6D74 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1406C71AC (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VfDriverIsKernelImageAddress @ 0x1406B8CAC (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x1406C4754 (ViTargetUpdateTreeAllowed.c)
 */

unsigned __int64 __fastcall ViTargetIncrementCounter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r8
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)a2;
  result = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( (_DWORD)result )
  {
    result = VfDriverIsKernelImageAddress(v4);
    if ( !(_DWORD)result )
    {
      VfAvlInitializeLockContext((__int64)v9, 1);
      v7 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v9, v6, v5);
      if ( v7 )
      {
        v8 = v7[6];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      return VfAvlCleanupLockContext((__int64)v9);
    }
  }
  return result;
}
