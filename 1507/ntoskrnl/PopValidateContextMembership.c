/*
 * XREFs of PopValidateContextMembership @ 0x1405842DC
 * Callers:
 *     PopGetSettingNotificationName @ 0x1404E98A4 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400083B0 (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
