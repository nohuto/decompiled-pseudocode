/*
 * XREFs of PopValidateContextMembership @ 0x14050CEF0
 * Callers:
 *     PopGetSettingNotificationName @ 0x14045429C (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140003E6C (RtlCheckTokenMembership.c)
 */

__int64 __fastcall PopValidateContextMembership(void *a1)
{
  RtlCheckTokenMembership(0LL, a1);
  return 3221225506LL;
}
