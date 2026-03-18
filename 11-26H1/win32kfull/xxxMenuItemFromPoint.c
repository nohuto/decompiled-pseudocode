/*
 * XREFs of xxxMenuItemFromPoint @ 0x14020D12C
 * Callers:
 *     NtUserMenuItemFromPoint @ 0x14020CFD0 (NtUserMenuItemFromPoint.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x14008B510 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14020D7E4 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x14020D8E4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxMenuItemFromPoint(__int64 a1, struct tagMENU ***a2, struct tagPOINT a3)
{
  struct tagWND *MenuPwnd; // rsi
  struct tagMENU *v7; // rcx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  MenuPwnd = (struct tagWND *)GetMenuPwnd();
  if ( !MenuPwnd )
    return 0xFFFFFFFFLL;
  if ( (*(_DWORD *)(*((_QWORD *)**a2 + 5) + 40LL) & 1) == 0 )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)MenuPwnd);
    xxxMNRecomputeBarIfNeeded(MenuPwnd, a2);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  v7 = (struct tagMENU *)a2[2];
  if ( !v7 )
    v7 = **a2;
  return MNItemHitTest(v7, MenuPwnd, a3);
}
