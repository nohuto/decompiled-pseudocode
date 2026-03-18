/*
 * XREFs of ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x14013D4C4
 * Callers:
 *     xxxSetDeskWallpaper @ 0x14013D534 (xxxSetDeskWallpaper.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z @ 0x14013D9E8 (-_GetShellWindow@@YAPEAUtagWND@@PEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxNotifyShellOfWallpaperChange(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagTHREADINFO *v2; // rax
  struct tagWND *ShellWindow; // rax
  struct tagWND *v4; // rdi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v2 = PtiCurrent(a1);
  ShellWindow = _GetShellWindow(*((struct tagDESKTOP **)v2 + 61));
  v4 = ShellWindow;
  if ( ShellWindow )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)ShellWindow);
    v1 = xxxSendNotifyMessage(v4, 0x34u, 4uLL, 0LL, 1);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  return v1;
}
