/*
 * XREFs of NtUserEnableSoftwareCursorForScreenCapture @ 0x140259DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ChangeComposableCursor @ 0x14024CDC4 (ChangeComposableCursor.c)
 */

__int64 __fastcall NtUserEnableSoftwareCursorForScreenCapture(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( (unsigned int)IsCurrentProcessDwm(v3) )
  {
    if ( a1 != *(_DWORD *)(W32GetUserSessionState(v5, v4) + 36328) )
    {
      ChangeComposableCursor(a1, v6);
      *(_DWORD *)(W32GetUserSessionState(v8, v7) + 36328) = a1;
    }
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v2;
}
