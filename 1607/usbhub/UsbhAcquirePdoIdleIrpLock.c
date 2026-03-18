/*
 * XREFs of UsbhAcquirePdoIdleIrpLock @ 0x1C0027E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhAcquirePdoIdleIrpLock(PIO_CSQ Csq, PKIRQL Irql)
{
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Csq[1].Type);
}
