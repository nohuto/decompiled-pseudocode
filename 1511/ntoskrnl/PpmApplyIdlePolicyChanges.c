/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x14012F9C8
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x140139D8C (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 23808);
  return 0LL;
}
