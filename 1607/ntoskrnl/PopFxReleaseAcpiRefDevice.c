/*
 * XREFs of PopFxReleaseAcpiRefDevice @ 0x140203878
 * Callers:
 *     PoFxAbandonDevice @ 0x1404C61AC (PoFxAbandonDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140566D28 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxReleaseAcpiRefDevice(__int64 a1, void *a2)
{
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 240), a2, 0x20u);
}
