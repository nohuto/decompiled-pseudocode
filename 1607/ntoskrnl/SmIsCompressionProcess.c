/*
 * XREFs of SmIsCompressionProcess @ 0x14009CF3C
 * Callers:
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x14067F844 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14067FB1C (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x14067FCFC (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(__int64 a1)
{
  return a1 == qword_1403BF120;
}
