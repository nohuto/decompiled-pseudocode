/*
 * XREFs of KeQuerySystemTimePrecise @ 0x1400166E8
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x1404B0048 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x140559E58 (EtwpInitializeTimeStamp.c)
 *     EtwpTraceSystemShutdown @ 0x1406E56E0 (EtwpTraceSystemShutdown.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140017E74 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
