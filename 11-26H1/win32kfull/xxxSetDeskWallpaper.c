/*
 * XREFs of xxxSetDeskWallpaper @ 0x14013D534
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x1400197A4 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     DwmAsyncNotifyWallpaperChange @ 0x14013D074 (DwmAsyncNotifyWallpaperChange.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x14013D4C4 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     ?GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z @ 0x14013D70C (-GetCurrentWallpaperSettings@@YAXPEAU_UNICODE_STRING@@PEAUtagWALLPAPERSETTINGS@@@Z.c)
 *     ?SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z @ 0x14013D784 (-SetGlobalWallpaperSettings@@YAHPEBUtagWALLPAPERSETTINGS@@@Z.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14013D9E8 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 *     LoadWallpaperFilenameFromRegistry @ 0x14013DA04 (LoadWallpaperFilenameFromRegistry.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxSetDeskWallpaper(struct _UNICODE_STRING *a1, __int64 a2)
{
  int v4; // esi
  _WORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int16 v8; // ax
  _WORD *v9; // rax
  struct tagTHREADINFO *v10; // rax
  struct tagWND *ShellWindow; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 CurrentProcess; // rax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v25[4]; // [rsp+40h] [rbp-228h] BYREF
  _BYTE v26[524]; // [rsp+44h] [rbp-224h] BYREF

  memset_0(v25, 0, 0x204uLL);
  v4 = 0;
  GetCurrentWallpaperSettings(a1, (struct tagWALLPAPERSETTINGS *)v25);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    LoadWallpaperFilenameFromRegistry(a1, v26, 256LL);
  }
  else if ( a2 != -2 )
  {
    v6 = 256LL;
    v7 = a2 - (_QWORD)v26;
    v5 = v26;
    do
    {
      if ( v6 == -2147483390 )
        break;
      v8 = *(_WORD *)((char *)v5 + v7);
      if ( !v8 )
        break;
      *v5++ = v8;
      --v6;
    }
    while ( v6 );
    v9 = v5 - 1;
    if ( v6 )
      v9 = v5;
    *v9 = 0;
  }
  v10 = PtiCurrent((__int64)v5);
  ShellWindow = _GetShellWindow(*((struct tagDESKTOP **)v10 + 61));
  v13 = *(_QWORD *)(W32GetUserGdiSessionState(v12) + 40);
  if ( (PsGetCurrentProcess(v14) == v13
     || (CurrentProcess = PsGetCurrentProcess(v15), (unsigned int)PsIsProtectedProcess(CurrentProcess)))
    && ShellWindow )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)ShellWindow);
    v18 = xxxSendNotifyMessage(ShellWindow, 0x34u, 5uLL, 0LL, 1);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  else
  {
    v4 = 1;
    v18 = SetGlobalWallpaperSettings((const struct tagWALLPAPERSETTINGS *)v25);
  }
  if ( v18 && v4 )
  {
    v20 = PtiCurrent(v17);
    if ( (unsigned int)IsThreadDesktopComposed(v20) )
    {
      v23 = (void *)ReferenceDwmApiPort(v22, v21);
      DwmAsyncNotifyWallpaperChange(v23);
    }
    xxxNotifyShellOfWallpaperChange(v22);
  }
  return v18;
}
