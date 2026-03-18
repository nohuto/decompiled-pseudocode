/*
 * XREFs of PpmPerfControlExecuteAction @ 0x140126C74
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x1400755B8 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x140126C68 (PpmPerfCommitPerformance.c)
 * Callees:
 *     <none>
 */

char __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  char v1; // bl

  v1 = 0;
  if ( !a1 )
    return 1;
  a1(PpmPerfControlActionCallback);
  return v1;
}
