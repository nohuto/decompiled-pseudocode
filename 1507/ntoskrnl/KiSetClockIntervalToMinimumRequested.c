/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x1400D60A4
 * Callers:
 *     KeAccumulateTicks @ 0x1400A9AB0 (KeAccumulateTicks.c)
 *     KiSetClockInterval @ 0x1400D6020 (KiSetClockInterval.c)
 * Callees:
 *     KiSetClockTickRate @ 0x1400D60D0 (KiSetClockTickRate.c)
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
