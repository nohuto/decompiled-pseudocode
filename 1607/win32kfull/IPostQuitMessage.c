/*
 * XREFs of IPostQuitMessage @ 0x1C00ED274
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00ED0C4 (-TerminateDesktopThreads@@YAXXZ.c)
 *     _PostQuitMessage @ 0x1C00ED260 (_PostQuitMessage.c)
 * Callees:
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     LogQMsg @ 0x1C01CB178 (LogQMsg.c)
 */

__int64 __fastcall IPostQuitMessage(__int64 a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  _QWORD v6[21]; // [rsp+20h] [rbp-A8h] BYREF

  v3 = a2;
  if ( gMsgQLog )
  {
    memset(v6, 0, 0x98uLL);
    v6[2] = 0LL;
    v6[5] = 0LL;
    LODWORD(v6[3]) = 18;
    v6[4] = v3;
    LogQMsg(v6);
  }
  EtwTraceWakePump(a1, 0LL, 18LL);
  *(_DWORD *)(a1 + 440) |= 0x40000000u;
  *(_DWORD *)(a1 + 504) = v3;
  SetWakeBit(a1, 264LL, v4);
  return 1LL;
}
