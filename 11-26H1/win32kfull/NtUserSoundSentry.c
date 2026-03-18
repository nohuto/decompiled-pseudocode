/*
 * XREFs of NtUserSoundSentry @ 0x1401B1210
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxSoundSentry();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
