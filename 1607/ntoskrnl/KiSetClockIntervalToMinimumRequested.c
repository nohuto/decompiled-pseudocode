/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x14009D780
 * Callers:
 *     KiSetClockInterval @ 0x14009D6E4 (KiSetClockInterval.c)
 *     KiCheckForTimerExpiration @ 0x1400DA690 (KiCheckForTimerExpiration.c)
 * Callees:
 *     KiSetClockTickRate @ 0x14009D7AC (KiSetClockTickRate.c)
 */

__int64 KiSetClockIntervalToMinimumRequested()
{
  int Left_high; // ecx
  __int64 result; // rax

  Left_high = HIDWORD(KiClockIntervalRequests.Min[1].Left);
  result = (unsigned int)KeTimeIncrement;
  if ( Left_high != KiLastRequestedTimeIncrement && Left_high != KeTimeIncrement )
    return KiSetClockTickRate();
  return result;
}
