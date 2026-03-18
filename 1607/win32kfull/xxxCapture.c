/*
 * XREFs of xxxCapture @ 0x1C00AACF4
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00BB9A4 (xxxSetCapture.c)
 *     xxxMNSetCapture @ 0x1C013B99C (xxxMNSetCapture.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 *     xxxCancelTrackingForThread @ 0x1C0202E30 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 *     xxxSBTrackInit @ 0x1C022C980 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     xxxSendMessageCallback @ 0x1C00AA6E0 (xxxSendMessageCallback.c)
 *     LockCaptureWindow @ 0x1C00AAF40 (LockCaptureWindow.c)
 *     zzzSetFMouseMoved @ 0x1C00DC310 (zzzSetFMouseMoved.c)
 *     xxxCancelMouseMoveTracking @ 0x1C011F634 (xxxCancelMouseMoveTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagWND *__fastcall xxxCapture(_QWORD *a1, __int64 *a2, int a3)
{
  struct tagWND *result; // rax
  int v4; // esi
  struct tagWND *v7; // rdi
  struct tagWND **v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rdi
  _DWORD *v11; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rax
  _QWORD v20[4]; // [rsp+50h] [rbp-38h] BYREF
  char v21; // [rsp+A8h] [rbp+20h] BYREF

  result = gspwndScreenCapture;
  v4 = a3;
  if ( gspwndScreenCapture )
  {
    if ( a3 != 5 )
    {
      if ( a2 )
        return result;
      if ( a3 )
        return result;
      result = (struct tagWND *)*((_QWORD *)gspwndScreenCapture + 2);
      if ( a1[48] == *((_QWORD *)result + 48) )
        return result;
    }
  }
  v7 = 0LL;
  if ( a3 == 5 )
  {
    if ( a2 )
    {
      HMAssignmentLock(&gspwndScreenCapture, a2);
      v8 = &gspwndMouseOwner;
LABEL_54:
      result = (struct tagWND *)HMAssignmentUnlock(v8);
      goto LABEL_7;
    }
    result = (struct tagWND *)HMAssignmentUnlock(&gspwndScreenCapture);
  }
  if ( v4 == 6 )
  {
    result = (struct tagWND *)HMAssignmentLock(gspwndInternalCapture, a2);
    v4 = 2;
  }
  if ( !v4 )
  {
    v8 = (struct tagWND **)gspwndInternalCapture;
    result = (struct tagWND *)gspwndInternalCapture;
    if ( gspwndInternalCapture )
    {
      if ( a1 == *(_QWORD **)(gspwndInternalCapture + 16LL) )
        goto LABEL_54;
    }
  }
LABEL_7:
  v9 = a1[48];
  if ( v9 )
  {
    v10 = a1[51];
    if ( (*(_DWORD *)(v10 + 32) & 0xC0) != 0 && *(_DWORD *)(v10 + 184) == 1 )
    {
      if ( (v19 = *(__int64 **)(v10 + 176), v19 == a2) && v4 != 2
        || v19 == *(__int64 **)(v9 + 72) && *(_DWORD *)(v9 + 116) != 2 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
        xxxCancelMouseMoveTracking(
          *(unsigned int *)(v10 + 32),
          *(_QWORD *)(v10 + 176),
          *(unsigned int *)(v10 + 184),
          192LL);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
      }
    }
    result = (struct tagWND *)LockCaptureWindow(v9, a2);
    v7 = result;
    *(_DWORD *)(v9 + 116) = v4;
  }
  v11 = (_DWORD *)gdwDeferWinEvent;
  ++gdwDeferWinEvent;
  if ( !a2 )
  {
    if ( !v7 )
      goto LABEL_32;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    result = (struct tagWND *)((__int64 (__fastcall *)(_QWORD, _QWORD))zzzSetFMouseMoved)(
                                (LARGE_INTEGER)PerformanceCounter.QuadPart,
                                0LL);
    v11 = (_DWORD *)gdwDeferWinEvent;
  }
  if ( v7 )
  {
    v13 = 1;
    if ( *v11 )
      v13 = 3;
    result = (struct tagWND *)xxxWindowEvent(9u, (__int64 *)v7, 0, 0, v13);
    v11 = (_DWORD *)gdwDeferWinEvent;
  }
  if ( a2 )
  {
    v14 = 1;
    if ( *v11 )
      v14 = 3;
    result = (struct tagWND *)xxxWindowEvent(8u, a2, 0, 0, v14);
    v11 = (_DWORD *)gdwDeferWinEvent;
  }
  if ( v7 && (*((_BYTE *)v7 + 45) & 2) != 0 && *((__int16 *)v7 + 33) >= 0 )
  {
    if ( a1[66] && a2 )
      *(_DWORD *)(v9 + 340) |= 0x100000u;
    v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v20;
    ++*((_DWORD *)v7 + 2);
    v20[1] = v7;
    v15 = (*v11)-- == 1;
    if ( v15 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    if ( a2 )
      v16 = *a2;
    else
      v16 = 0LL;
    xxxSendMessageCallback(v7, 0x215u, 0LL, v16, 0LL, 0LL, 0, 0, 1);
    ThreadUnlock1(v18, v17);
    result = (struct tagWND *)a1[48];
    *((_DWORD *)result + 85) &= ~0x100000u;
    return result;
  }
LABEL_32:
  v15 = (*v11)-- == 1;
  if ( v15 && gpPendingNotifies )
    return (struct tagWND *)xxxFlushDeferredWindowEvents();
  return result;
}
