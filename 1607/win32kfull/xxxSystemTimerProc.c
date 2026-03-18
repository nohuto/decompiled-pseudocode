/*
 * XREFs of xxxSystemTimerProc @ 0x1C0096EA0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     GetMouseKeyFlags @ 0x1C00948F4 (GetMouseKeyFlags.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     _PostTransformableMessage @ 0x1C009CF34 (_PostTransformableMessage.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     zzzAnimateFade @ 0x1C013FA4C (zzzAnimateFade.c)
 *     GetActiveTrackPwnd @ 0x1C01D8540 (GetActiveTrackPwnd.c)
 *     InvalidateWEFCOMPOSITEDDCEs @ 0x1C01DE444 (InvalidateWEFCOMPOSITEDDCEs.c)
 */

__int64 __fastcall xxxSystemTimerProc(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // esi
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v8; // edx
  __int64 v9; // r8
  int v10; // r10d
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagPOINT v14; // [rsp+50h] [rbp+18h]

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
      v11 = *(_QWORD *)(a1 + 16);
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 408) + 176LL);
      if ( v12 && a1 == GetActiveTrackPwnd(v12, 0LL) )
      {
        *(_DWORD *)(*(_QWORD *)(v11 + 384) + 340LL) |= 0x200020u;
        SetWakeBit(v11, 2LL, v13);
      }
      return FindTimer(a1, v3, 2, 1, 0LL);
    case 0xFFF8:
      return xxxFlashWindow((struct tagWND *)a1);
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
      v14 = LogicalQmsgCursorPos(a1, 0LL, a3);
      result = PtInRect((_DWORD *)(v7 + 188), *(_QWORD *)&v14);
      if ( (_DWORD)result )
      {
        v8 = *(_DWORD *)(v7 + 184);
        if ( v8 == 1 )
        {
          LODWORD(v9) = GetMouseKeyFlags(*(_BYTE **)(v6 + 384));
          if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
            v14.x = *(_DWORD *)(a1 + 136) - v14.x - 1;
          else
            v14.x -= *(_DWORD *)(a1 + 128);
          v14.y -= *(_DWORD *)(a1 + 132);
        }
        else
        {
          v9 = *(unsigned __int16 *)(v7 + 184);
          v10 = 672;
          if ( (unsigned __int64)(v9 - 65) > 4 )
          {
            if ( (unsigned __int64)(v9 - 60) <= 4 )
              LODWORD(v9) = (HIWORD(v8) != 0) + 6;
          }
          else
          {
            LODWORD(v9) = 5;
          }
        }
        PostTransformableMessage(a1, v10, v9, LOWORD(v14.x) | (LOWORD(v14.y) << 16), 0);
        *(_DWORD *)(v7 + 32) &= ~0x40u;
        return FindTimer(a1, v3, 2, 1, 0LL);
      }
    }
  }
  return result;
}
