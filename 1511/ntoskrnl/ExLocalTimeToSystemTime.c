/*
 * XREFs of ExLocalTimeToSystemTime @ 0x14012664C
 * Callers:
 *     ExUpdateSystemTimeFromCmos @ 0x1403A6728 (ExUpdateSystemTimeFromCmos.c)
 *     ExpRefreshSystemTime @ 0x14051ECD8 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14066A764 (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExLocalTimeToSystemTime(PLARGE_INTEGER LocalTime, PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = LocalTime->QuadPart + ExpTimeZoneBias;
}
