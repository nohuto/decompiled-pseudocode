/*
 * XREFs of xxxMenuItemFromPoint @ 0x1C023B564
 * Callers:
 *     NtUserMenuItemFromPoint @ 0x1C021E460 (NtUserMenuItemFromPoint.c)
 * Callees:
 *     MNItemHitTest @ 0x1C010C5B0 (MNItemHitTest.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z @ 0x1C0118B7C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@PEAUtagMENU@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B1E4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxMenuItemFromPoint(struct tagWND *a1, __int64 a2, unsigned __int64 a3)
{
  struct tagWND *MenuPwnd; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  MenuPwnd = GetMenuPwnd(a1, (struct tagMENU *)a2);
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(a2 + 40) & 1) == 0 )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v10;
    ++*((_DWORD *)MenuPwnd + 2);
    v10[1] = MenuPwnd;
    xxxMNRecomputeBarIfNeeded((__int64)MenuPwnd, a2, v5, v6);
    ThreadUnlock1(v9, v8);
  }
  return MNItemHitTest(a2, (__int64)MenuPwnd, a3);
}
