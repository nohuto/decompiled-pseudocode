/*
 * XREFs of NtUserCancelQueueEventCompletionPacket @ 0x1402B0180
 * Callers:
 *     <none>
 * Callees:
 *     _CancelQueueEventCompletionPacket @ 0x1401BC9C0 (_CancelQueueEventCompletionPacket.c)
 */

__int64 NtUserCancelQueueEventCompletionPacket()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = (int)CancelQueueEventCompletionPacket(v0);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
