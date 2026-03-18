/*
 * XREFs of NtUserWaitMessage @ 0x1C00F2BF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxWaitMessageEx @ 0x1C00CFAA4 (xxxWaitMessageEx.c)
 */

__int64 NtUserWaitMessage()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  v0 = xxxWaitMessageEx(0x3CFFu, 0, 0LL);
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
