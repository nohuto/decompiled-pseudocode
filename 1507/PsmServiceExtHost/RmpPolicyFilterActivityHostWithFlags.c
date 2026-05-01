/*
 * XREFs of RmpPolicyFilterActivityHostWithFlags @ 0x180006210
 * Callers:
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x180006074 (RmpPolicyPopulateActivityHostMetricsTable.c)
 * Callees:
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x180005F6C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     RmpActivityHostGetAppliedResourceSetCount @ 0x180006264 (RmpActivityHostGetAppliedResourceSetCount.c)
 *     RmpActivityHostIsKillable @ 0x180009F48 (RmpActivityHostIsKillable.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x18003BCDC (RmpActivityHostHasPpleResourceSet.c)
 */

bool __fastcall RmpPolicyFilterActivityHostWithFlags(__int64 a1, char a2)
{
  return ((a2 & 1) == 0 || (unsigned __int8)RmpActivityHostIsKillable())
      && ((a2 & 2) == 0 || (unsigned int)RmpActivityHostGetAppliedResourceSetCount(a1))
      && ((a2 & 4) == 0 || !(unsigned __int8)RmpActivityHostHasPpleResourceSet(a1))
      && ((a2 & 8) == 0 || RmpPolicyActivityHostIsValidEmptyTarget(a1));
}
