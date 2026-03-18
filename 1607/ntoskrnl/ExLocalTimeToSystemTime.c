/*
 * XREFs of ExLocalTimeToSystemTime @ 0x1400A4D0C
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x1403C8DA4 (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x14055E2B0 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055EB0C (ExpRefreshTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1406AD104 (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + ExpTimeZoneBias;
}
