/*
 * XREFs of NtUserReplyMessage @ 0x1400550A0
 * Callers:
 *     <none>
 * Callees:
 *     _ReplyMessage @ 0x1400550E0 (_ReplyMessage.c)
 */

__int64 __fastcall NtUserReplyMessage(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)ReplyMessage(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
