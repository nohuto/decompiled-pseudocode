/*
 * XREFs of NtUserSetShellChangeNotifyHWND @ 0x14025ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z @ 0x14025AD14 (-_SetShellChangeNotifyHWND@@YAHPEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserSetShellChangeNotifyHWND(HWND a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterSharedCrit(0LL, 1LL);
  v2 = (int)_SetShellChangeNotifyHWND(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
