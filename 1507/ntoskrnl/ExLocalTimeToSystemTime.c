/*
 * XREFs of ExLocalTimeToSystemTime @ 0x140159CE0
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x1403F6BAC (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x1405A4BB8 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1406EDD3C (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + ExpTimeZoneBias;
}
