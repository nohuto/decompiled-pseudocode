/*
 * XREFs of BvgaReleaseLock @ 0x1401C4248
 * Callers:
 *     BvgaBitBlt @ 0x1401C4068 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401C40C8 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401C4128 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401C41F0 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401C42F4 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401C43A8 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 */

void BvgaReleaseLock()
{
  unsigned __int8 v0; // bl

  v0 = BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( v0 <= 2u )
    __writecr8(v0);
}
