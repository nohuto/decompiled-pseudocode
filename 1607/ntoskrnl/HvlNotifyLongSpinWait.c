/*
 * XREFs of HvlNotifyLongSpinWait @ 0x1401BAD4C
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiLockOwnedProtoPage @ 0x1400224F0 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiGetVadWakeList @ 0x140029580 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002E7B0 (ExpAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     KiChooseTargetProcessor @ 0x1400570D0 (KiChooseTargetProcessor.c)
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14005B8A0 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     MiZeroSinglePage @ 0x140066710 (MiZeroSinglePage.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140090070 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpGetPoolTagInfoTarget @ 0x140095220 (ExpGetPoolTagInfoTarget.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400D6100 (KxWaitForSpinLockAndAcquire.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     KeRemovePriQueue @ 0x1400E5870 (KeRemovePriQueue.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     KiIdleLoop @ 0x140161FE0 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x1401663B0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x140166570 (SwapContext.c)
 *     PopHandleNextState @ 0x1403CC8F0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlNotifyLongSpinWait(unsigned int a1)
{
  return HvcallCodeVa(65544LL, a1, 0LL);
}
