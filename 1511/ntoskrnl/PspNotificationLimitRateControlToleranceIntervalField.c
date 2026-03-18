/*
 * XREFs of PspNotificationLimitRateControlToleranceIntervalField @ 0x1406421EC
 * Callers:
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspNotificationLimitRateControlToleranceIntervalField(__int64 a1, int a2)
{
  if ( !a2 )
    return a1 + 64;
  if ( a2 == 1 )
    return a1 + 56;
  return a1 + 36;
}
