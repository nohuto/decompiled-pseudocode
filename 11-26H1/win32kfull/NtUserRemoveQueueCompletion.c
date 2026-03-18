/*
 * XREFs of NtUserRemoveQueueCompletion @ 0x1402BAD30
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoveQueueCompletion @ 0x140026360 (xxxRemoveQueueCompletion.c)
 */

__int64 NtUserRemoveQueueCompletion()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = (int)xxxRemoveQueueCompletion(v0);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
