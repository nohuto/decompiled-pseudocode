/*
 * XREFs of ExpWnfDeleteNameInstanceCallback @ 0x1404B20DC
 * Callers:
 *     ExpWnfFreeScopeInstance @ 0x1404B203C (ExpWnfFreeScopeInstance.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstanceCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a1 - 16;
  ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 - 16 + 8));
  return ExpWnfDeleteNameInstance(a2, v2, 0LL);
}
