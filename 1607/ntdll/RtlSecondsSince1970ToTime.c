/*
 * XREFs of RtlSecondsSince1970ToTime @ 0x1800878D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSecondsSince1970ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (SecondsToStartOf1970 + ElapsedSeconds);
}
