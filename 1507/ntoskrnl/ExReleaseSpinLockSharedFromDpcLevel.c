/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x14010E5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall ExReleaseSpinLockSharedFromDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
}
