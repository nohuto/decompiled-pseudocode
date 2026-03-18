/*
 * XREFs of PspQueueApcSpecialApc @ 0x1404B8A08
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     IoRegisterPriorityCallback @ 0x140136E4C (IoRegisterPriorityCallback.c)
 *     IoUnregisterPriorityCallback @ 0x1401BB52C (IoUnregisterPriorityCallback.c)
 *     KeDeregisterBoundCallback @ 0x1401C3BD4 (KeDeregisterBoundCallback.c)
 *     KeRegisterBoundCallback @ 0x1401C3ED8 (KeRegisterBoundCallback.c)
 *     SmPerformStoreSwapOperation @ 0x14020A930 (SmPerformStoreSwapOperation.c)
 * Callees:
 *     <none>
 */

void __fastcall PspQueueApcSpecialApc(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
