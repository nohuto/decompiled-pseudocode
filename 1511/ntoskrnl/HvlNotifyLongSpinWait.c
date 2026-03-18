/*
 * XREFs of HvlNotifyLongSpinWait @ 0x1401AE950
 * Callers:
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockOwnedProtoPage @ 0x1400111C0 (MiLockOwnedProtoPage.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiGetVadWakeList @ 0x14006C180 (MiGetVadWakeList.c)
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 *     KiIpiSendRequestEx @ 0x14007C440 (KiIpiSendRequestEx.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140082E30 (KiSearchForNewThreadOnProcessor.c)
 *     KiChooseTargetProcessor @ 0x140088720 (KiChooseTargetProcessor.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpGetPoolTagInfoTarget @ 0x1400D8090 (ExpGetPoolTagInfoTarget.c)
 *     ExTryConvertSharedSpinLockExclusive @ 0x1400D9E90 (ExTryConvertSharedSpinLockExclusive.c)
 *     KiIdleLoop @ 0x140157220 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x14015AA10 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x14015ABD0 (SwapContext.c)
 *     PopHandleNextState @ 0x1403A0B10 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlNotifyLongSpinWait(unsigned int a1)
{
  return HvcallCodeVa(65544LL, a1, 0LL);
}
