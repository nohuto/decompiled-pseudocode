/*
 * XREFs of NtUserEmptyClipboard @ 0x1C02121A0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEmptyClipboard @ 0x1C00F94F0 (xxxEmptyClipboard.c)
 */

__int64 NtUserEmptyClipboard()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v3 = (int)xxxEmptyClipboard(0LL, v0, v1, v2);
  UserSessionSwitchLeaveCrit(v5, v4);
  return v3;
}
