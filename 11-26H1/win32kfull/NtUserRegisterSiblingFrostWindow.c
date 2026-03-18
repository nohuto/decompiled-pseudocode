/*
 * XREFs of NtUserRegisterSiblingFrostWindow @ 0x1402BA670
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402CADE8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall NtUserRegisterSiblingFrostWindow(HWND a1, HWND a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (int)xxxRegisterSiblingFrostWindow(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
