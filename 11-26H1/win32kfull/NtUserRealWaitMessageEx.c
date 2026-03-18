/*
 * XREFs of NtUserRealWaitMessageEx @ 0x1402B9560
 * Callers:
 *     <none>
 * Callees:
 *     xxxSleepThread2 @ 0x140022590 (xxxSleepThread2.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?IsInsideMPH@@YAHXZ @ 0x140166640 (-IsInsideMPH@@YAHXZ.c)
 */

__int64 __fastcall NtUserRealWaitMessageEx(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ebx

  EnterCrit(0LL, 0LL);
  if ( (a1 & 0xFFFFA200) != 0 )
  {
    UserSetLastError(1004);
    v6 = 0;
  }
  else
  {
    IsInsideMPH(v4);
    v6 = xxxSleepThread2(a1, a2, 1, 0, 0);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
