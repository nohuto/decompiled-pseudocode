/*
 * XREFs of NtUserWaitAvailableMessageEx @ 0x1C0221CB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 */

__int64 __fastcall NtUserWaitAvailableMessageEx(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterCrit(1LL);
  v4 = xxxSleepThread2(a1, a2, 1, 1, 0LL);
  UserSessionSwitchLeaveCrit(v6, v5);
  return v4;
}
