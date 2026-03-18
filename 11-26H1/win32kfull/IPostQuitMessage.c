/*
 * XREFs of IPostQuitMessage @ 0x140054E7C
 * Callers:
 *     _PostQuitMessage @ 0x140054D90 (_PostQuitMessage.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x140139558 (-TerminateDesktopThreads@@YAXXZ.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 * Callees:
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  EtwTraceWakePump(a1, 0LL, 18LL);
  _InterlockedOr((volatile signed __int32 *)(a1 + 520), 0x40000000u);
  *(_DWORD *)(a1 + 616) = a2;
  SetWakeBit(a1, 264LL);
  return 1LL;
}
