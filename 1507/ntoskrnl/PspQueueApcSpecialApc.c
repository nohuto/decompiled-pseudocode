/*
 * XREFs of PspQueueApcSpecialApc @ 0x1404F9234
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     IoRegisterPriorityCallback @ 0x1401658D0 (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1401F67FC (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401FFC50 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x140200014 (KeRegisterBoundCallback.c)
 *     SmPerformStoreSwapOperation @ 0x140259E80 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     <none>
 */

void __fastcall PspQueueApcSpecialApc(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
