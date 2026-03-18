/*
 * XREFs of PpmPerfCommitPerformance @ 0x14015A494
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfCommitPerformance(__int64 a1, __int64 a2)
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance, a2);
}
