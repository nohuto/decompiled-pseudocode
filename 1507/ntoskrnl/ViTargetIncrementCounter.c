/*
 * XREFs of ViTargetIncrementCounter @ 0x140745D60
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool @ 0x140736534 (VerifierExAllocatePool.c)
 *     VfCheckImageCompliance @ 0x1407383E8 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140738610 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140738750 (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x1407420E8 (VerifierKeAcquireQueuedSpinLock.c)
 *     ViFaultsInjectionNotification @ 0x140746EE8 (ViFaultsInjectionNotification.c)
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x1407476F4 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1407477EC (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x1407478DC (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1407479AC (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot @ 0x140747A78 (VerifierKeAcquireInStackQueuedSpinLockForDpcNoReboot.c)
 *     VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x140747B24 (VerifierKeAcquireInStackQueuedSpinLockNoReboot.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140747BFC (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x140747CF4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140747DC8 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140747E2C (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockAtDpcLevelNoReboot @ 0x140747F00 (VerifierKeAcquireSpinLockAtDpcLevelNoReboot.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x1407484F8 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140748DD4 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140748E38 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140748EAC (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140748F20 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x140748FFC (VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot.c)
 *     VerifierKfRaiseIrql @ 0x14074971C (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140749790 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x14074982C (VerifierPortKeAcquireSpinLockNoXdv.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ViTargetUpdateTreeAllowed @ 0x140746018 (ViTargetUpdateTreeAllowed.c)
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
    result = ViDriverKernelBase;
    if ( !ViDriverKernelBase || v4 < ViDriverKernelBase || v4 >= ViDriverKernelEnd )
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
