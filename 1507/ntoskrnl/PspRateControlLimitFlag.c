/*
 * XREFs of PspRateControlLimitFlag @ 0x1406C4944
 * Callers:
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140506F48 (PspEnforceLimitsJobPostCallback.c)
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
