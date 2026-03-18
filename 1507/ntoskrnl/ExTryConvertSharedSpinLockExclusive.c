/*
 * XREFs of ExTryConvertSharedSpinLockExclusive @ 0x140263FC4
 * Callers:
 *     <none>
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpTryConvertSharedSpinLockExclusiveInstrumented @ 0x140264370 (ExpTryConvertSharedSpinLockExclusiveInstrumented.c)
 */

LOGICAL __stdcall ExTryConvertSharedSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  unsigned int v3; // edi
  volatile LONG v4; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return ExpTryConvertSharedSpinLockExclusiveInstrumented(SpinLock, retaddr);
  if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *SpinLock;
    if ( (*SpinLock & 0xBFFFFFFF) == 0x80000001 )
      break;
    if ( (v4 & 0x40000000) == 0 )
      _InterlockedCompareExchange(SpinLock, v4 | 0x40000000, v4);
    if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v3);
  }
  return 1;
}
