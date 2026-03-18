/*
 * XREFs of NtUserHungWindowFromGhostWindow @ 0x1401E0240
 * Callers:
 *     <none>
 * Callees:
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1401E0304 (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall NtUserHungWindowFromGhostWindow(__int64 a1)
{
  const struct tagWND *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct tagWND *v6; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = (const struct tagWND *)ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    v6 = _HungWindowFromGhostWindow(v2);
    if ( v6 )
      v4 = *(_QWORD *)v6;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
