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
  int v0; // ecx
  __int64 result; // rax

  v0 = *(_DWORD *)(qword_140319EF0 + 28);
  result = (unsigned int)KeTimeIncrement;
  if ( v0 != KiLastRequestedTimeIncrement && v0 != KeTimeIncrement )
    return KiSetClockTickRate();
  return result;
}
