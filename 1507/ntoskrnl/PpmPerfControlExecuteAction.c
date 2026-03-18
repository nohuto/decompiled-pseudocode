/*
 * XREFs of PpmPerfControlExecuteAction @ 0x14015A4A0
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x1400E8F64 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x14015A494 (PpmPerfCommitPerformance.c)
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
