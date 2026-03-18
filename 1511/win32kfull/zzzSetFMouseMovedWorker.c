/*
 * XREFs of zzzSetFMouseMovedWorker @ 0x1C0065D9C
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ProcessQueuedMouseEvents @ 0x1C00852E0 (ProcessQueuedMouseEvents.c)
 *     zzzSetFMouseMoved @ 0x1C008BF80 (zzzSetFMouseMoved.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0001CBC (IsAdaptiveQueueDetachExempted.c)
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C0051C7C (WakeSomeone.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     UpdateRawMouseMode @ 0x1C00537A0 (UpdateRawMouseMode.c)
 *     zzzUpdateCursorImage @ 0x1C0053910 (zzzUpdateCursorImage.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     PostMoveToPwnd @ 0x1C0065C2C (PostMoveToPwnd.c)
 *     DetermineInputTarget @ 0x1C0066180 (DetermineInputTarget.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0066AD8 (CoalesceInputSourceMouseMoves.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0066B3C (IsPointerPromotedMouseMessage.c)
 *     UpdateLogicalCursorPos @ 0x1C0066B68 (UpdateLogicalCursorPos.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C00C9EF0 (GetAppCompatFlags2QuadWord.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C0111B0C (DwmAsyncTopLevelMouseLeave.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetFMouseMovedWorker(__int64 a1, __int64 *a2, int a3, unsigned __int64 *a4, int a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int MonitorFlags; // eax
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // rax
  __int64 v23; // r10
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // [rsp+40h] [rbp-10h] BYREF
  __int64 v37; // [rsp+48h] [rbp-8h] BYREF
  __int64 v38; // [rsp+88h] [rbp+38h] BYREF

  v38 = *(_QWORD *)(gpsi + 3976LL);
  v37 = *(_QWORD *)(gpsi + 3968LL);
  if ( a2 )
    v36 = *a2;
  else
    v36 = 0x400000000LL;
  v7 = DetermineInputTarget((unsigned int)&v38, (_DWORD)a2, 0, (unsigned int)&v37, a1);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  if ( a5 )
  {
    v17 = LogicalCursorPos(*(_QWORD *)(v7 + 16));
    if ( v17 == v38 )
      return 0LL;
  }
  MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 376LL));
  UpdateLogicalCursorPos(v38, MonitorFlags);
  if ( (unsigned int)IsPointerPromotedMouseMessage(512LL, &v36) )
  {
    v28 = *(_QWORD *)(v8 + 16);
    v31 = *(_QWORD *)(*(_QWORD *)(v28 + 376) + 832LL);
    v32 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 832LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v32 <= (unsigned int)v31 )
      {
        if ( (_DWORD)v32 != (_DWORD)v31
          || (v33 = HIDWORD(v32), v34 = HIDWORD(v31), (_DWORD)v33 != (_DWORD)v34)
          && (_DWORD)v33 != -1
          && (_DWORD)v34 != -1 )
        {
          v29 = *(_QWORD *)(v28 + 384);
          v30 = gptiCurrent;
          goto LABEL_46;
        }
      }
    }
  }
  if ( (unsigned int)IsDwmInputThread() )
  {
    if ( a4 )
    {
      v23 = *(_QWORD *)(v8 + 16);
      v24 = *a4;
      v25 = *(_QWORD *)(*(_QWORD *)(v23 + 376) + 832LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v24 <= (unsigned int)v25 )
        {
          if ( (_DWORD)v24 != (_DWORD)v25
            || (v26 = HIDWORD(v24), v27 = HIDWORD(v25), (_DWORD)v26 != (_DWORD)v27)
            && (_DWORD)v27 != -1
            && (_DWORD)v26 != -1 )
          {
            v28 = *(_QWORD *)(v8 + 16);
            v29 = *(_QWORD *)(v23 + 384);
            v30 = gptiCurrent;
LABEL_46:
            EtwTraceUIPIInputError(v30, v28, v29, *(_QWORD *)(v29 + 372), 1);
            return 0LL;
          }
        }
      }
    }
  }
  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (v8 != gspwndCursorNC || (unsigned int)PtInRect(v8 + 128, v38)) )
  {
    v22 = (void *)ReferenceDwmApiPort(v19, v18, v20, v21);
    DwmAsyncTopLevelMouseLeave(v22);
  }
  if ( (unsigned int)PtInRect(v8 + 128, v38) )
    HMAssignmentUnlock(&gspwndCursorNC);
  else
    HMAssignmentLock(&gspwndCursorNC, v8);
  v10 = (_QWORD *)HMAssignmentLock(&gspwndCursor, v8);
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL);
  ++gdwDeferWinEvent;
  if ( v11 != gpqCursor )
  {
    if ( gpqCursor )
    {
      if ( *(_QWORD *)(gpqCursor + 64LL) )
      {
        CoalesceInputSourceMouseMoves(gpqCursor, &v36);
        *(_DWORD *)(gpqCursor + 332LL) |= 0x20u;
        EtwTraceWakePump(*(_QWORD *)(*(_QWORD *)(gpqCursor + 64LL) + 16LL), 0LL, 512LL);
        SetWakeBit(*(_QWORD *)(*(_QWORD *)(gpqCursor + 64LL) + 16LL), 2u);
      }
      if ( v10 )
      {
        if ( *v10 != *(_QWORD *)v8 )
        {
          v15 = v10[3];
          v16 = *(_DWORD *)(v15 + 32);
          if ( (v16 & 0x5C0) != 0 )
          {
            PostEventMessageEx(
              *(_QWORD *)(*(_QWORD *)(v15 + 176) + 16LL),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 176) + 16LL) + 384LL),
              0xBu,
              *(_QWORD *)(v15 + 176),
              v16,
              *(int *)(v15 + 184),
              1472LL,
              0LL);
            *(_DWORD *)(v15 + 32) &= 0xFFFFFA3F;
          }
        }
      }
    }
    gpqCursor = v11;
    zzzUpdateCursorImage();
  }
  CoalesceInputSourceMouseMoves(v11, &v36);
  *(_DWORD *)(v11 + 332) |= 0x20u;
  *(_QWORD *)(v11 + 48) = *(_QWORD *)(v8 + 16);
  UpdateRawMouseMode(v11);
  if ( gfShellFrameHangResilient )
  {
    v12 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v12 + 592) )
    {
      v35 = *(_QWORD *)(v12 + 592);
      if ( (*(_DWORD *)(v12 + 1072) & 0x40000) != 0
        && (*(_DWORD *)(v35 + 180) & 0x100000) != 0
        && *(_QWORD *)(v12 + 1216) )
      {
        if ( !*(_DWORD *)(v35 + 304) )
          *(_DWORD *)(v35 + 304) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( !IsAdaptiveQueueDetachExempted(v12) )
          KeSetEvent(*(PRKEVENT *)(v12 + 1216), 1, 0);
      }
    }
  }
  EtwTraceWakePump(*(_QWORD *)(v11 + 48), v8, 512LL);
  *(_QWORD *)(v11 + 144) = v38;
  if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v8) )
    PostMoveToPwnd(v11, v8, a3);
  WakeSomeone((_QWORD *)v11, 0LL, 0x200u, 0LL);
  v13 = *(_QWORD *)(v11 + 96);
  if ( v13 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v13 + 16)) & 0x2000000000000LL) != 0 )
    PostMoveToPwnd(v11, 0LL, 0);
  gdwMouseMoveExtraInfo = 0LL;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return v11;
}
