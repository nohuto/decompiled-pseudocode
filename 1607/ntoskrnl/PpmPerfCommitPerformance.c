/*
 * XREFs of PpmPerfCommitPerformance @ 0x1401323C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmPerfCommitPerformance(__int64 a1, __int64 a2, __int64 a3)
{
  return PpmPerfControlExecuteAction(PpmPerfControlCommitPerformance, a2, a3);
}
