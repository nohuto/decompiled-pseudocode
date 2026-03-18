/*
 * XREFs of NtUserEmptyClipboard @ 0x1C02195A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEmptyClipboard @ 0x1C00DC248 (xxxEmptyClipboard.c)
 */

__int64 NtUserEmptyClipboard()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  v0 = xxxEmptyClipboard(0LL);
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
