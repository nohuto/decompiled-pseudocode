/*
 * XREFs of PspRateControlLimitFlag @ 0x140642398
 * Callers:
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRateControlLimitFlag(int a1)
{
  if ( !a1 )
    return 0x100000LL;
  if ( a1 == 1 )
    return 0x80000LL;
  return 0x40000LL;
}
