/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140101D50
 * Callers:
 *     PpmPerfSnapUtility @ 0x1400A6F10 (PpmPerfSnapUtility.c)
 *     KdpSetCommonState @ 0x1401FDFFC (KdpSetCommonState.c)
 *     KdpSetContextEx @ 0x1401FE0F4 (KdpSetContextEx.c)
 *     KdPollBreakIn @ 0x1401FE5E0 (KdPollBreakIn.c)
 *     KiInterruptDispatchCommon @ 0x1402077A8 (KiInterruptDispatchCommon.c)
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14026391C (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     KiCopyCountersWorker @ 0x140699400 (KiCopyCountersWorker.c)
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 *     KdpGetContext @ 0x14072B158 (KdpGetContext.c)
 *     KdpSetContext @ 0x14072C71C (KdpSetContext.c)
 *     KdpPrintString @ 0x14072DEF8 (KdpPrintString.c)
 *     KdpPromptString @ 0x14072DFD8 (KdpPromptString.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x1407420E8 (VerifierKeAcquireQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x1407476F4 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockNoReboot @ 0x140747B24 (VerifierKeAcquireInStackQueuedSpinLockNoReboot.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140747BFC (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x140747CF4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140747DC8 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x140747FB0 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeAcquireSpinLockRaiseToDpcNoReboot @ 0x140748058 (VerifierKeAcquireSpinLockRaiseToDpcNoReboot.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x1407484F8 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140748E38 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140748EAC (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKfRaiseIrql @ 0x14074971C (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140749790 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x14074982C (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x140749B94 (VfKeIrqlTransitionReserveLogEntry.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = CurrentPrcb->Group;
    *(_WORD *)&ProcNumber->Number = CurrentPrcb->GroupIndex;
  }
  return CurrentPrcb->Number;
}
