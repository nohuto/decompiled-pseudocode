/*
 * XREFs of PspNotificationLimitRateControlToleranceField @ 0x1406C4724
 * Callers:
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspNotificationLimitRateControlToleranceField(__int64 a1, int a2)
{
  if ( !a2 )
    return a1 + 60;
  if ( a2 == 1 )
    return a1 + 44;
  return a1 + 32;
}
