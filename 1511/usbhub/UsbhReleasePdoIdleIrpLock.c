/*
 * XREFs of UsbhReleasePdoIdleIrpLock @ 0x1C00277D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhReleasePdoIdleIrpLock(PIO_CSQ Csq, KIRQL Irql)
{
  KeReleaseSpinLock((PKSPIN_LOCK)&Csq[1].Type, Irql);
}
