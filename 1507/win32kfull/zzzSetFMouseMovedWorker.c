/*
 * XREFs of zzzSetFMouseMovedWorker @ 0x1C008D08C
 * Callers:
 *     zzzSetFMouseMoved @ 0x1C00442B0 (zzzSetFMouseMoved.c)
 *     ProcessQueuedMouseEvents @ 0x1C004B12C (ProcessQueuedMouseEvents.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00034B8 (IsAdaptiveQueueDetachExempted.c)
 *     GetAppCompatFlags2QuadWord @ 0x1C0040280 (GetAppCompatFlags2QuadWord.c)
 *     LogMDAQueueOp @ 0x1C00433CC (LogMDAQueueOp.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0065EE4 (IsToplevelWindowDesktopComposed.c)
 *     DetermineInputTarget @ 0x1C008BA5C (DetermineInputTarget.c)
 *     PostMoveToPwnd @ 0x1C008BBEC (PostMoveToPwnd.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     WakeSomeone @ 0x1C0090208 (WakeSomeone.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 *     UpdateRawMouseMode @ 0x1C0090674 (UpdateRawMouseMode.c)
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 *     LogicalCursorPos @ 0x1C0090A74 (LogicalCursorPos.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0090AE8 (CoalesceInputSourceMouseMoves.c)
 *     IsPointerPromotedMouseMessage @ 0x1C0090B4C (IsPointerPromotedMouseMessage.c)
 *     UpdateLogicalCursorPos @ 0x1C0090B78 (UpdateLogicalCursorPos.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C0124320 (DwmAsyncTopLevelMouseLeave.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetFMouseMovedWorker(__int64 a1, __int64 *a2, int a3, unsigned __int64 *a4, int a5)
{
  struct tagWND *v7; // rax
  __int64 v8; // rbx
  unsigned int MonitorFlags; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rax
  __int64 v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // [rsp+40h] [rbp-10h] BYREF
  __int64 v39; // [rsp+48h] [rbp-8h] BYREF
  __int64 v40; // [rsp+88h] [rbp+38h] BYREF

  v40 = *(_QWORD *)(gpsi + 3976LL);
  v39 = *(_QWORD *)(gpsi + 3968LL);
  if ( a2 )
    v38 = *a2;
  else
    v38 = 0x400000000LL;
  v7 = DetermineInputTarget(&v40, (__int64)a2, 0LL, (__int64)&v39);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  if ( a5 )
  {
    v22 = LogicalCursorPos(*((_QWORD *)v7 + 2));
    if ( v22 == v40 )
      return 0LL;
  }
  MonitorFlags = GetMonitorFlags(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 384LL));
  UpdateLogicalCursorPos(v40, MonitorFlags);
  if ( (unsigned int)IsPointerPromotedMouseMessage(512LL, &v38) )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v11 = gbEnforceUIPI;
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 384) + 832LL);
    v35 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 832LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v35 <= (unsigned int)v12 )
      {
        if ( (_DWORD)v35 != (_DWORD)v12
          || (v36 = HIDWORD(v35), v12 >>= 32, (_DWORD)v36 != (_DWORD)v12) && (_DWORD)v36 != -1 && (_DWORD)v12 != -1 )
        {
          v33 = *(_QWORD *)(v10 + 392);
          v34 = gptiCurrent;
          goto LABEL_46;
        }
      }
    }
  }
  if ( (unsigned int)IsDwmInputThread(v11, v10, v12, v13) )
  {
    if ( a4 )
    {
      v28 = *(_QWORD *)(v8 + 16);
      v29 = *a4;
      v30 = *(_QWORD *)(*(_QWORD *)(v28 + 384) + 832LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v29 <= (unsigned int)v30 )
        {
          if ( (_DWORD)v29 != (_DWORD)v30
            || (v31 = HIDWORD(v29), v32 = HIDWORD(v30), (_DWORD)v31 != (_DWORD)v32)
            && (_DWORD)v31 != -1
            && (_DWORD)v32 != -1 )
          {
            v10 = *(_QWORD *)(v8 + 16);
            v33 = *(_QWORD *)(v28 + 392);
            v34 = gptiCurrent;
LABEL_46:
            EtwTraceUIPIInputError(v34, v10, v33, *(_QWORD *)(v33 + 372), 1);
            return 0LL;
          }
        }
      }
    }
  }
  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (v8 != gspwndCursorNC || (unsigned int)PtInRect(v8 + 128, v40)) )
  {
    v27 = (void *)ReferenceDwmApiPort(v24, v23, v25, v26);
    DwmAsyncTopLevelMouseLeave(v27);
  }
  if ( (unsigned int)PtInRect(v8 + 128, v40) )
    HMAssignmentUnlock(&gspwndCursorNC);
  else
    HMAssignmentLock(&gspwndCursorNC, v8);
  v15 = (_QWORD *)HMAssignmentLock(&gspwndCursor, v8);
  v16 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 392LL);
  ++gdwDeferWinEvent;
  v17 = gpqCursor;
  if ( v16 != gpqCursor )
  {
    if ( gpqCursor )
    {
      if ( *(_QWORD *)(gpqCursor + 64LL) )
      {
        CoalesceInputSourceMouseMoves(gpqCursor, &v38);
        *(_DWORD *)(gpqCursor + 332LL) |= 0x20u;
        EtwTraceWakePump(*(_QWORD *)(*(_QWORD *)(gpqCursor + 64LL) + 16LL), 0LL, 512LL);
        SetWakeBit(*(_QWORD *)(*(_QWORD *)(gpqCursor + 64LL) + 16LL), 2LL);
      }
      if ( v15 )
      {
        if ( *v15 != *(_QWORD *)v8 )
        {
          v21 = v15[3];
          v14 = *(unsigned int *)(v21 + 32);
          if ( (v14 & 0x5C0) != 0 )
          {
            PostEventMessageEx(
              *(_QWORD *)(*(_QWORD *)(v21 + 176) + 16LL),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 176) + 16LL) + 392LL),
              11,
              *(_QWORD *)(v21 + 176),
              v14,
              *(int *)(v21 + 184),
              1472LL,
              0LL);
            *(_DWORD *)(v21 + 32) &= 0xFFFFFA3F;
          }
        }
      }
    }
    gpqCursor = v16;
    zzzUpdateCursorImage(v17, v14);
  }
  CoalesceInputSourceMouseMoves(v16, &v38);
  *(_DWORD *)(v16 + 332) |= 0x20u;
  *(_QWORD *)(v16 + 48) = *(_QWORD *)(v8 + 16);
  UpdateRawMouseMode(v16);
  if ( gfShellFrameHangResilient )
  {
    v18 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v18 + 600) )
    {
      v37 = *(_QWORD *)(v18 + 600);
      if ( (*(_DWORD *)(v18 + 1080) & 0x40000) != 0
        && (*(_DWORD *)(v37 + 180) & 0x100000) != 0
        && *(_QWORD *)(v18 + 1224) )
      {
        if ( !*(_DWORD *)(v37 + 304) )
          *(_DWORD *)(v37 + 304) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( !IsAdaptiveQueueDetachExempted((_QWORD *)v18) )
        {
          LogMDAQueueOp(0xD4u, v18, 0LL, 0);
          KeSetEvent(*(PRKEVENT *)(v18 + 1224), 1, 0);
        }
      }
    }
  }
  EtwTraceWakePump(*(_QWORD *)(v16 + 48), v8, 512LL);
  *(_QWORD *)(v16 + 144) = v40;
  if ( IsCompositionInputWindow((struct tagWND *)v8) )
    PostMoveToPwnd(v16, v8, a3);
  WakeSomeone(v16, 0LL, 512LL, 0LL);
  v19 = *(_QWORD *)(v16 + 96);
  if ( v19 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v19 + 16)) & 0x2000000000000LL) != 0 )
    PostMoveToPwnd(v16, 0LL, 0);
  gdwMouseMoveExtraInfo = 0LL;
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return v16;
}
