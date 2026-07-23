/*
 * XREFs of KeQuerySystemTimePrecise @ 0x14002D4D0
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x1404CA828 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1404CAAAC (EtwpInitializeTimeStamp.c)
 *     EtwpTraceSystemShutdown @ 0x1406625C8 (EtwpTraceSystemShutdown.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14002D4E8 (RtlGetSystemTimePrecise.c)
 */

LARGE_INTEGER __fastcall KeQuerySystemTimePrecise(LARGE_INTEGER *a1)
{
  LARGE_INTEGER result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
