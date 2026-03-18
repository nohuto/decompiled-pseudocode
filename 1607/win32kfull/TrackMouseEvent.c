/*
 * XREFs of TrackMouseEvent @ 0x1C010A7AC
 * Callers:
 *     NtUserTrackMouseEvent @ 0x1C010A640 (NtUserTrackMouseEvent.c)
 *     xxxMNMouseMove @ 0x1C0142A74 (xxxMNMouseMove.c)
 * Callees:
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C010A8C8 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall TrackMouseEvent(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // edx

  v2 = *(_QWORD *)(gptiCurrent + 408LL);
  result = ValidateHwnd(*(_QWORD *)(a1 + 8));
  if ( result )
  {
    if ( result != *(_QWORD *)(v2 + 176)
      || (v4 = *(_DWORD *)(a1 + 4), ((unsigned __int8)v4 >> 4) & 1 ^ (*(_DWORD *)(v2 + 184) != 1)) )
    {
      v5 = *(_DWORD *)(a1 + 4);
      if ( (v5 & 0x80000002) == 2 )
        PostMessage(result, ((unsigned __int8)~(_BYTE)v5 >> 4) & 1 | 0x2A2u, 0LL, 0LL);
    }
    else if ( v4 < 0 )
    {
      if ( (v4 & 2) != 0 )
        *(_DWORD *)(v2 + 32) &= ~0x80u;
      if ( (*(_DWORD *)(a1 + 4) & 1) != 0 && (*(_DWORD *)(v2 + 32) & 0x40) != 0 )
      {
        FindTimer(result, 65530LL, 2u, 1, 0LL);
        *(_DWORD *)(v2 + 32) &= ~0x40u;
      }
    }
    else
    {
      if ( (v4 & 2) != 0 )
        *(_DWORD *)(v2 + 32) |= 0x80u;
      if ( (*(_DWORD *)(a1 + 4) & 1) != 0 )
      {
        *(_DWORD *)(v2 + 32) |= 0x40u;
        v6 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(v2 + 204) = v6;
        if ( ((v6 + 1) & 0xFFFFFFFE) == 0 )
          v6 = gdtMouseHover;
        *(_DWORD *)(v2 + 204) = v6;
        ResetMouseHover((struct tagDESKTOP *)v2, *(struct tagPOINT *)(*(_QWORD *)(result + 16) + 676LL));
      }
    }
    return 1LL;
  }
  return result;
}
