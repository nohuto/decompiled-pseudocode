/*
 * XREFs of xxxSetLayeredWindow @ 0x14014CE10
 * Callers:
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 * Callees:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140013510 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     CreateVisRgnTracker @ 0x140018348 (CreateVisRgnTracker.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1400189D4 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     UpdateWindowSpriteMonitor @ 0x1400A6748 (UpdateWindowSpriteMonitor.c)
 *     DwmAsyncChildStyleChange @ 0x14012C0D4 (DwmAsyncChildStyleChange.c)
 *     IsToplevelWindowDesktopComposed @ 0x14012D424 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTextChange @ 0x14012D474 (DwmAsyncTextChange.c)
 *     TrackLayeredZorder @ 0x14012E298 (TrackLayeredZorder.c)
 *     UserGetRedirectedWindowOrigin @ 0x14012E4D0 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     GreGetSprite @ 0x14014B798 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x14014CB00 (GreUpdateSpriteClipRgn.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     CreateSprite @ 0x14014D24C (CreateSprite.c)
 *     SendDwmIconChange @ 0x14014DA14 (SendDwmIconChange.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1401F4B6C (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     xxxUpdateWindows @ 0x140257EC8 (xxxUpdateWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, __int64 *a3)
{
  int v3; // ebx
  struct tagWND *TopLevelWindow; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 UserSessionState; // rax
  __int64 result; // rax
  unsigned int updated; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  HRGN ExplicitClipRgn; // r14
  Gre::Base *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rax
  __int64 DCEx; // rax
  __int64 v29; // r9
  HDC v30; // rbx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 RectRgnIndirect; // rax
  struct tagWND *v34; // rbx
  HRGN v35; // r14
  Gre::Base *v36; // rbx
  __int64 v37; // rax
  __int64 Sprite; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdi
  int v43; // ebx
  void *v44; // rax
  struct tagSIZE v45; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-18h] BYREF
  __int64 v47; // [rsp+60h] [rbp-10h]
  __int64 v48; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v49; // [rsp+B8h] [rbp+48h] BYREF

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)a1);
  if ( TopLevelWindow
    && (TopLevelWindow == a1
     || *((_WORD *)a1 + 128) >= 0x602u
     || IsChildWindowDpiIsolationEnabled(a1, *((struct tagWND **)a1 + 13)) && IsChildWindowDpiBoundary(a1)) )
  {
    v3 = 1;
  }
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  if ( (!v8 || !(unsigned int)IsWindowDesktopComposed(v10)) && !v3 )
    return 2151546883LL;
  v11 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
  if ( (v11 & 2) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      v14 = *((_QWORD *)a1 + 5);
      UserSessionState = W32GetUserSessionState(v13, v12);
      result = CreateSprite(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 40LL), a1, v14 + 88, a3);
      updated = result;
      if ( (int)result >= 0 )
      {
        SetOrClrWF(1, a1, 0xA08u, 1);
        CreateVisRgnTracker(a1, 1);
        TrackLayeredZorder(a1);
        if ( IsTopLevelWindow((__int64)a1) )
        {
          ExplicitClipRgn = tagWND::GetExplicitClipRgn(a1);
          if ( ExplicitClipRgn )
          {
            v21 = *(Gre::Base **)a1;
            v22 = W32GetUserSessionState(v19, v18);
            GreUpdateSpriteClipRgn(*(Gre::Base **)(*(_QWORD *)(v22 + 56968) + 40LL), v21, ExplicitClipRgn, 0);
          }
        }
        v23 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
        UpdateWindowSpriteMonitor((__int64 *)a1, v23);
        if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
        {
          SendDwmIconChange(a1);
          v24 = *(_QWORD *)a1;
          v27 = (void *)ReferenceDwmApiPort(v26, v25);
          DwmAsyncTextChange(v27, v24);
        }
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&BugCheckParameter3);
        zzzLockDisplayAreaAndInvalidateDCCache((ULONG_PTR)a1, 17, 0LL);
        if ( (_BYTE)BugCheckParameter3 )
          --*(_DWORD *)(v47 + 28);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 && a2 )
        {
          DCEx = _GetDCEx(*((_QWORD *)a1 + 13), 0LL, 3LL);
          v30 = (HDC)DCEx;
          if ( DCEx )
          {
            v31 = *((_QWORD *)a1 + 5);
            v48 = 0LL;
            BugCheckParameter3 = *(_QWORD *)(v31 + 88);
            v45.cx = *(_DWORD *)(v31 + 96) - *(_DWORD *)(v31 + 88);
            v45.cy = *(_DWORD *)(v31 + 100) - *(_DWORD *)(v31 + 92);
            UserGetRedirectedWindowOrigin(DCEx, (__int64)&v48, v31, v29);
            v32 = *((_QWORD *)a1 + 5);
            LODWORD(v49) = *(_DWORD *)(v32 + 88) - v48;
            HIDWORD(v49) = *(_DWORD *)(v32 + 92) - HIDWORD(v48);
            updated = zzzUpdateLayeredWindow(
                        a1,
                        v30,
                        (const struct tagPOINT *)&BugCheckParameter3,
                        &v45,
                        v30,
                        (struct tagPOINT *)&v49,
                        0,
                        0LL,
                        12,
                        0LL);
            _ReleaseDC(v30);
          }
          RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
          v34 = (struct tagWND *)*((_QWORD *)a1 + 13);
          v35 = (HRGN)RectRgnIndirect;
          v47 = 0LL;
          BugCheckParameter3 = -1LL;
          if ( v34 )
          {
            Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)&BugCheckParameter3, (__int64)v34);
            GreOffsetRgn(
              v35,
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v34 + 5) + 104LL),
              (unsigned int)-*(_DWORD *)(*((_QWORD *)v34 + 5) + 108LL));
          }
          xxxRedrawWindow(v34, 0LL, (__int64)v35, 1157);
          if ( v34 )
            Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(&BugCheckParameter3);
          xxxUpdateWindows(a1, v35);
          GreDeleteObject(v35);
          Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(&BugCheckParameter3);
        }
        return updated;
      }
      return result;
    }
    return 2151546883LL;
  }
  v36 = *(Gre::Base **)a1;
  v37 = W32GetUserSessionState(v11, v9);
  Sprite = GreGetSprite(*(Gre::Base **)(*(_QWORD *)(v37 + 56968) + 40LL), v36);
  v40 = *((_QWORD *)a1 + 5);
  *(_DWORD *)(v40 + 232) &= ~2u;
  *((_DWORD *)a1 + 95) |= 0x8000u;
  if ( a3 )
    *a3 = Sprite;
  v41 = *((_QWORD *)a1 + 5);
  v42 = *(_QWORD *)a1;
  v43 = *(_DWORD *)(v41 + 232);
  v44 = (void *)ReferenceDwmApiPort(v40, v39);
  DwmAsyncChildStyleChange(v44, v42, 4026531840LL, v43);
  return 0LL;
}
