/*
 * XREFs of RmpPolicyFilterActivityHostWithFlags @ 0x18001EFB0
 * Callers:
 *     RmpPolicyPopulateActivityHostMetricsTable @ 0x18001EE10 (RmpPolicyPopulateActivityHostMetricsTable.c)
 * Callees:
 *     RmpActivityHostGetAppliedResourceSetCount @ 0x18001F004 (RmpActivityHostGetAppliedResourceSetCount.c)
 *     RmpActivityHostHasPpleResourceSet @ 0x180040F68 (RmpActivityHostHasPpleResourceSet.c)
 *     RmpActivityHostIsKillable @ 0x180040FC4 (RmpActivityHostIsKillable.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 */

bool __fastcall RmpPolicyFilterActivityHostWithFlags(__int64 a1, char a2)
{
  return ((a2 & 1) == 0 || (unsigned __int8)RmpActivityHostIsKillable())
      && ((a2 & 2) == 0 || (unsigned int)RmpActivityHostGetAppliedResourceSetCount(a1))
      && ((a2 & 4) == 0 || !(unsigned __int8)RmpActivityHostHasPpleResourceSet(a1))
      && ((a2 & 8) == 0 || (unsigned __int8)RmpPolicyActivityHostIsValidEmptyTarget(a1));
}
