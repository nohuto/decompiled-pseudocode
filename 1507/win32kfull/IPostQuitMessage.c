/*
 * XREFs of IPostQuitMessage @ 0x1C00F8FD4
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     _PostQuitMessage @ 0x1C00F8FC0 (_PostQuitMessage.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C012CB84 (-TerminateDesktopThreads@@YAXXZ.c)
 * Callees:
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  EtwTraceWakePump(a1, 0LL, 18LL);
  *(_DWORD *)(a1 + 448) |= 0x40000000u;
  *(_DWORD *)(a1 + 512) = a2;
  SetWakeBit(a1, 0x108u);
  return 1LL;
}
