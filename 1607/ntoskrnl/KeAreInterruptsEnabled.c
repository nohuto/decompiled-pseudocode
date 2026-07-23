/*
 * XREFs of KeAreInterruptsEnabled @ 0x140051240
 * Callers:
 *     KeAreAllApcsDisabled @ 0x14004EDE0 (KeAreAllApcsDisabled.c)
 *     MmCanThreadFault @ 0x1400511A0 (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     MiRetryNonPagedAllocation @ 0x1400E5D38 (MiRetryNonPagedAllocation.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400EB670 (NtAssociateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x1400F5A50 (NtSetInformationWorkerFactory.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401E9FC8 (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x14070B910 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14070BAD8 (VfBeforeCallDriver.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1407130E8 (ViKeRaiseIrqlSanityChecks.c)
 *     ViDeadlockCanProceed @ 0x140714D14 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

__int64 KeAreInterruptsEnabled()
{
  unsigned int v1; // [rsp+0h] [rbp-8h]

  return (v1 >> 9) & 1;
}
