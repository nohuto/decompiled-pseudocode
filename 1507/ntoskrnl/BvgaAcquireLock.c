/*
 * XREFs of BvgaAcquireLock @ 0x1401F150C
 * Callers:
 *     BvgaBitBlt @ 0x1401F1574 (BvgaBitBlt.c)
 *     BvgaDisplayString @ 0x1401F15D4 (BvgaDisplayString.c)
 *     BvgaEnableBootDriver @ 0x1401F1634 (BvgaEnableBootDriver.c)
 *     BvgaNotifyDisplayOwnershipLost @ 0x1401F16FC (BvgaNotifyDisplayOwnershipLost.c)
 *     BvgaSolidColorFill @ 0x1401F1818 (BvgaSolidColorFill.c)
 *     BvgaUpdateProgressBar @ 0x1401F18CC (BvgaUpdateProgressBar.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 */

__int64 BvgaAcquireLock()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql <= 2u )
  {
    while ( 1 )
    {
      result = BootDriverLock;
      if ( !BootDriverLock )
        break;
      _mm_pause();
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    result = KiAcquireSpinLockInstrumented(&BootDriverLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&BootDriverLock, 0LL) )
  {
    result = KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&BootDriverLock);
  }
  BvgaOldIrql = CurrentIrql;
  return result;
}
