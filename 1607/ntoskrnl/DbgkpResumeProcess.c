/*
 * XREFs of DbgkpResumeProcess @ 0x14061ACA0
 * Callers:
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 * Callees:
 *     PsThawProcess @ 0x14051DFE8 (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
