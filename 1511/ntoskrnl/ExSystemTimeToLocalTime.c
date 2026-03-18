/*
 * XREFs of ExSystemTimeToLocalTime @ 0x1400F3D68
 * Callers:
 *     ExpSetSystemTime @ 0x14039D9C4 (ExpSetSystemTime.c)
 *     PopDiagInterruptTimeToLocalTime @ 0x1403B27E0 (PopDiagInterruptTimeToLocalTime.c)
 *     ExpRefreshSystemTime @ 0x14051ECD8 (ExpRefreshSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x140548134 (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x14054B79C (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTraceActiveCooling @ 0x14054CBB8 (PopDiagTraceActiveCooling.c)
 *     PopDiagTracePassiveCooling @ 0x140639874 (PopDiagTracePassiveCooling.c)
 *     NtSetSystemTime @ 0x14066A764 (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
