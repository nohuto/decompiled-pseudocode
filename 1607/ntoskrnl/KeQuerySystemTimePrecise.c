/*
 * XREFs of KeQuerySystemTimePrecise @ 0x1400F2100
 * Callers:
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x1404931B0 (EtwpInitLoggerContext.c)
 *     EtwpInitializeTimeStamp @ 0x1404DB8F8 (EtwpInitializeTimeStamp.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     EtwpTraceSystemShutdown @ 0x1406A2F28 (EtwpTraceSystemShutdown.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x1400F2118 (RtlGetSystemTimePrecise.c)
 */

__int64 __fastcall KeQuerySystemTimePrecise(__int64 *a1)
{
  __int64 result; // rax

  result = RtlGetSystemTimePrecise();
  *a1 = result;
  return result;
}
