/*
 * XREFs of BvgaReleaseLock @ 0x1401F1754
 * Callers:
 *     BvgaBitBlt @ 0x1401F1574 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401F15D4 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401F1634 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401F16FC (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401F1818 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401F18CC (BvgaUpdateProgressBar.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 BvgaReleaseLock()
{
  unsigned __int8 v0; // bl
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v0 = BvgaOldIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    result = KiReleaseSpinLockInstrumented(&BootDriverLock, retaddr);
  else
    _InterlockedAnd64(&BootDriverLock, 0LL);
  if ( v0 <= 2u )
  {
    result = v0;
    __writecr8(v0);
  }
  return result;
}
