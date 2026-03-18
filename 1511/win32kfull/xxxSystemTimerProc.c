/*
 * XREFs of xxxSystemTimerProc @ 0x1C00C6990
 * Callers:
 *     <none>
 * Callees:
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     _PostTransformableMessage @ 0x1C0091938 (_PostTransformableMessage.c)
 *     GetMouseKeyFlags @ 0x1C00C6920 (GetMouseKeyFlags.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     zzzAnimateFade @ 0x1C01398D0 (zzzAnimateFade.c)
 *     GetActiveTrackPwnd @ 0x1C01E23E0 (GetActiveTrackPwnd.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01E7BF4 (InvalidateWEFCOMPOSITEDDCEs.c)
 */

__int64 __fastcall xxxSystemTimerProc(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rdi
  __int64 v8; // r10
  int v9; // edx
  unsigned __int64 MouseKeyFlags; // r8
  unsigned int v11; // r11d
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+50h] [rbp+18h]

  v3 = a3;
  if ( a3 > 0xFFFA )
    return FindTimer(a1, v3, 2, 1, 0LL);
  switch ( (_DWORD)a3 )
  {
    case 0xFFF5:
      return InvalidateWEFCOMPOSITEDDCEs();
    case 0xFFF6:
      return zzzAnimateFade();
    case 0xFFF7:
      v12 = *(_QWORD *)(a1 + 16);
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 408) + 176LL);
      if ( v13 && a1 == GetActiveTrackPwnd(v13, 0LL) )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 384) + 332LL) |= 0x200020u;
        SetWakeBit(v12, 2u);
      }
      return FindTimer(a1, v3, 2, 1, 0LL);
    case 0xFFF8:
      return xxxFlashWindow(a1, 1024LL, 0LL);
  }
  if ( (_DWORD)a3 != 65530 )
    return FindTimer(a1, v3, 2, 1, 0LL);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v6 + 408);
  result = *(unsigned int *)(v7 + 32);
  if ( (result & 0x40) != 0 )
  {
    result = *(_QWORD *)(v7 + 176);
    if ( *(_QWORD *)a1 == *(_QWORD *)result )
    {
      v14 = LogicalCursorPos(v6);
      result = PtInRect((_DWORD *)(v7 + 188), v14);
      if ( (_DWORD)result )
      {
        v9 = *(_DWORD *)(v7 + 184);
        if ( v9 == 1 )
        {
          MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*(_BYTE **)(v8 + 384));
          if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
            LODWORD(v14) = *(_DWORD *)(a1 + 136) - v14 - 1;
          else
            LODWORD(v14) = v14 - *(_DWORD *)(a1 + 128);
          HIDWORD(v14) -= *(_DWORD *)(a1 + 132);
        }
        else
        {
          MouseKeyFlags = *(unsigned __int16 *)(v7 + 184);
          v11 = 672;
          if ( MouseKeyFlags - 65 > 4 )
          {
            if ( MouseKeyFlags - 60 <= 4 )
              MouseKeyFlags = (HIWORD(v9) != 0) + 6;
          }
          else
          {
            MouseKeyFlags = 5LL;
          }
        }
        PostTransformableMessage(
          a1,
          v11,
          MouseKeyFlags,
          (unsigned __int16)v14 | (unsigned __int64)(WORD2(v14) << 16),
          0);
        *(_DWORD *)(v7 + 32) &= ~0x40u;
        return FindTimer(a1, v3, 2, 1, 0LL);
      }
    }
  }
  return result;
}
