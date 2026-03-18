/*
 * XREFs of ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14017EA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall ExReleaseSpinLockExclusiveFromDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(SpinLock, retaddr);
  else
    *SpinLock = 0;
}
