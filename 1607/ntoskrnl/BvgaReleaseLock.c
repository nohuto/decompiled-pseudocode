/*
 * XREFs of BvgaReleaseLock @ 0x1401C412C
 * Callers:
 *     BvgaBitBlt @ 0x1401C3F4C (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401C3FAC (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401C400C (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401C40D4 (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401C41D8 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401C428C (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 */

void BvgaReleaseLock()
{
  unsigned __int8 v0; // bl

  v0 = BvgaOldIrql;
  KxReleaseSpinLock(&BootDriverLock);
  if ( v0 <= 2u )
    __writecr8(v0);
}
