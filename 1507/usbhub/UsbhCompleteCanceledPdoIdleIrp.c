/*
 * XREFs of UsbhCompleteCanceledPdoIdleIrp @ 0x1C0054F60
 * Callers:
 *     <none>
 * Callees:
 *     UsbhIdleIrp_Event @ 0x1C0055484 (UsbhIdleIrp_Event.c)
 */

void __fastcall UsbhCompleteCanceledPdoIdleIrp(PIO_CSQ Csq, PIRP Irp)
{
  UsbhIdleIrp_Event(Csq[-5].CsqReleaseLock, Csq[-10].CsqPeekNextIrp, (_DWORD)Irp, 6, 0);
}
