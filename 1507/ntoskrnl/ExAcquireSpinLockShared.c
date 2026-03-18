/*
 * XREFs of ExAcquireSpinLockShared @ 0x140102780
 * Callers:
 *     <none>
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockShared(PEX_SPIN_LOCK SpinLock)
{
  KIRQL CurrentIrql; // bl
  signed __int32 v2; // ett

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v2 = *SpinLock & 0x7FFFFFFF;
    if ( v2 != _InterlockedCompareExchange(SpinLock, v2 + 1, v2) )
      ExpWaitForSpinLockSharedAndAcquire(SpinLock);
  }
  return CurrentIrql;
}
