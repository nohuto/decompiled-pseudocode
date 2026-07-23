/*
 * XREFs of KeQuerySystemTimePrecise @ 0x1400EFF50
 * Callers:
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x140493C40 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1404BEEFC (EtwpInitializeTimeStamp.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     EtwpTraceSystemShutdown @ 0x1406A3060 (EtwpTraceSystemShutdown.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x1400EFF68 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
