/*
 * XREFs of KiSetClockIntervalToMinimumRequested @ 0x140035460
 * Callers:
 *     KiSetClockInterval @ 0x140032C70 (KiSetClockInterval.c)
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 * Callees:
 *     KiSetClockTickRate @ 0x14003548C (KiSetClockTickRate.c)
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
