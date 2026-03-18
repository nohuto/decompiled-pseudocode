/*
 * XREFs of KiShouldSetClockIntervalForHighResolutionTimers @ 0x1400F731C
 * Callers:
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiTimer2Expiration @ 0x1400F5180 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x140154F18 (KiAdjustTimer2DueTimes.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiShouldSetClockIntervalForHighResolutionTimers(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !KiClockIntervalIsSetForHighResolutionTimers )
    return a2 < a1 + (unsigned __int64)KeMaximumIncrement;
  return v2;
}
