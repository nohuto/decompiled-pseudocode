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
  int v0; // ecx
  __int64 result; // rax

  v0 = *(_DWORD *)(qword_14036A228 + 28);
  result = (unsigned int)KeTimeIncrement;
  if ( v0 != KiLastRequestedTimeIncrement && v0 != KeTimeIncrement )
    return KiSetClockTickRate();
  return result;
}
