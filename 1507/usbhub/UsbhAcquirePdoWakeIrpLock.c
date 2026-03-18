/*
 * XREFs of UsbhAcquirePdoWakeIrpLock @ 0x1C0027C70
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 */

void __fastcall UsbhAcquirePdoWakeIrpLock(PIO_CSQ Csq, PKIRQL Irql)
{
  __int64 v3; // r10

  Log((__int64)Csq[-18].ReservePointer, 16, 2004306987, 0LL, 0LL);
  *Irql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 64));
}
