/*
 * XREFs of GetLastTopMostWindow @ 0x140048390
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x140047DFC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1400487E4 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x140049100 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 *     CalcForegroundInsertAfter @ 0x140049328 (CalcForegroundInsertAfter.c)
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14004952C (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     ?_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z @ 0x14008BAC4 (-_GetNextQueueWindow@@YAPEAUtagWND@@PEAU1@HH@Z.c)
 *     LinkWindow @ 0x14012DC64 (LinkWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x14019EDB0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 */

__int64 __fastcall GetLastTopMostWindow(__int64 a1)
{
  __int64 ThreadDesktopWindow; // rax
  __int64 v2; // rdx
  __int64 i; // r8
  struct tagTHREADINFO *v5; // rax

  if ( !a1 || (ThreadDesktopWindow = GetDesktopWindow(a1)) == 0 )
  {
    v5 = PtiCurrent(a1);
    ThreadDesktopWindow = GetThreadDesktopWindow((__int64)v5);
    if ( !ThreadDesktopWindow )
      return 0LL;
  }
  v2 = *(_QWORD *)(ThreadDesktopWindow + 112);
  if ( !v2 || (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 24LL) & 8) == 0 )
    return 0LL;
  for ( i = *(_QWORD *)(v2 + 88); i && (*(_BYTE *)(*(_QWORD *)(i + 40) + 24LL) & 8) != 0; i = *(_QWORD *)(i + 88) )
    v2 = i;
  return v2;
}
