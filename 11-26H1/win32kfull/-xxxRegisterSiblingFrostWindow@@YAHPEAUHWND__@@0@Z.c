/*
 * XREFs of ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1402CADE8
 * Callers:
 *     NtUserRegisterSiblingFrostWindow @ 0x1402BA670 (NtUserRegisterSiblingFrostWindow.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002355C (-GetFrostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x1401A690C (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x14028A7D8 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x140295DBC (-RemoveFrostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1402CA8A4 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1402CAB3C (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  struct tagWND *v6; // rsi
  __int64 v7; // rcx
  struct tagTHREADINFO **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v17[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( !(unsigned int)IsCurrentProcessDwm((__int64)a1) )
  {
    UserSetLastError(5);
    return v4;
  }
  v5 = HMValidateHandleNoSecure((__int64)a2, 1);
  v6 = (struct tagWND *)v5;
  if ( v5 )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v17, v5);
    if ( !(unsigned int)_ShouldFrostSiblingWindow(v6) )
      goto LABEL_19;
    v8 = (struct tagTHREADINFO **)HMValidateHandleNoSecure((__int64)a1, 1);
    if ( !v8 || v8[2] != PtiCurrent(v7) || !IsGhostWindowClass((const struct tagWND *)v8, v9) )
      goto LABEL_19;
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v8);
    if ( (unsigned int)SetFrostProp((struct tagWND *)v8, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp(v6, (__int64)a1) )
      {
        SetGhostFNID((struct tagWND *)v8, 1);
        xxxShowGhostWindow((struct tagWND *)v8, v6);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v8)
          && !(unsigned int)IsWindowBeingDestroyed((__int64)v6)
          && (HWND)GetFrostProp((const struct tagWND *)v8, v11) == a2
          && (HWND)GetFrostProp(v6, v12) == a1 )
        {
          v4 = 1;
          goto LABEL_18;
        }
        SetGhostFNID((struct tagWND *)v8, 0);
        if ( (HWND)GetFrostProp(v6, v13) == a1 )
          RemoveFrostProp(v6, v14);
        xxxHideGhostWindow((struct tagWND *)v8, v6);
      }
      RemoveFrostProp((struct tagWND *)v8, v10);
    }
LABEL_18:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_19:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v17);
  }
  return v4;
}
