/*
 * XREFs of TrackMouseEvent @ 0x1401CFE54
 * Callers:
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     NtUserTrackMouseEvent @ 0x1401CFD70 (NtUserTrackMouseEvent.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1401D0068 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall TrackMouseEvent(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdi
  int *v5; // rdx
  int v6; // r8d
  _BOOL8 v7; // rcx
  int v8; // eax
  int v9; // edx

  v2 = *((_QWORD *)PtiCurrent(a1) + 61);
  result = ValidateHwnd(*(_QWORD *)(a1 + 8));
  v4 = result;
  if ( result )
  {
    v5 = (int *)(a1 + 4);
    if ( result == *(_QWORD *)(v2 + 192) && (v7 = *(_DWORD *)(v2 + 200) != 1, v7 == (((unsigned int)*v5 >> 4) & 1)) )
    {
      v6 = *v5;
      if ( *v5 >= 0 )
      {
        if ( (v6 & 2) != 0 )
          *(_DWORD *)(v2 + 48) |= 0x80u;
        if ( (*v5 & 1) != 0 )
        {
          *(_DWORD *)(v2 + 48) |= 0x40u;
          v8 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(v2 + 220) = v8;
          if ( !v8 || v8 == -1 )
            *(_DWORD *)(v2 + 220) = *(_DWORD *)(W32GetUserSessionState(v7, v5) + 16276);
          ResetMouseHover((struct tagDESKTOP *)v2, *(struct tagPOINT *)(*(_QWORD *)(v4 + 16) + 788LL));
        }
      }
      else
      {
        if ( (v6 & 2) != 0 )
          *(_DWORD *)(v2 + 48) &= ~0x80u;
        if ( (*v5 & 1) != 0 && (*(_DWORD *)(v2 + 48) & 0x40) != 0 )
        {
          FindTimer(result, 65530LL, 2u, 1, 0LL);
          *(_DWORD *)(v2 + 48) &= ~0x40u;
        }
      }
    }
    else
    {
      v9 = *v5;
      if ( (v9 & 2) != 0 && v9 >= 0 )
        PostMessage(result, ((v9 & 0x10) == 0) | 0x2A2, 0, 0);
    }
    return 1LL;
  }
  return result;
}
