/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C0215704
 * Callers:
 *     xxxRealizePalette @ 0x1C0111BF0 (xxxRealizePalette.c)
 *     xxxFlushPalette @ 0x1C0215780 (xxxFlushPalette.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxRealizeDesktop @ 0x1C01E87F4 (xxxRealizeDesktop.c)
 */

__int64 __fastcall xxxBroadcastPaletteChanged(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rbx
  __int64 DesktopWindow; // rax
  __int64 v3; // r8
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *a1;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v4 || v3 != DesktopWindow )
  {
    v8[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v8;
    ++*(_DWORD *)(DesktopWindow + 8);
    v8[1] = DesktopWindow;
    xxxRealizeDesktop(DesktopWindow);
    ThreadUnlock1(v6, v5);
  }
  return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, v1, 0LL, 1);
}
