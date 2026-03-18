/*
 * XREFs of xxxCancelTrackingForThread @ 0x1402C88E0
 * Callers:
 *     xxxCancelTracking @ 0x14005359C (xxxCancelTracking.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     bSetDevDragRect @ 0x14009C3F0 (bSetDevDragRect.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     IsInsideMenuLoop @ 0x1401CB018 (IsInsideMenuLoop.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x14025084C (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140296F88 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 */

void __fastcall xxxCancelTrackingForThread(struct tagTHREADINFO *a1, __int64 a2)
{
  struct MOVESIZEDATA *v2; // rdi
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rcx

  if ( a1 )
  {
    v2 = (struct MOVESIZEDATA *)*((_QWORD *)a1 + 88);
    if ( v2 )
    {
      v4 = *((_DWORD *)v2 + 50);
      v5 = (v4 >> 20) & 1;
      if ( ((v4 >> 20) & 1) != 0 )
      {
        DisableDwmSwCursorMoveSize(v5, a2);
        v4 = *((_DWORD *)v2 + 50) & 0xFFEFFFFF;
      }
      *((_DWORD *)v2 + 50) = v4 | 8;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 130, 0, 0) & 0x10) != 0 )
      {
        UserSessionState = W32GetUserSessionState(v5, a2);
        bSetDevDragRect(*(Gre::Base **)(*(_QWORD *)(UserSessionState + 56968) + 40LL), 0LL, 0LL, 0);
        if ( (*((_DWORD *)v2 + 50) & 0x20) == 0 )
          xxxDrawDragRect(v2, 0LL, 2u);
      }
      _InterlockedAnd((volatile signed __int32 *)a1 + 130, 0xFFFFFFEF);
      if ( *((_QWORD *)a1 + 58) )
        SetWakeBit((__int64)a1, 2LL);
      if ( (unsigned int)IsInsideMenuLoop((__int64)a1) )
      {
        v7 = *((_QWORD *)a1 + 88);
        if ( v7 )
          PostMessage(*(_QWORD *)(v7 + 16), 31, 0, 0);
      }
      xxxCapture(a1, 0LL, 0);
    }
  }
}
