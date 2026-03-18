/*
 * XREFs of NtUserFrostCrashedWindow @ 0x1402B2270
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1402CAC68 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 */

HWND __fastcall NtUserFrostCrashedWindow(__int64 a1, HWND a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  HWND v6; // rbx
  struct tagWND *v7; // rsi

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    if ( !a2 || ValidateHwnd(a2) )
      v6 = xxxFrostCrashedWindow(v7, a2);
    else
      UserSetLastError(1400);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
