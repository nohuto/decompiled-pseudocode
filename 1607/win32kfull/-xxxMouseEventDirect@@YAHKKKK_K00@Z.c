/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00@Z @ 0x1C01D14C8
 * Callers:
 *     xxxSendInput @ 0x1C009EC1C (xxxSendInput.c)
 * Callees:
 *     CheckGrantedAccess @ 0x1C007163C (CheckGrantedAccess.c)
 *     IsForegroundShellFrameQueueAccessible @ 0x1C00A9964 (IsForegroundShellFrameQueueAccessible.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C00E0434 (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 *     xxxMoveEvent @ 0x1C011E61C (xxxMoveEvent.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     SetLastNtError @ 0x1C01BF6A0 (SetLastNtError.c)
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
  __int64 v12; // rcx
  unsigned __int64 v13; // r13
  __int64 v14; // rcx
  int v15; // r12d
  unsigned int v16; // ebx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  ULONG v22; // ebx
  USHORT v23; // ax
  USHORT v24; // ax
  unsigned int v25; // r8d
  unsigned int v26; // edi
  unsigned int v27; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-91h]
  __int64 v29; // [rsp+58h] [rbp-61h]
  int v30; // [rsp+98h] [rbp-21h]
  struct _MOUSE_INPUT_DATA v33; // [rsp+A8h] [rbp-11h] BYREF
  int v34; // [rsp+C0h] [rbp+7h]
  __int64 v35; // [rsp+C8h] [rbp+Fh] BYREF

  v35 = 0LL;
  v30 = 1;
  if ( *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 776LL), 0x20u)
    && PsGetCurrentProcess(v12) != gpepCSRSS )
  {
    SetLastNtError(-1073741790);
    return 0LL;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  v34 = a4 & 0x100000;
  if ( (a4 & 0x100000) != 0 )
  {
    if ( (a4 & 0x1FF) == 0 )
      goto LABEL_11;
    return 1LL;
  }
  if ( gpqForeground )
  {
    v17 = *(_QWORD *)(gptiCurrent + 376LL);
    v18 = *(_QWORD *)(gpqForeground + 380LL);
    v19 = *(_QWORD *)(v17 + 824);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v19 <= (unsigned int)v18 )
      {
        if ( (_DWORD)v19 != (_DWORD)v18
          || (v20 = HIDWORD(v19), v21 = HIDWORD(v18), (_DWORD)v20 != (_DWORD)v21)
          && (_DWORD)v20 != -1
          && (_DWORD)v21 != -1 )
        {
          if ( *(int *)(v17 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
          {
            EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
            return 1LL;
          }
        }
      }
    }
  }
LABEL_11:
  v13 = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, a1, a2);
  if ( !a5 )
    v13 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 376LL);
  v14 = 327680LL;
  if ( (a4 & 0x50000) == 0x50000 )
    return 0LL;
  v15 = 0;
  v16 = a4 & 0x187E;
  LOBYTE(v14) = (a4 & 0x800) != 0 || (a4 & 0x1000) != 0;
  if ( ((unsigned __int8)v14 & ((a4 & 0x180) != 0)) != 0 )
  {
    v16 = a4 & 0x7E;
  }
  else
  {
    v14 = 6144LL;
    if ( (a4 & 0x1800) == 0x1800 )
    {
      v16 = a4 & 0x7E;
    }
    else if ( (a4 & 0x1800) != 0 )
    {
      if ( a3 > 32766 )
      {
        v15 = 0x7FFF;
      }
      else
      {
        v15 = a3;
        if ( a3 < -32768 )
          v15 = -32768;
      }
    }
    else if ( (a3 & 0xFFFFFFFC) == 0 )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( (a3 & 1) != 0 )
          v16 |= 0x80u;
        if ( (a3 & 2) != 0 )
          v16 |= 0x200u;
      }
      if ( (a4 & 0x100) != 0 )
      {
        if ( (a3 & 1) != 0 )
          v16 |= 0x100u;
        if ( (a3 & 2) != 0 )
          v16 |= 0x400u;
      }
    }
  }
  v22 = v16 >> 1;
  v33.UnitId = -2;
  v23 = (a4 & 0x8000) != 0;
  v33.Flags = v23;
  if ( (a4 & 0x4000) != 0 )
  {
    v23 |= 2u;
    v33.Flags = v23;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v23 |= 8u;
    v33.Flags = v23;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v23 |= 0x20u;
    v33.Flags = v23;
  }
  if ( (a4 & 0x10000) != 0 )
  {
    v23 |= 0x10u;
    v30 = 0;
    v33.Flags = v23;
  }
  if ( (a4 & 0x40000) != 0 )
  {
    v30 = 0;
    v33.Flags = v23 | 0x40;
  }
  v33.Buttons = v22;
  v24 = HIWORD(v22);
  if ( v15 )
    v24 = v15;
  v33.RawButtons = 0;
  v33.ButtonData = v24;
  v33.LastX = a1;
  v33.LastY = a2;
  v33.ExtraInformation = a7;
  if ( gdwInAtomicOperation )
  {
    v14 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v14, gdwInAtomicOperation);
  if ( (a4 & 1) != 0 )
  {
    v25 = a4;
    v26 = a2;
    xxxMoveEvent(
      a1,
      a2,
      v25,
      a7,
      (struct tagPOINT)BugCheckParameter4,
      &v33,
      (struct _SUBPIXELS *)&v35,
      v13,
      a6,
      1,
      v29,
      v30);
  }
  else
  {
    v26 = a2;
  }
  if ( !gbEnforceUIPI || (v27 = 1, *(int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) >= 0) )
    v27 = 0;
  QueueMouseEvent(
    v22,
    v15,
    a7,
    *(_QWORD *)&gptCursorAsync,
    v13,
    a6,
    0LL,
    (__int64)&v33,
    &v35,
    1u,
    0,
    v34 != 0,
    0,
    v27,
    v34 != 0,
    0,
    0LL,
    0LL);
  if ( !glDitMouseHandling || !gulAnyInputSinkInSubtree )
    ProcessQueuedMouseEvents();
  EnterCrit(0LL, 1LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v13, a1, v26);
  return 1LL;
}
