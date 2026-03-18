/*
 * XREFs of NtUserReassociateQueueEventCompletionPacket @ 0x1402B95E0
 * Callers:
 *     <none>
 * Callees:
 *     _ReassociateQueueEventCompletionPacket @ 0x1402055E8 (_ReassociateQueueEventCompletionPacket.c)
 */

__int64 NtUserReassociateQueueEventCompletionPacket()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = (int)ReassociateQueueEventCompletionPacket(v0);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
