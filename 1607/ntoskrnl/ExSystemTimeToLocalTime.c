/*
 * XREFs of ExSystemTimeToLocalTime @ 0x1400B3208
 * Callers:
 *     ExpSetSystemTime @ 0x1403D230C (ExpSetSystemTime.c)
 *     PopDiagInterruptTimeToLocalTime @ 0x1403DF4CC (PopDiagInterruptTimeToLocalTime.c)
 *     ExpRefreshSystemTime @ 0x14055E7F0 (ExpRefreshSystemTime.c)
 *     PopDiagTraceActiveCooling @ 0x140574A20 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14057CD74 (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x140581A08 (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTracePassiveCooling @ 0x140671928 (PopDiagTracePassiveCooling.c)
 *     NtSetSystemTime @ 0x1406AD23C (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
