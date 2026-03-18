/*
 * XREFs of PspNotificationLimitRateControlToleranceField @ 0x140466F18
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
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
