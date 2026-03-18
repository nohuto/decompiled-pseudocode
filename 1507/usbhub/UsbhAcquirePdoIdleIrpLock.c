/*
 * XREFs of UsbhAcquirePdoIdleIrpLock @ 0x1C00287F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhAcquirePdoIdleIrpLock(PIO_CSQ Csq, PKIRQL Irql)
{
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Csq[1].Type);
}
