/*
 * XREFs of NtUserHungWindowFromGhostWindow @ 0x1C01234B0
 * Callers:
 *     <none>
 * Callees:
 *     _HungWindowFromGhostWindow @ 0x1C0085B70 (_HungWindowFromGhostWindow.c)
 */

__int64 __fastcall NtUserHungWindowFromGhostWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 *v6; // rax

  EnterSharedCrit(1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0LL;
  if ( v2 )
  {
    v6 = (__int64 *)HungWindowFromGhostWindow(v2);
    if ( v6 )
      v5 = *v6;
  }
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
