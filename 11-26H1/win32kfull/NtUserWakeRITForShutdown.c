/*
 * XREFs of NtUserWakeRITForShutdown @ 0x1402C1090
 * Callers:
 *     <none>
 * Callees:
 *     WakeRITForShutdown @ 0x14025DD60 (WakeRITForShutdown.c)
 */

__int64 NtUserWakeRITForShutdown()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = WakeRITForShutdown(v0);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
