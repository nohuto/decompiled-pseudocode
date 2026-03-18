/*
 * XREFs of ExSystemTimeToLocalTime @ 0x1400B53D0
 * Callers:
 *     ExpSetSystemTime @ 0x1403D230C (ExpSetSystemTime.c)
 *     PopDiagInterruptTimeToLocalTime @ 0x1403DF4CC (PopDiagInterruptTimeToLocalTime.c)
 *     ExpRefreshSystemTime @ 0x14055E2B0 (ExpRefreshSystemTime.c)
 *     PopDiagTraceActiveCooling @ 0x1405744E0 (PopDiagTraceActiveCooling.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14057C8C8 (CmpUpdateReorganizeRegistryValues.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     PopDiagTracePassiveCooling @ 0x140671844 (PopDiagTracePassiveCooling.c)
 *     NtSetSystemTime @ 0x1406AD104 (NtSetSystemTime.c)
 * Callees:
 *     <none>
 */

void __stdcall ExSystemTimeToLocalTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER LocalTime)
{
  LocalTime->QuadPart = SystemTime->QuadPart - ExpTimeZoneBias;
}
