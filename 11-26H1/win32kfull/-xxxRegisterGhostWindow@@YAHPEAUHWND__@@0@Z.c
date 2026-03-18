/*
 * XREFs of ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x140258990
 * Callers:
 *     NtUserRegisterGhostWindow @ 0x140258940 (NtUserRegisterGhostWindow.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z @ 0x14002367C (-GetGhostProp@@YAPEAUHWND__@@PEBUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x140046B68 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?IsGhostWindowClass@@YA_NPEBUtagWND@@@Z @ 0x1401A690C (-IsGhostWindowClass@@YA_NPEBUtagWND@@@Z.c)
 *     ?RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z @ 0x1401B8ED8 (-RemoveGhostProp@@YAPEAUHWND__@@PEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x140264534 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x14028A7D8 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x14029454C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  const struct tagWND *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO **v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v18[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  if ( !(unsigned int)IsCurrentProcessDwm((__int64)a1) )
  {
    UserSetLastError(5);
    return v4;
  }
  v5 = HMValidateHandleNoSecure((__int64)a2, 1);
  v6 = (const struct tagWND *)v5;
  if ( v5 )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v18, v5);
    if ( !_ShouldGhostWindow(v6) )
      goto LABEL_21;
    if ( GetGhostProp(v6, v7) != -1 )
      goto LABEL_21;
    if ( !IsHungWindow((const struct tagTHREADINFO **)v6) )
      goto LABEL_21;
    v9 = (struct tagTHREADINFO **)HMValidateHandleNoSecure((__int64)a1, 1);
    if ( !v9 || v9[2] != PtiCurrent(v8) || !IsGhostWindowClass((const struct tagWND *)v9, v7) )
      goto LABEL_21;
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v9);
    if ( (unsigned int)SetGhostProp((struct tagWND *)v9, a2) )
    {
      if ( (unsigned int)SetGhostProp(v6, a1) )
      {
        SetGhostFNID((struct tagWND *)v9, 1);
        xxxShowGhostWindow((struct tagWND *)v9, v6);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v9)
          && !(unsigned int)IsWindowBeingDestroyed((__int64)v6)
          && (HWND)GetGhostProp((const struct tagWND *)v9, v11) == a2
          && (HWND)GetGhostProp(v6, v12) == a1 )
        {
          v4 = 1;
          goto LABEL_20;
        }
        SetGhostFNID((struct tagWND *)v9, 0);
        if ( (HWND)GetGhostProp(v6, v13) == a1 )
          RemoveGhostProp(v6, v14);
        xxxHideGhostWindow((struct tagWND *)v9, v6);
      }
      RemoveGhostProp((struct tagWND *)v9, v10);
    }
LABEL_20:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    if ( v4 )
    {
LABEL_23:
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v18);
      return v4;
    }
LABEL_21:
    if ( GetGhostProp(v6, v7) == -1 )
      RemoveGhostProp(v6, v15);
    goto LABEL_23;
  }
  return v4;
}
