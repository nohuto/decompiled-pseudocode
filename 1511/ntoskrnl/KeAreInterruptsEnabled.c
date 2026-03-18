/*
 * XREFs of KeAreInterruptsEnabled @ 0x1400840D0
 * Callers:
 *     MiRetryNonPagedAllocation @ 0x140019AF0 (MiRetryNonPagedAllocation.c)
 *     MmCanThreadFault @ 0x140028250 (MmCanThreadFault.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     KeAreAllApcsDisabled @ 0x140098520 (KeAreAllApcsDisabled.c)
 *     KeGetEffectiveIrql @ 0x14009FE70 (KeGetEffectiveIrql.c)
 *     MiDeleteValidSystemPte @ 0x1400A1760 (MiDeleteValidSystemPte.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401D83E0 (MiTrimAllSystemPagableMemory.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     VfFastIoCheckState @ 0x1406B9854 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1406B9904 (VfFastIoSnapState.c)
 *     VfAfterCallDriver @ 0x1406BF888 (VfAfterCallDriver.c)
 *     VfBeforeCallDriver @ 0x1406BFA50 (VfBeforeCallDriver.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1406C70A0 (ViKeRaiseIrqlSanityChecks.c)
 *     ViDeadlockCanProceed @ 0x1406CCF34 (ViDeadlockCanProceed.c)
 * Callees:
 *     <none>
 */

__int64 KeAreInterruptsEnabled()
{
  unsigned int v1; // [rsp+0h] [rbp-8h]

  return (v1 >> 9) & 1;
}
