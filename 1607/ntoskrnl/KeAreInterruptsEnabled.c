/*
 * XREFs of KeAreInterruptsEnabled @ 0x1400516C0
 * Callers:
 *     KeAreAllApcsDisabled @ 0x14004F260 (KeAreAllApcsDisabled.c)
 *     MmCanThreadFault @ 0x140051620 (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x1400516A4 (KeGetEffectiveIrql.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     MiRetryNonPagedAllocation @ 0x1400E7E98 (MiRetryNonPagedAllocation.c)
 *     NtAssociateWaitCompletionPacket @ 0x1400ED7E0 (NtAssociateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401EA19C (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 *     VfFastIoCheckState @ 0x1407058C8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140705978 (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x14070B8E0 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x14070BAA8 (VfBeforeCallDriver.c)
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
