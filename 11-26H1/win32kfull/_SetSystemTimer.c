/*
 * XREFs of _SetSystemTimer @ 0x1401DA8CC
 * Callers:
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127A3C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxTrackMouseMove @ 0x14027D0C8 (xxxTrackMouseMove.c)
 *     NtUserSetSystemTimer @ 0x1402BE060 (NtUserSetSystemTimer.c)
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1402F4100 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z @ 0x1402F5100 (-xxxTrackBox@@YAXPEAUtagWND@@I_K_JPEAUtagSBCALC@@@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall SetSystemTimer(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax

  if ( a1 && (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
  {
    if ( a5 )
      return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( CurrentProcessWin32Process == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) )
      return InternalSetTimer(a1, a2, a3, a4, 0, a5 != 0 ? 66 : 2);
    UserSetLastError(5);
  }
  return 0LL;
}
