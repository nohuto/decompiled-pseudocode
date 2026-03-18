/*
 * XREFs of ExSystemTimeToLocalTime @ 0x140131280
 * Callers:
 *     ExpSetSystemTime @ 0x1403EFEF4 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1405A4BB8 (ExpRefreshSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1405BF98C (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTraceActiveCooling @ 0x1405C4314 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x1406B9968 (PopDiagTracePassiveCooling.c)
 *     NtSetSystemTime @ 0x1406EDD3C (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
