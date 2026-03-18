/*
 * XREFs of NtUserGhostWindowFromHungWindow @ 0x1401E8B50
 * Callers:
 *     <none>
 * Callees:
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x140038F00 (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall NtUserGhostWindowFromHungWindow(__int64 a1)
{
  const struct tagWND *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  struct tagWND *v5; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = (const struct tagWND *)ValidateHwnd(a1);
  v4 = 0LL;
  if ( v2 )
  {
    v5 = _GhostWindowFromHungWindow(v2);
    if ( v5 )
      v4 = *(_QWORD *)v5;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
