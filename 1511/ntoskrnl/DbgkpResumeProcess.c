/*
 * XREFs of DbgkpResumeProcess @ 0x1405F0A74
 * Callers:
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 * Callees:
 *     PsThawProcess @ 0x1404529E8 (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
