/*
 * XREFs of NtUserRealWaitMessageEx @ 0x1C0218980
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRealWaitMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx

  EnterCrit(0LL, 1LL);
  if ( (a1 & 0xFFFFA200) != 0 )
  {
    UserSetLastError(1004LL);
    v6 = 0;
  }
  else
  {
    v6 = xxxSleepThread2(a1, a2, 1, 0, 0LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v6;
}
