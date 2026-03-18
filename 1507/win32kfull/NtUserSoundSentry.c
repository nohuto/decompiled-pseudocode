/*
 * XREFs of NtUserSoundSentry @ 0x1C0221640
 * Callers:
 *     <none>
 * Callees:
 *     xxxSoundSentry @ 0x1C01EF4B0 (xxxSoundSentry.c)
 */

__int64 NtUserSoundSentry()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(1LL);
  v0 = xxxSoundSentry();
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
