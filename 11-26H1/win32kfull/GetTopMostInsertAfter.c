/*
 * XREFs of GetTopMostInsertAfter @ 0x140292758
 * Callers:
 *     ?CheckTopmost@@YAHPEAUtagCVR@@@Z @ 0x14004952C (-CheckTopmost@@YAHPEAUtagCVR@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 */

_QWORD *__fastcall GetTopMostInsertAfter(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *i; // rdx

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) != 0x29C )
  {
    v5 = PtiCurrent(v3);
    if ( v5 != *(struct tagTHREADINFO **)(UserSessionState + 19120) )
    {
      v7 = *((_QWORD *)v5 + 57);
      if ( (*(_DWORD *)(v7 + 12) & 0x200000) == 0 )
      {
        v8 = *((_QWORD *)v5 + 61);
        if ( v8 != *(_QWORD *)(W32GetUserSessionState(v7, v6) + 62968)
          && v8 == *(_QWORD *)(*(_QWORD *)(UserSessionState + 19120) + 488LL) )
        {
          DesktopWindow = GetDesktopWindow(a1);
          if ( DesktopWindow == v10 )
          {
            for ( i = *(_QWORD **)(v10 + 112); i && (*(_BYTE *)(i[5] + 24LL) & 8) != 0; i = (_QWORD *)i[11] )
            {
              if ( v11 == i[2] )
                return i;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
