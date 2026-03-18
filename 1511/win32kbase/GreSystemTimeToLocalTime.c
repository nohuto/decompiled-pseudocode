/*
 * XREFs of GreSystemTimeToLocalTime @ 0x1C00BF2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall GreSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  ExSystemTimeToLocalTime(SystemTime, LocalTime);
}
