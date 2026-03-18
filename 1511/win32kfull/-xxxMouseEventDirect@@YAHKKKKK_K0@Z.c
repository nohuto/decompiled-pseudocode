/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKKK_K0@Z @ 0x1C0084AE8
 * Callers:
 *     xxxSendInput @ 0x1C0082A04 (xxxSendInput.c)
 * Callees:
 *     IsForegroundShellFrameQueueAccessible @ 0x1C0003224 (IsForegroundShellFrameQueueAccessible.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?ResetAccessibilityCountersOnMouseInput@@YAXXZ @ 0x1C0084F90 (-ResetAccessibilityCountersOnMouseInput@@YAXXZ.c)
 *     QueueMouseEvent @ 0x1C0084FBC (QueueMouseEvent.c)
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 *     CheckGrantedAccess @ 0x1C00858B4 (CheckGrantedAccess.c)
 *     xxxMoveEvent @ 0x1C0088630 (xxxMoveEvent.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMouseEventDirect(
        unsigned int a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  ULONG v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r13d
  unsigned int v21; // ebx
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned int v27; // ebx
  __int16 v28; // ax
  __int16 v29; // ax
  __int64 v30; // r8
  unsigned int v31; // edi
  int v32; // ecx
  __int16 v35; // [rsp+A8h] [rbp-11h] BYREF
  __int16 v36; // [rsp+AAh] [rbp-Fh]
  unsigned int v37; // [rsp+ACh] [rbp-Dh]
  int v38; // [rsp+B0h] [rbp-9h]
  unsigned int v39; // [rsp+B4h] [rbp-5h]
  unsigned int v40; // [rsp+B8h] [rbp-1h]
  int v41; // [rsp+BCh] [rbp+3h]
  _DWORD v42[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v43; // [rsp+C8h] [rbp+Fh]

  v42[0] = 0;
  v42[1] = 0;
  if ( *(_QWORD *)(gptiCurrent + 408LL) != grpdeskRitInput
    || !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 768LL), 32LL)
    && PsGetCurrentProcess(v14, v13, v15, v16) != gpepCSRSS )
  {
    v11 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v11);
    return 0LL;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
    return 1LL;
  v43 = a4 & 0x100000;
  if ( (a4 & 0x100000) != 0 )
  {
    if ( (a4 & 0x1FF) == 0 )
      goto LABEL_11;
    return 1LL;
  }
  if ( gpqForeground )
  {
    v22 = *(_QWORD *)(gptiCurrent + 376LL);
    v23 = *(_QWORD *)(gpqForeground + 372LL);
    v24 = *(_QWORD *)(v22 + 832);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v24 <= (unsigned int)v23 )
      {
        if ( (_DWORD)v24 != (_DWORD)v23
          || (v25 = HIDWORD(v24), v26 = HIDWORD(v23), (_DWORD)v25 != (_DWORD)v26)
          && (_DWORD)v25 != -1
          && (_DWORD)v26 != -1 )
        {
          if ( *(int *)(v22 + 12) >= 0 && !IsForegroundShellFrameQueueAccessible(gptiCurrent) )
          {
            EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 372LL), 1);
            return 1LL;
          }
        }
      }
    }
  }
LABEL_11:
  LODWORD(v17) = a5;
  EtwTraceBeginInjectMouse(a5, a1, a2);
  if ( !a5 )
    v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 376LL);
  v19 = 327680LL;
  if ( (a4 & 0x50000) == 0x50000 )
    return 0LL;
  v20 = 0;
  v21 = a4 & 0x187E;
  LOBYTE(v18) = (a4 & 0x180) != 0;
  LOBYTE(v19) = (a4 & 0x800) != 0 || (a4 & 0x1000) != 0;
  if ( ((unsigned __int8)v19 & (unsigned __int8)v18) != 0 )
  {
    v21 = a4 & 0x7E;
  }
  else
  {
    v19 = 6144LL;
    if ( (a4 & 0x1800) == 0x1800 )
    {
      v21 = a4 & 0x7E;
    }
    else if ( (a4 & 0x1800) != 0 )
    {
      if ( a3 > 32766 )
      {
        v20 = 0x7FFF;
      }
      else
      {
        v20 = a3;
        if ( a3 < -32768 )
          v20 = -32768;
      }
    }
    else if ( (a3 & 0xFFFFFFFC) == 0 )
    {
      if ( (a4 & 0x80u) != 0 )
      {
        if ( (a3 & 1) != 0 )
          v21 |= 0x80u;
        if ( (a3 & 2) != 0 )
          v21 |= 0x200u;
      }
      if ( (a4 & 0x100) != 0 )
      {
        if ( (a3 & 1) != 0 )
          v21 |= 0x100u;
        if ( (a3 & 2) != 0 )
          v21 |= 0x400u;
      }
    }
  }
  v27 = v21 >> 1;
  v35 = -2;
  v28 = (a4 & 0x8000) != 0;
  v36 = v28;
  if ( (a4 & 0x4000) != 0 )
  {
    v28 |= 2u;
    v36 = v28;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v28 |= 8u;
    v36 = v28;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v28 |= 0x20u;
    v36 = v28;
  }
  if ( (a4 & 0x10000) != 0 )
  {
    v28 |= 0x10u;
    v36 = v28;
  }
  if ( (a4 & 0x40000) != 0 )
    v36 = v28 | 0x40;
  v37 = v27;
  v29 = HIWORD(v27);
  if ( v20 )
    v29 = v20;
  v40 = a2;
  v38 = 0;
  HIWORD(v37) = v29;
  v39 = a1;
  v41 = a7;
  UserSessionSwitchLeaveCrit(v19, v18);
  if ( (a4 & 1) != 0 )
  {
    v30 = a4;
    v31 = a2;
    xxxMoveEvent(a1, a2, v30, a7);
  }
  else
  {
    v31 = a2;
  }
  if ( !gbEnforceUIPI || (v32 = 1, *(int *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) >= 0) )
    v32 = 0;
  QueueMouseEvent(
    (unsigned __int16)v27,
    (unsigned __int16)v20,
    a7,
    gptCursorAsync.x,
    v17,
    a6,
    0LL,
    (__int64)&v35,
    (__int64)v42,
    1,
    0,
    v43 != 0,
    0,
    v32,
    v43 != 0,
    0,
    0LL,
    0LL);
  if ( !glDitMouseHandling || !gulAnyInputSinkInSubtree )
    ProcessQueuedMouseEvents();
  EnterCrit(0LL, 1LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v17, a1, v31);
  return 1LL;
}
