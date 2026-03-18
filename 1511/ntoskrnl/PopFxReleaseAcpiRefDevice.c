/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x1401EAEA4
 * Callers:
 *     PoFxAbandonDevice @ 0x1404A1158 (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14051BB30 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxReleaseAcpiRefDevice(__int64 a1, void *a2)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), a2, 0x20u);
}
