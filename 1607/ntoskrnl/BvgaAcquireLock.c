/*
 * XREFs of BvgaAcquireLock @ 0x1401C4024
 * Callers:
 *     BvgaBitBlt @ 0x1401C4068 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401C40C8 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401C4128 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401C41F0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401C42F4 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401C43A8 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 */

void BvgaAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( BootDriverLock )
      _mm_pause();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  KxAcquireSpinLock(&BootDriverLock);
  BvgaOldIrql = CurrentIrql;
}
