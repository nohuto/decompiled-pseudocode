/*
 * XREFs of NtUserEmptyClipboard @ 0x1C0219710
 * Callers:
 *     <none>
 * Callees:
 *     xxxEmptyClipboard @ 0x1C0128CAC (xxxEmptyClipboard.c)
 */

__int64 NtUserEmptyClipboard()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(1LL);
  v0 = xxxEmptyClipboard(0LL);
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
