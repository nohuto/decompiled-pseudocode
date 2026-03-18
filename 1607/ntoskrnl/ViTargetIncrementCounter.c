/*
 * XREFs of ViTargetIncrementCounter @ 0x140710564
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140701D78 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool @ 0x1407020A4 (VerifierExAllocatePool.c)
 *     VfCheckImageCompliance @ 0x140703D18 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140704170 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140704210 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1407042B0 (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x14070C95C (VerifierKeAcquireQueuedSpinLock.c)
 *     ViFaultsInjectionNotification @ 0x1407114AC (ViFaultsInjectionNotification.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x140711B48 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140711BDC (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcCommon @ 0x140711CA8 (VerifierKeAcquireInStackQueuedSpinLockForDpcCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140711D64 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140711DFC (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x140712198 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x14071271C (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140712780 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1407127F0 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x140712A08 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140712A78 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140712AF4 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x140712DC4 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1407131F4 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14008446C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400845E8 (VfAvlInitializeLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140704D38 (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x1407107E8 (ViTargetUpdateTreeAllowed.c)
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
        v8 = v7[7];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      return VfAvlCleanupLockContext((__int64)v9);
    }
  }
  return result;
}
