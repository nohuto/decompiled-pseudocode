/*
 * XREFs of ViKeRaiseIrqlSanityChecks @ 0x1407130E8
 * Callers:
 *     VerifierKeAcquireQueuedSpinLock @ 0x14070C95C (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140711BDC (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon @ 0x140711D64 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchCommon.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140711DFC (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x140712198 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x14071271C (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140712780 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1407127F0 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x140712A08 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140712A78 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140712AF4 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockRaiseToDpcCommon @ 0x140712E54 (ViKeAcquireSpinLockRaiseToDpcCommon.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1400516C0 (KeAreInterruptsEnabled.c)
 *     MmVerifierTrimMemory @ 0x1407018D8 (MmVerifierTrimMemory.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 *     VfKeIrqlLogRaise @ 0x140712D1C (VfKeIrqlLogRaise.c)
 */

__int64 __fastcall ViKeRaiseIrqlSanityChecks(unsigned __int8 a1, int a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v4; // rsi

  CurrentIrql = KeGetCurrentIrql();
  if ( (MmVerifierData & 2) != 0 )
  {
    if ( CurrentIrql > a1 && !a2 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
    if ( a1 > 0xFu )
      VerifierBugCheckIfAppropriate(0xC4u, 0x30uLL, CurrentIrql, a1, 0LL);
  }
  v4 = VfKeIrqlLogRaise();
  if ( (MmVerifierData & 2) != 0 && (unsigned __int8)KeAreInterruptsEnabled() && CurrentIrql < 2u && a1 >= 2u )
    MmVerifierTrimMemory();
  return v4;
}
