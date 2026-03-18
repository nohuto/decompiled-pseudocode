/*
 * XREFs of xKdEnumerateDebuggingDevices @ 0x140142AF0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x140142A08 (HvlDebuggerSupportInitialize.c)
 *     IoWriteCrashDump @ 0x1401B87D0 (IoWriteCrashDump.c)
 *     KeConvertAuxiliaryCounterToPerformanceCounter @ 0x1401C3BC4 (KeConvertAuxiliaryCounterToPerformanceCounter.c)
 *     KeConvertPerformanceCounterToAuxiliaryCounter @ 0x1401C3BCC (KeConvertPerformanceCounterToAuxiliaryCounter.c)
 *     KeQueryAuxiliaryCounterFrequency @ 0x1401C3ED0 (KeQueryAuxiliaryCounterFrequency.c)
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     HeadlessInit @ 0x14077250C (HeadlessInit.c)
 * Callees:
 *     <none>
 */

__int64 xKdEnumerateDebuggingDevices()
{
  return 3221225474LL;
}
