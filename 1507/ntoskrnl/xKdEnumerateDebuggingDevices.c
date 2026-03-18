/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x140170968
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x140170870 (HvlDebuggerSupportInitialize.c)
 *     IoWriteCrashDump @ 0x1401F3B80 (IoWriteCrashDump.c)
 *     KeConvertAuxiliaryCounterToPerformanceCounter @ 0x1401FFC40 (KeConvertAuxiliaryCounterToPerformanceCounter.c)
 *     KeConvertPerformanceCounterToAuxiliaryCounter @ 0x1401FFC48 (KeConvertPerformanceCounterToAuxiliaryCounter.c)
 *     KeQueryAuxiliaryCounterFrequency @ 0x14020000C (KeQueryAuxiliaryCounterFrequency.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     HeadlessInit @ 0x1407E9094 (HeadlessInit.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
