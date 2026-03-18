/*
 * XREFs of xxxSystemTimerProc @ 0x14024E4E0
 * Callers:
 *     <none>
 * Callees:
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     _PostTransformableMessage @ 0x140020870 (_PostTransformableMessage.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x14011DF60 (InvalidateWEFCOMPOSITEDDCEs.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     GetActiveTrackPwnd @ 0x140296108 (GetActiveTrackPwnd.c)
 *     zzzAnimateFade @ 0x1402A456C (zzzAnimateFade.c)
 */

__int64 __fastcall xxxSystemTimerProc(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned int v8; // r14d
  unsigned int MouseKeyFlags; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+60h] [rbp+18h]

  switch ( a3 )
  {
    case 65525LL:
      return InvalidateWEFCOMPOSITEDDCEs();
    case 65526LL:
      return zzzAnimateFade();
    case 65527LL:
      v12 = *((_QWORD *)a1 + 2);
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 488) + 192LL);
      if ( v13 && a1 == (struct tagWND *)GetActiveTrackPwnd(v13) )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 464) + 436LL) |= 0x200020u;
        SetWakeBit(v12, 2LL);
      }
      return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
    case 65528LL:
      return xxxFlashWindow((__int64)a1, 1024LL, 0);
  }
  if ( a3 != 65530 )
    return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *(_QWORD *)(v5 + 488);
  result = *(unsigned int *)(v6 + 48);
  if ( (result & 0x40) != 0 )
  {
    result = *(_QWORD *)(v6 + 192);
    if ( *(_QWORD *)a1 == *(_QWORD *)result )
    {
      v14 = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL));
      result = PtInRect((_DWORD *)(v6 + 204), v14);
      if ( (_DWORD)result )
      {
        if ( *(_DWORD *)(v6 + 200) == 1 )
        {
          v8 = 673;
          MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(v5 + 464));
          v10 = *((_QWORD *)a1 + 5);
          v11 = MouseKeyFlags;
          if ( (*(_BYTE *)(v10 + 26) & 0x40) != 0 )
            LODWORD(v14) = *(_DWORD *)(v10 + 112) - v14 - 1;
          else
            LODWORD(v14) = v14 - *(_DWORD *)(v10 + 104);
          HIDWORD(v14) -= *(_DWORD *)(v10 + 108);
        }
        else
        {
          v11 = *(unsigned __int16 *)(v6 + 200);
          v8 = 672;
          if ( v11 - 65 > 4 )
          {
            if ( v11 - 60 <= 4 )
              v11 = (HIWORD(*(_DWORD *)(v6 + 200)) != 0) + 6LL;
          }
          else
          {
            v11 = 5LL;
          }
        }
        PostTransformableMessage(a1, v8, v11, (unsigned __int16)v14 | (unsigned __int64)(WORD2(v14) << 16), 0);
        *(_DWORD *)(v6 + 48) &= ~0x40u;
        return FindTimer((__int64)a1, a3, 2u, 1, 0LL);
      }
    }
  }
  return result;
}
