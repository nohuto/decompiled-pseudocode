/*
 * XREFs of xxxBroadcastPaletteChanged @ 0x1C02155B0
 * Callers:
 *     xxxRealizePalette @ 0x1C013C790 (xxxRealizePalette.c)
 *     xxxFlushPalette @ 0x1C0215630 (xxxFlushPalette.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     xxxRealizeDesktop @ 0x1C01E8E24 (xxxRealizeDesktop.c)
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
    v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v8;
    ++*(_DWORD *)(DesktopWindow + 8);
    v8[1] = DesktopWindow;
    xxxRealizeDesktop(DesktopWindow);
    ThreadUnlock1(v6, v5);
  }
  return xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x311u, v1, 0LL, 1);
}
