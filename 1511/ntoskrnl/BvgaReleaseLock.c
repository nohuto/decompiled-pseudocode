/*
 * XREFs of BvgaReleaseLock @ 0x1401B6770
 * Callers:
 *     BvgaBitBlt @ 0x1401B6590 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401B65F0 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401B6650 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401B6718 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401B681C (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401B68D0 (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 */

void BvgaReleaseLock()
{
  unsigned __int8 v0; // bl

  v0 = BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( v0 <= 2u )
    __writecr8(v0);
}
