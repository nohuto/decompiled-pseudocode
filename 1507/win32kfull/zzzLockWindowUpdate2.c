/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C0044DC8
 * Callers:
 *     NtUserLockWindowUpdate @ 0x1C0009580 (NtUserLockWindowUpdate.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     xxxFullScreenCleanup @ 0x1C00F1500 (xxxFullScreenCleanup.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C0008718 (FreeSpb.c)
 *     SpbCheckPwnd @ 0x1C00095D4 (SpbCheckPwnd.c)
 *     SpbCheck @ 0x1C0009B04 (SpbCheck.c)
 *     xxxInternalInvalidate @ 0x1C000DB50 (xxxInternalInvalidate.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C004FB28 (xxxFlushDeferredWindowEvents.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C0066940 (GetStyleWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00954C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0095664 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     CreateSpb @ 0x1C00FF068 (CreateSpb.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, int a2)
{
  struct tagWND *v4; // rbx
  __int64 v5; // rbp
  __int64 i; // rdi
  struct tagWND *StyleWindow; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  BOOL v11; // esi
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  struct tagWND *v13; // [rsp+28h] [rbp-30h]
  char v14; // [rsp+70h] [rbp+18h] BYREF

  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !a2 )
  {
    v10 = 1440LL;
    goto LABEL_24;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( a2 )
      return 0LL;
    v10 = 87LL;
LABEL_24:
    UserSetLastError(v10);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*gpDispInfo);
  if ( a1 )
  {
    SpbCheckPwnd(a1);
    CreateSpb(a1);
    HMAssignmentLock(&gspwndLockUpdate, a1);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache(a1, 1LL, 0LL);
  }
  else
  {
    SpbCheck();
    v4 = gspwndLockUpdate;
    v12 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v12;
    v13 = v4;
    if ( v4 )
      ++*((_DWORD *)v4 + 2);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache(v4, 1LL, 0LL);
    v5 = 1LL;
    for ( i = *(_QWORD *)(gpDispInfo + 72LL); i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 48) & 2) != 0 )
      {
        if ( *(_QWORD *)(i + 40) )
        {
          v5 = ghrgnSPB1;
          SetRectRgnIndirect(ghrgnSPB1, i + 24);
          v11 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, *(_QWORD *)(i + 40), 4LL, v12, v13) != 1;
        }
        else
        {
          v11 = 0;
        }
        FreeSpb(i);
        if ( !v11 )
          goto LABEL_22;
        break;
      }
    }
    StyleWindow = (struct tagWND *)GetStyleWindow(v4, 2568LL);
    if ( !StyleWindow )
      StyleWindow = (struct tagWND *)GetDesktopWindow(v4);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
    ++gdwDeferWinEvent;
    xxxInternalInvalidate(StyleWindow, (HRGN)v5, 0x10485u);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
LABEL_22:
    SpbCheckPwnd(v4);
    ThreadUnlock1(v9, v8);
  }
  GreUnlockVisRgn(*gpDispInfo);
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return 1LL;
}
