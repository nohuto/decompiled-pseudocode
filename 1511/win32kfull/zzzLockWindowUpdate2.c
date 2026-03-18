/*
 * XREFs of zzzLockWindowUpdate2 @ 0x1C0090970
 * Callers:
 *     NtUserLockWindowUpdate @ 0x1C000C8C0 (NtUserLockWindowUpdate.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     xxxFullScreenCleanup @ 0x1C00F6450 (xxxFullScreenCleanup.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     FreeSpb @ 0x1C00098E8 (FreeSpb.c)
 *     SpbCheck @ 0x1C000C7D8 (SpbCheck.c)
 *     SpbCheckPwnd @ 0x1C000C958 (SpbCheckPwnd.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     GetStyleWindow @ 0x1C0054CF0 (GetStyleWindow.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxInternalInvalidate @ 0x1C007D060 (xxxInternalInvalidate.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00907F4 (xxxFlushDeferredWindowEvents.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
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
  int v10; // ecx
  BOOL v11; // esi
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+70h] [rbp+18h] BYREF

  if ( (gdwPUDFlags & 0x20000000) != 0 || gptiLockUpdate && gptiLockUpdate != gptiCurrent && !a2 )
  {
    v10 = 1440;
    goto LABEL_24;
  }
  if ( (a1 != 0LL) == (gptiLockUpdate != 0LL) )
  {
    if ( a2 )
      return 0LL;
    v10 = 87;
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
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 1, 0LL);
  }
  else
  {
    SpbCheck();
    v4 = gspwndLockUpdate;
    v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v12;
    v12[1] = v4;
    if ( v4 )
      ++*((_DWORD *)v4 + 2);
    gptiLockUpdate = 0LL;
    HMAssignmentUnlock(&gspwndLockUpdate);
    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v4, 1, 0LL);
    v5 = 1LL;
    for ( i = *(_QWORD *)(gpDispInfo + 72LL); i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 48) & 2) != 0 )
      {
        if ( *(_QWORD *)(i + 40) )
        {
          v5 = ghrgnSPB1;
          SetRectRgnIndirect(ghrgnSPB1, i + 24);
          v11 = GreCombineRgn(ghrgnSPB1, ghrgnSPB1, *(_QWORD *)(i + 40), 4LL) != 1;
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
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)v4, 2568);
    if ( !StyleWindow )
      StyleWindow = (struct tagWND *)GetDesktopWindow((__int64)v4);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
    ++gdwDeferWinEvent;
    xxxInternalInvalidate(StyleWindow, (HRGN)v5, 0x10485u);
    if ( --gdwDeferWinEvent == 1 && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
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
