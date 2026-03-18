/*
 * XREFs of BvgaAcquireLock @ 0x1401B654C
 * Callers:
 *     BvgaBitBlt @ 0x1401B6590 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401B65F0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401B6650 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401B6718 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401B681C (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401B68D0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
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
