/*
 * XREFs of PspLimitViolationRateControlToleranceLimitField @ 0x14046850C
 * Callers:
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspLimitViolationRateControlToleranceLimitField(__int64 a1, int a2)
{
  if ( !a2 )
    return a1 + 100;
  if ( a2 == 1 )
    return a1 + 92;
  return a1 + 76;
}
