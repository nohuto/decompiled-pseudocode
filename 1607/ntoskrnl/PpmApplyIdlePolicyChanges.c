/*
 * XREFs of PpmApplyIdlePolicyChanges @ 0x1401FF6BC
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetIdlePolicy @ 0x140145C54 (PpmResetIdlePolicy.c)
 */

__int64 __fastcall PpmApplyIdlePolicyChanges(__int64 a1)
{
  PpmResetIdlePolicy(a1 + 23808);
  return 0LL;
}
