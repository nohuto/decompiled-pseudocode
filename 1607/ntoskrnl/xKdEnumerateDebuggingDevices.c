/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x14014CA24
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x14014C958 (HvlDebuggerSupportInitialize.c)
 *     IoWriteCrashDump @ 0x1401C65BC (IoWriteCrashDump.c)
 *     KeConvertAuxiliaryCounterToPerformanceCounter @ 0x1401D2760 (KeConvertAuxiliaryCounterToPerformanceCounter.c)
 *     KeConvertPerformanceCounterToAuxiliaryCounter @ 0x1401D2768 (KeConvertPerformanceCounterToAuxiliaryCounter.c)
 *     KeQueryAuxiliaryCounterFrequency @ 0x1401D2A78 (KeQueryAuxiliaryCounterFrequency.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 *     HeadlessInit @ 0x1407BD2D8 (HeadlessInit.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
