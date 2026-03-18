/*
 * XREFs of NtUserDrainThreadCoreMessagingCompletions @ 0x1402B12E0
 * Callers:
 *     <none>
 * Callees:
 *     _DrainThreadCoreMessagingCompletions2 @ 0x140131A30 (_DrainThreadCoreMessagingCompletions2.c)
 */

__int64 NtUserDrainThreadCoreMessagingCompletions()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterSharedCrit(0LL, 1LL);
  v0 = (int)DrainThreadCoreMessagingCompletions2(0LL);
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
