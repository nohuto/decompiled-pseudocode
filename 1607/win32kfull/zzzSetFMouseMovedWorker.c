/*
 * XREFs of zzzSetFMouseMovedWorker @ 0x1C00587A4
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzSetFMouseMoved @ 0x1C00DC310 (zzzSetFMouseMoved.c)
 *     ProcessQueuedMouseEvents @ 0x1C00E11B4 (ProcessQueuedMouseEvents.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006EE0 (IsAdaptiveQueueDetachExempted.c)
 *     PostMoveToPwnd @ 0x1C0056F40 (PostMoveToPwnd.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     UpdateLogicalCursorPos @ 0x1C0058678 (UpdateLogicalCursorPos.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0058710 (IsPointerPromotedMouseMessage.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C005873C (CoalesceInputSourceMouseMoves.c)
 *     DetermineInputTarget @ 0x1C0058B9C (DetermineInputTarget.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C005B3C4 (WakeSomeone.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     UpdateRawMouseMode @ 0x1C005B7C4 (UpdateRawMouseMode.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     zzzUpdateCursorImage @ 0x1C005C620 (zzzUpdateCursorImage.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C010FCE0 (GetAppCompatFlags2QuadWord.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C0132D58 (DwmAsyncTopLevelMouseLeave.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetFMouseMovedWorker(__int64 a1, __int64 *a2, int a3, unsigned __int64 *a4, int a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int MonitorFlagsFromWindow; // eax
  __int64 v10; // r8
  _QWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  int v23; // edx
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // [rsp+40h] [rbp-10h] BYREF
  __int64 v34; // [rsp+48h] [rbp-8h] BYREF
  __int64 v35; // [rsp+88h] [rbp+38h] BYREF

  v35 = *(_QWORD *)(gpsi + 5368LL);
  v34 = *(_QWORD *)(gpsi + 5360LL);
  if ( a2 )
    v33 = *a2;
  else
    v33 = 0x400000000LL;
  v7 = DetermineInputTarget((unsigned int)&v35, (_DWORD)a2, 0, (unsigned int)&v34, a1);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  if ( a5 )
  {
    v21 = LogicalQmsgCursorPos(v7, 0LL);
    if ( v21 == v35 )
      return 0LL;
  }
  MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(v8);
  UpdateLogicalCursorPos(v10, MonitorFlagsFromWindow, v10);
  if ( (unsigned int)IsPointerPromotedMouseMessage(512, &v33) )
  {
    v25 = *(_QWORD *)(v8 + 16);
    v28 = *(_QWORD *)(*(_QWORD *)(v25 + 376) + 824LL);
    v29 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 824LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v29 <= (unsigned int)v28 )
      {
        if ( (_DWORD)v29 != (_DWORD)v28
          || (v30 = HIDWORD(v29), v31 = HIDWORD(v28), (_DWORD)v30 != (_DWORD)v31)
          && (_DWORD)v30 != -1
          && (_DWORD)v31 != -1 )
        {
          v26 = *(_QWORD *)(v25 + 384);
          v27 = gptiCurrent;
          goto LABEL_46;
        }
      }
    }
  }
  if ( (unsigned int)IsDwmInputThread() )
  {
    if ( a4 )
    {
      v16 = *(_QWORD *)(v8 + 16);
      v17 = *a4;
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 376) + 824LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v17 <= (unsigned int)v18 )
        {
          if ( (_DWORD)v17 != (_DWORD)v18
            || (v19 = HIDWORD(v17), v20 = HIDWORD(v18), (_DWORD)v19 != (_DWORD)v20)
            && (_DWORD)v20 != -1
            && (_DWORD)v19 != -1 )
          {
            v25 = *(_QWORD *)(v8 + 16);
            v26 = *(_QWORD *)(v16 + 384);
            v27 = gptiCurrent;
LABEL_46:
            EtwTraceUIPIInputError(v27, v25, v26, *(_QWORD *)(v26 + 380), 1);
            return 0LL;
          }
        }
      }
    }
  }
  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed()
    && (v8 != gspwndCursorNC || (unsigned int)PtInRect(v8 + 128, v35)) )
  {
    v24 = (void *)ReferenceDwmApiPort();
    DwmAsyncTopLevelMouseLeave(v24);
  }
  if ( (unsigned int)PtInRect(v8 + 128, v35) )
    HMAssignmentUnlock(&gspwndCursorNC);
  else
    HMAssignmentLock(&gspwndCursorNC, v8);
  v11 = (_QWORD *)HMAssignmentLock(&gspwndCursor, v8);
  v12 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL);
  ++gdwDeferWinEvent;
  if ( v12 != gpqCursor )
  {
    if ( gpqCursor )
    {
      if ( *(_QWORD *)(gpqCursor + 72LL) )
      {
        CoalesceInputSourceMouseMoves(gpqCursor, &v33);
        *(_DWORD *)(gpqCursor + 340LL) |= 0x20u;
        EtwTraceWakePump(*(_QWORD *)(*(_QWORD *)(gpqCursor + 72LL) + 16LL), 0LL, 512LL);
        SetWakeBit(*(_QWORD *)(*(_QWORD *)(gpqCursor + 72LL) + 16LL), 2LL);
      }
      if ( v11 )
      {
        if ( *v11 != *(_QWORD *)v8 )
        {
          v22 = v11[3];
          v23 = *(_DWORD *)(v22 + 32);
          if ( (v23 & 0x5C0) != 0 )
          {
            PostEventMessageEx(
              *(_QWORD *)(*(_QWORD *)(v22 + 176) + 16LL),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 176) + 16LL) + 384LL),
              11,
              *(_QWORD *)(v22 + 176),
              v23,
              *(int *)(v22 + 184),
              1472LL,
              0LL);
            *(_DWORD *)(v22 + 32) &= 0xFFFFFA3F;
          }
        }
      }
    }
    gpqCursor = v12;
    zzzUpdateCursorImage();
  }
  CoalesceInputSourceMouseMoves((_DWORD *)v12, &v33);
  *(_DWORD *)(v12 + 340) |= 0x20u;
  *(_QWORD *)(v12 + 56) = *(_QWORD *)(v8 + 16);
  UpdateRawMouseMode(v12);
  if ( gfShellFrameHangResilient )
  {
    v13 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v13 + 592) )
    {
      v32 = *(_QWORD *)(v13 + 592);
      if ( (*(_DWORD *)(v13 + 1096) & 0x40000) != 0
        && (*(_DWORD *)(v32 + 180) & 0x100000) != 0
        && *(_QWORD *)(v13 + 1240) )
      {
        if ( !*(_DWORD *)(v32 + 304) )
          *(_DWORD *)(v32 + 304) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( !IsAdaptiveQueueDetachExempted(v13) )
          KeSetEvent(*(PRKEVENT *)(v13 + 1240), 1, 0);
      }
    }
  }
  EtwTraceWakePump(*(_QWORD *)(v12 + 56), v8, 512LL);
  *(_QWORD *)(v12 + 152) = v35;
  if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v8) )
    PostMoveToPwnd(v12, v8, a3);
  WakeSomeone(v12, 0LL, 512LL, 0LL);
  v14 = *(_QWORD *)(v12 + 104);
  if ( v14 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v14 + 16)) & 0x2000000000000LL) != 0 )
    PostMoveToPwnd(v12, 0LL, 0);
  gdwMouseMoveExtraInfo = 0LL;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return v12;
}
