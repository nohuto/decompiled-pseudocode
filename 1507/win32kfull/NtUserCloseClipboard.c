/*
 * XREFs of NtUserCloseClipboard @ 0x1C00D61C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C00D61F0 (xxxCloseClipboard.c)
 */

__int64 NtUserCloseClipboard()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(1LL);
  v0 = xxxCloseClipboard(0LL);
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
