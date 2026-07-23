/*
 * XREFs of BvgaAcquireLock @ 0x1401C3F08
 * Callers:
 *     BvgaBitBlt @ 0x1401C3F4C (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401C3FAC (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401C400C (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401C40D4 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401C41D8 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401C428C (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
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
