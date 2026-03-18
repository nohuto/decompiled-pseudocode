/*
 * XREFs of xxxMNReleaseCapture @ 0x140178014
 * Callers:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxEndMenu @ 0x140290424 (xxxEndMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 */

void __fastcall xxxMNReleaseCapture(__int64 a1)
{
  struct tagTHREADINFO *v2; // rax
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax

  v2 = PtiCurrent(a1);
  v3 = v2;
  if ( a1 )
  {
    v4 = *(unsigned int *)(a1 + 8);
    if ( (v4 & 0x40000) != 0 )
    {
      LODWORD(v4) = v4 & 0xFFFBFFFF;
      *(_DWORD *)(a1 + 8) = v4;
      *(_DWORD *)(*((_QWORD *)v2 + 58) + 436LL) &= ~0x100000u;
      xxxReleaseCapture(v4);
      if ( *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18928) )
      {
        v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18928);
        if ( *(_QWORD *)(v10 + 120) )
        {
          v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928);
          if ( *(struct tagTHREADINFO **)(*(_QWORD *)(v12 + 120) + 16LL) == v3 )
          {
            UserSessionState = W32GetUserSessionState(v12, v11);
            xxxWindowEvent(0x80000005, *(struct tagWND **)(*(_QWORD *)(UserSessionState + 18928) + 120LL), 0, 1, 33);
          }
        }
      }
    }
  }
}
