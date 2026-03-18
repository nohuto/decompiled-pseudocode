/*
 * XREFs of HvlNotifyLongSpinWait @ 0x1401BAE68
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     MiLockOwnedProtoPage @ 0x140022970 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiGetVadWakeList @ 0x140029A00 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002EC30 (ExpAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EF00 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiLockProtoPoolPage @ 0x14004ED80 (MiLockProtoPoolPage.c)
 *     KiChooseTargetProcessor @ 0x140057550 (KiChooseTargetProcessor.c)
 *     KiSwapThread @ 0x14005B200 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14005BD20 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExpWaitForResource @ 0x14005CE30 (ExpWaitForResource.c)
 *     MiZeroSinglePage @ 0x140066B90 (MiZeroSinglePage.c)
 *     ExpReleaseResourceForThreadLite @ 0x140068950 (ExpReleaseResourceForThreadLite.c)
 *     KeRemoveQueueEx @ 0x14006A3B0 (KeRemoveQueueEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089C20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140090910 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpGetPoolTagInfoTarget @ 0x140095A20 (ExpGetPoolTagInfoTarget.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400D8260 (KxWaitForSpinLockAndAcquire.c)
 *     MiFlushTbList @ 0x1400E0490 (MiFlushTbList.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     KeRemovePriQueue @ 0x1400E79D0 (KeRemovePriQueue.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForLockChainValid @ 0x1400F9530 (KxWaitForLockChainValid.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     KiIdleLoop @ 0x140161A70 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x140165E40 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x140166000 (SwapContext.c)
 *     PopHandleNextState @ 0x1403CC8F0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlNotifyLongSpinWait(unsigned int a1)
{
  return HvcallCodeVa(65544LL, a1, 0LL);
}
