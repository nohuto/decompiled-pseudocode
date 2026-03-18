/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C0121EF4
 * Callers:
 *     NtUserLockWindowUpdate @ 0x1C000DAE0 (NtUserLockWindowUpdate.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxFullScreenCleanup @ 0x1C0118340 (xxxFullScreenCleanup.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C000CAC0 (FreeSpb.c)
 *     SpbCheckPwnd @ 0x1C000DD28 (SpbCheckPwnd.c)
 *     SpbCheck @ 0x1C000E53C (SpbCheck.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0074E94 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetStyleWindow @ 0x1C007A490 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00A7A9C (xxxFlushDeferredWindowEvents.c)
 *     CreateSpb @ 0x1C012210C (CreateSpb.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzLockWindowUpdate2(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct tagWND *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 i; // rdi
  struct tagWND *StyleWindow; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  BOOL v17; // esi
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF
  char v19; // [rsp+70h] [rbp+18h] BYREF

  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !a2 )
  {
    v16 = 1440LL;
    goto LABEL_24;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( a2 )
      return 0LL;
    v16 = 87LL;
LABEL_24:
    UserSetLastError(v16);
    return 0LL;
  }
  ++gdwDeferWinEvent;
  GreLockVisRgn(*gpDispInfo);
  if ( a1 )
  {
    SpbCheckPwnd(a1, v4, v5);
    CreateSpb(a1);
    HMAssignmentLock(&gspwndLockUpdate, a1);
    gptiLockUpdate = gptiCurrent;
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v6 = gspwndLockUpdate;
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    v18[1] = v6;
    if ( v6 )
      ++*((_DWORD *)v6 + 2);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v6, 1, 0LL);
    v9 = 1LL;
    for ( i = *(_QWORD *)(gpDispInfo + 72LL); i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 48) & 2) != 0 )
      {
        if ( *(_QWORD *)(i + 40) )
        {
          v9 = ghrgnSPB1;
          SetRectRgnIndirect(ghrgnSPB1, i + 24);
          v17 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, *(_QWORD *)(i + 40), 4LL) != 1;
        }
        else
        {
          v17 = 0;
        }
        FreeSpb(i, v7, v8);
        if ( !v17 )
          goto LABEL_22;
        break;
      }
    }
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)v6, 2568);
    if ( !StyleWindow )
      StyleWindow = (struct tagWND *)GetDesktopWindow((__int64)v6);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
    ++gdwDeferWinEvent;
    xxxInternalInvalidate(StyleWindow, (HRGN)v9, 0x10485u);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
LABEL_22:
    SpbCheckPwnd(v6, v12, v13);
    ThreadUnlock1(v15, v14);
  }
  GreUnlockVisRgn(*gpDispInfo);
  if ( --gdwDeferWinEvent == 1 )
  {
    if ( gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
  }
  return 1LL;
}
