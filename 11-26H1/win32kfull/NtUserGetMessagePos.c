/*
 * XREFs of NtUserGetMessagePos @ 0x1401C78D0
 * Callers:
 *     <none>
 * Callees:
 *     _GetMessagePos @ 0x1401C790C (_GetMessagePos.c)
 */

__int64 NtUserGetMessagePos()
{
  __int64 v0; // rcx
  unsigned int MessagePos; // ebx
  __int64 v2; // rcx

  EnterSharedCrit(0LL, 1LL);
  MessagePos = GetMessagePos(v0);
  UserSessionSwitchLeaveCrit(v2);
  return MessagePos;
}
