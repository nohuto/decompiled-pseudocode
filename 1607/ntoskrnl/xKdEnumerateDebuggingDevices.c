/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x14014CF94
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x14014CEC8 (HvlDebuggerSupportInitialize.c)
 *     IoWriteCrashDump @ 0x1401C645C (IoWriteCrashDump.c)
 *     KeConvertAuxiliaryCounterToPerformanceCounter @ 0x1401D258C (KeConvertAuxiliaryCounterToPerformanceCounter.c)
 *     KeConvertPerformanceCounterToAuxiliaryCounter @ 0x1401D2594 (KeConvertPerformanceCounterToAuxiliaryCounter.c)
 *     KeQueryAuxiliaryCounterFrequency @ 0x1401D28A4 (KeQueryAuxiliaryCounterFrequency.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 *     HeadlessInit @ 0x1407BD2D8 (HeadlessInit.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
