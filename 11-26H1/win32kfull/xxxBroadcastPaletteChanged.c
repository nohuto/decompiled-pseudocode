/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x14028AEA0
 * Callers:
 *     xxxFlushPalette @ 0x14028AE60 (xxxFlushPalette.c)
 *     xxxRealizePalette @ 0x140292500 (xxxRealizePalette.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     xxxRealizeDesktop @ 0x1402A52A0 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxBroadcastPaletteChanged(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdi
  __int64 DesktopWindow; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  int v5; // edx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v4 = DesktopWindow;
  if ( v5 || v3 != DesktopWindow )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, DesktopWindow);
    xxxRealizeDesktop(v4);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, v1, 0LL, 1);
}
