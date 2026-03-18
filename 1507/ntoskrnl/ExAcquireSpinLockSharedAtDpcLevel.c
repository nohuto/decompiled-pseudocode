/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x1401027C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  signed __int32 v1; // ett

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v1 = *SpinLock & 0x7FFFFFFF;
    if ( v1 != _InterlockedCompareExchange(SpinLock, v1 + 1, v1) )
      ExpWaitForSpinLockSharedAndAcquire(SpinLock);
  }
}
