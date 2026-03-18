/*
 * XREFs of KeQueryTimerDueTime @ 0x1401FF550
 * Callers:
 *     ExGetNextWakeTimeForDeepSleep @ 0x1402644F4 (ExGetNextWakeTimeForDeepSleep.c)
 *     ExGetWakeTimerList @ 0x140264560 (ExGetWakeTimerList.c)
 *     ExGetNextWakeTime @ 0x1404043CC (ExGetNextWakeTime.c)
 *     NtQueryTimer @ 0x1406F08E8 (NtQueryTimer.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeQueryTimerDueTime(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // edi

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 )
    v2 = *(_QWORD *)(a1 + 24);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return v2;
}
