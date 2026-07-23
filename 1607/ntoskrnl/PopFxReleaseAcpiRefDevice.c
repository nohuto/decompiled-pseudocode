/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x1402036A4
 * Callers:
 *     PoFxAbandonDevice @ 0x1404849B4 (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140567268 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxReleaseAcpiRefDevice(__int64 a1, void *a2)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), a2, 0x20u);
}
