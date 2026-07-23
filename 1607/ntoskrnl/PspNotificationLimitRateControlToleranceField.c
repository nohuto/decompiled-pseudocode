/*
 * XREFs of PspNotificationLimitRateControlToleranceField @ 0x140465DE8
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
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
