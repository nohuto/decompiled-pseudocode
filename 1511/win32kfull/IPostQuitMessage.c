/*
 * XREFs of IPostQuitMessage @ 0x1C009F3C4
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C009F248 (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C009F3B0 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  EtwTraceWakePump(a1, 0LL, 18LL);
  *(_DWORD *)(a1 + 440) |= 0x40000000u;
  *(_DWORD *)(a1 + 504) = a2;
  SetWakeBit(a1, 0x108u);
  return 1LL;
}
