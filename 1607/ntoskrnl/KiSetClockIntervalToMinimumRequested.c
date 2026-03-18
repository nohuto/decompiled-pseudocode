/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x14009DF80
 * Callers:
 *     KiSetClockInterval @ 0x14009DEE4 (KiSetClockInterval.c)
 *     KiCheckForTimerExpiration @ 0x1400DC7F0 (KiCheckForTimerExpiration.c)
 * Callees:
 *     KiSetClockTickRate @ 0x14009DFAC (KiSetClockTickRate.c)
 */

__int64 KiSetClockIntervalToMinimumRequested()
{
  int v0; // ecx
  __int64 result; // rax

  v0 = *(_DWORD *)(qword_14033DC18 + 28);
  result = (unsigned int)KeTimeIncrement;
  if ( v0 != KiLastRequestedTimeIncrement && v0 != KeTimeIncrement )
    return KiSetClockTickRate();
  return result;
}
