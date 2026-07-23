/*
 * XREFs of SmIsCompressionProcess @ 0x14009C73C
 * Callers:
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x14067F928 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14067FC00 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x14067FDE0 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(__int64 a1)
{
  return a1 == qword_1403BF120;
}
