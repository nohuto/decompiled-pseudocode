/*
 * XREFs of NtUserEmptyClipboard @ 0x1401B1980
 * Callers:
 *     <none>
 * Callees:
 *     xxxEmptyClipboard @ 0x1401B2154 (xxxEmptyClipboard.c)
 */

__int64 NtUserEmptyClipboard()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxEmptyClipboard(0LL);
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
