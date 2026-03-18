/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D8FD8
 * Callers:
 *     xxxSendInput @ 0x1C0047E98 (xxxSendInput.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0041278 (IsForegroundShellFrameQueueAccessible.c)
 *     QueueMouseEvent @ 0x1C004AE08 (QueueMouseEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 *     CheckGrantedAccess @ 0x1C005CD60 (CheckGrantedAccess.c)
 *     xxxMoveEvent @ 0x1C00F6C78 (xxxMoveEvent.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C012D4DC (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     SetLastNtError @ 0x1C02D812C (SetLastNtError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMouseEventDirect(
        unsigned int a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r13
  unsigned __int128 v15; // rax
  __int64 v16; // rcx
  int v17; // r12d
  unsigned int v18; // ebx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  ULONG v24; // ebx
  USHORT v25; // ax
  unsigned int v26; // r8d
  unsigned int v27; // edi
  unsigned int v28; // ecx
  struct tagPOINT v29; // [rsp+28h] [rbp-91h]
  __int64 v30; // [rsp+58h] [rbp-61h]
  int v31; // [rsp+98h] [rbp-21h]
  struct _MOUSE_INPUT_DATA v34; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+7h] BYREF
  int v36; // [rsp+C8h] [rbp+Fh]

  v35 = 0LL;
  v31 = 1;
  if ( *(_QWORD *)(gptiCurrent + 416LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 776LL), 0x20u)
    && PsGetCurrentProcess(v13, v12) != gpepCSRSS )
  {
    SetLastNtError(3221225506LL);
    return 0LL;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  v36 = a4 & 0x100000;
  if ( (a4 & 0x100000) != 0 )
  {
    if ( (a4 & 0x1FF) == 0 )
      goto LABEL_11;
    return 1LL;
  }
  if ( gpqForeground )
  {
    v19 = *(_QWORD *)(gptiCurrent + 384LL);
    v20 = *(_QWORD *)(gpqForeground + 372LL);
    v21 = *(_QWORD *)(v19 + 832);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v21 <= (unsigned int)v20 )
      {
        if ( (_DWORD)v21 != (_DWORD)v20
          || (v22 = HIDWORD(v21), v23 = HIDWORD(v20), (_DWORD)v22 != (_DWORD)v23)
          && (_DWORD)v22 != -1
          && (_DWORD)v23 != -1 )
        {
          if ( *(int *)(v19 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
          {
            EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
            return 1LL;
          }
        }
      }
    }
  }
LABEL_11:
  v14 = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, a1, a2);
  if ( !a5 )
  {
    v15 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    v14 = *((_QWORD *)&v15 + 1);
  }
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 384LL);
  v16 = 327680LL;
  if ( (a4 & 0x50000) == 0x50000 )
    return 0LL;
  v17 = 0;
  v18 = a4 & 0x187E;
  BYTE8(v15) = (a4 & 0x180) != 0;
  LOBYTE(v16) = (a4 & 0x800) != 0 || (a4 & 0x1000) != 0;
  if ( ((unsigned __int8)v16 & BYTE8(v15)) != 0 )
  {
    v18 = a4 & 0x7E;
  }
  else
  {
    v16 = 6144LL;
    if ( (a4 & 0x1800) == 0x1800 )
    {
      v18 = a4 & 0x7E;
    }
    else if ( (a4 & 0x1800) != 0 )
    {
      if ( a3 > 32766 )
      {
        v17 = 0x7FFF;
      }
      else
      {
        v17 = a3;
        if ( a3 < -32768 )
          v17 = -32768;
      }
    }
    else if ( (a3 & 0xFFFFFFFC) == 0 )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( (a3 & 1) != 0 )
          v18 |= 0x80u;
        if ( (a3 & 2) != 0 )
          v18 |= 0x200u;
      }
      if ( (a4 & 0x100) != 0 )
      {
        if ( (a3 & 1) != 0 )
          v18 |= 0x100u;
        if ( (a3 & 2) != 0 )
          v18 |= 0x400u;
      }
    }
  }
  v24 = v18 >> 1;
  v34.UnitId = -2;
  v25 = (a4 & 0x8000) != 0;
  v34.Flags = v25;
  if ( (a4 & 0x4000) != 0 )
  {
    v25 |= 2u;
    v34.Flags = v25;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v25 |= 8u;
    v34.Flags = v25;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v25 |= 0x20u;
    v34.Flags = v25;
  }
  if ( (a4 & 0x10000) != 0 )
  {
    v25 |= 0x10u;
    v31 = 0;
    v34.Flags = v25;
  }
  if ( (a4 & 0x40000) != 0 )
  {
    v31 = 0;
    v34.Flags = v25 | 0x40;
  }
  v34.Buttons = v24;
  LOWORD(v15) = HIWORD(v24);
  if ( v17 )
    LOWORD(v15) = v17;
  v34.LastY = a2;
  v34.RawButtons = 0;
  v34.ButtonData = v15;
  v34.LastX = a1;
  v34.ExtraInformation = a7;
  UserSessionSwitchLeaveCrit(v16, *((_QWORD *)&v15 + 1));
  if ( (a4 & 1) != 0 )
  {
    v26 = a4;
    v27 = a2;
    xxxMoveEvent(a1, a2, v26, a7, v29, &v34, (struct _SUBPIXELS *)&v35, v14, a6, 1, v30, v31);
  }
  else
  {
    v27 = a2;
  }
  if ( !gbEnforceUIPI || (v28 = 1, *(int *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) >= 0) )
    v28 = 0;
  QueueMouseEvent(
    v24,
    v17,
    a7,
    *(_QWORD *)&gptCursorAsync,
    v14,
    a6,
    0LL,
    (__int64)&v34,
    &v35,
    1u,
    0,
    v36 != 0,
    0,
    v28,
    v36 != 0,
    0,
    0LL,
    0LL);
  if ( !glDitMouseHandling || !gulAnyInputSinkInSubtree )
    ProcessQueuedMouseEvents();
  EnterCrit(1LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v14, a1, v27);
  return 1LL;
}
